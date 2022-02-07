var fs = require("fs");
var data = fs.readFileSync("dummyfile.txt", "utf8");
console.log(data);
