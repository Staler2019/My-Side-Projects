// 1 - 載入 Node.js 原生模組 http
var http = require("http");

// 2 - 建立server
var server = http.createServer(function (req, res) {
  // 在此處理 客戶端向 http server 發送過來的 req
});

// 3 - 進入此網站的監聽 port, 就是 localhost:xxxx 的 xxxx
server.listen(5000);

console.log("Node.js web server at port 5000 is running..");
