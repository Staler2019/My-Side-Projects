import threading
import time

# 子執行緒的工作函數
def job():
    for i in range(5):
        print("Child thread: ", i)
        time.sleep(1)

# 建立一個子執行緒
# target 指定讓子執行緒執行的函式
t = threading.Thread(target = job)

# 執行該子執行緒
# 我們還是可以同時的在主程式中繼續處理其他的工作
t.start()

# 主執行緒繼續執行自己的工作
for i in range(3):
    print("Main thread: ", i)
    time.sleep(1)

# 等待 t 這個子執行緒結束
# 如果有些工作要等待子執行緒完成後才能處理的話，可以使用 join()
# i.e. 放在 join() 之後的程式碼會等到子執行緒完成後，才會接著執行
t.join()

print("Done.")