'''
有時候因為系統資源有限的因素（例如考量 CPU 或記憶體的限制），在處理某些特別耗資源的工作時，
僅允許有限個執行緒同時進行，這個狀況跟上面介紹的鎖定（lock）有點類似，
但是鎖定的方式是僅允許一個執行緒進行某項工作，
而這裡我們是允許多個執行緒同時執行的，但要限制同時執行的執行緒數量上限。

旗標（semaphore）的作用跟鎖定（lock）類似，但是它多了一個計數器的功能，
當一個執行緒呼叫了 acquire 時，旗標內部的計數器就會遞減 1，
而當執行緒呼叫了 release 時，計數器就會遞增 1，
當計數器遞減到 0 的時候，後面來的執行緒就要等待其他執行緒 release 後才能繼續。
'''

import time
import threading
import queue

class Worker(threading.Thread):
    def __init__(self, queue, num, semaphore):
        threading.Thread.__init__(self)
        self.queue = queue
        self.num = num
        self.semaphore = semaphore

    def run(self):
        while self.queue.qsize() > 0:
            msg = self.queue.get()

            # 取得旗標
            semaphore.acquire()
            print(f"Semaphore acquired by Worker {self.num}")

            # 僅允許有限個執行緒同時進的工作
            print(f"Worker {self.num}: {msg}")
            time.sleep(1)

            # 釋放旗標
            print(f"Semaphore released by Worker {self.num}")
            self.semaphore.release()

my_queue = queue.Queue()
for i in range(5):
     my_queue.put(f"Data {i}")

# 建立旗標
semaphore = threading.Semaphore(2)

my_worker1 = Worker(my_queue, 1, semaphore)
my_worker2 = Worker(my_queue, 2, semaphore)
my_worker3 = Worker(my_queue, 3, semaphore)

my_worker1.start()
my_worker2.start()
my_worker3.start()

my_worker1.join()
my_worker2.join()
my_worker3.join()

print("Done.")