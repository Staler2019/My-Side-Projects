var fs = require("fs");
fs.appendFile("text.txt", "我很好!", function (err) {
  if (err) console.log(err);
  else console.log("Append operation complete.");
});
