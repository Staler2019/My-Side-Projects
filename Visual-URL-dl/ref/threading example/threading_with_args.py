'''
通常我們在撰寫平行化的程式時，
都會使用多個子執行緒，並且傳入不同的參數，
讓個子執行緒各自負責不同的工作，
這時候就可以在建立子執行緒時，使用 args 參數指定要傳數的參數。
'''

import threading
import time

# 子執行緒的工作函數
def job(num, string):
    print("Thread", num, string)
    time.sleep(1)

# 建立 5 個子執行緒
threads = []
strings = [chr(i) for i in range(97, 102)]
for i in range(5):
    threads.append(threading.Thread(target = job, args = (i, strings[i])))
    threads[i].start()

# 主執行緒繼續執行自己的工作
# ...

# 等待所有子執行緒結束
for i in range(5):
    threads[i].join()

print("Done.")