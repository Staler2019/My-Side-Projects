'''
RLock 是一個可重複取得使用權的鎖定功能，它跟普通的 Lock 類似，
但是它可以允許同一個執行緒重複取得鎖定的使用權。

若以普通的 Lock 來說，如果同一個執行緒呼叫了兩次 acquire，
則在呼叫第二次的時候，就會被擋住。

如果想要讓同一個執行緒可以重複取得鎖定，可以改用有重複鎖定的 RLock。

RLock 內部有一個計數器，
當執行緒在每次呼叫 RLock 的 acquire 的時候，
計數器就會遞增 1，紀錄這個鎖定被取得了幾多少次，
如果呼叫了 release 時，該計數器就會遞減 1，
當計數器遞減至 0 的時候，才會真正釋放鎖定，讓其他的執行緒使用，
而在 RLock 的計數器還處於大於 0 的狀態時，其它的執行緒都無法取得這個鎖定的使用權。
'''

import time
import threading
import queue

def job(num, queue, rlock):
    print(f"Thread {num} starts.")
    while queue.qsize() > 0:
        # 取得 RLock
        flag = 0
        msgs = []
        for i in range(3):
            rlock.acquire()
            print(f"RLock acquired by Worker {num}")
            flag += 1
            if queue.qsize() > 0:
                msgs.append(queue.get())
            else:
                msgs.append("No Data")
                break

        for i in range(flag):
            # 僅允許有限個執行緒同時進的工作
            print(f"Worker {num}: {msgs[i]}")
            time.sleep(1)
            # 釋放 RLock
            print(f"RLock released by Worker {num}")
            rlock.release()
    print(f"Thread {num} finished job function.")

my_queue = queue.Queue()
number_of_data = input("How many data? (Input integer):")
for i in range(int(number_of_data)):
    my_queue.put(f"Data {i}")

rlock = threading.RLock()

threads = []
for i in range(3):
    threads.append(threading.Thread(target=job, args=(i+1, my_queue, rlock)))
    threads[i].start()

for i in range(3):
    threads[i].join()

print("Done.")