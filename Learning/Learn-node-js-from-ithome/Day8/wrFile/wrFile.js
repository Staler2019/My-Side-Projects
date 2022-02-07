var fs = require("fs");
fs.writeFile("test.txt", "你好嗎?", function (err) {
  if (err) console.log(err);
  else console.log("Write operation complete.");
});
