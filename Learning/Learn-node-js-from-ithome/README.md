# Learn node.js from ithome

Article url: https://ithelp.ithome.com.tw/articles/10184550

## 載入 modules 的注意事項 ([原文在這頁](https://ithelp.ithome.com.tw/articles/10185083))

最後，我們來看看，從資料夾載入 modules 的一些事項。

一般而言，我們通常載入 modules 用 完整路徑，像這樣：
app.js

```.js
var log = require('./utility/log.js');
```

但，在 nodeJS 裡，我們可以直接搜尋資料夾，而不指定檔案，像這樣：
app.js

```.js
var log = require('./utility');
```

**那你就會好奇啦，這樣，我們要根據什麼來找所要的 modules 呢？**
很好的問題！

因為如此，在上一個 app.js 例子中，nodeJS 把整個 utility 資料夾，當成一個 package，所以，它會自動在這資料夾裡去找 package 定義檔，預設為 package.json，之後，再根據定義檔裡面的關鍵字 main 所描述的檔名，載入檔案。

所以，在這個例子中，如果要這樣做，必須自行定義一個 package.json 放在此 utility 資料夾裡。
如下：
./utility/package.json

```.json
{
    "name" : "log",
    "main" : "./log.js"
}
```

#### Note

如果，資料夾不存在 package.json，則，預設會自動尋找檔名為 index.js 的檔案。
