# 抓ptt電影版的html
import bs4
import urllib.request as req

url = "https://www.ptt.cc/bbs/movie/index.html"
# 建立一個 Request 物件，附加 Request Headers 資訊
headers = {
    "User-Agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/81.0.4044.92 Safari/537.36"
}
request = req.Request(url, headers=headers)
with req.urlopen(request) as response:
    data = response.read().decode("utf-8")
# print(data)
# 解析資料 
root = bs4.BeautifulSoup(data, "html.parser")
# print(root.title.string)
titles = root.find_all("div", class_="title")  # 尋找所有 class= 'title' 的 div 標籤
for title in titles:
    if title.a != None:  # 如果標題包含 a 標籤 (沒有被刪除) 則印出來
        print(title.a.string)

## method 2
import requests

headers = {
    "User-Agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/81.0.4044.92 Safari/537.36"
}
url = "https://www.ptt.cc/bbs/movie/index.html"
response = requests.get(url, headers=headers)
response.encoding = "utf-8"

from bs4 import BeautifulSoup

soup = BeautifulSoup(response.text, "lxml")  # 指定 lxml 作為解析器
