import requests
from bs4 import BeautifulSoup

r = requests.get("https://www.ptt.cc/bbs/movie/index.html")
print(r.text)
