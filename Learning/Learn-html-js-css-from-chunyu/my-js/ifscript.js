// let aa = 1;
// console.log("aa", aa);

let score = 100;
if (score == 100) {
  console.log("S");
} else if (score >= 90) {
  // elif
  console.log("A");
} else {
  console.log("你很爛");
}

switch (score) {
  case 100:
    console.log("考了100分");
    break;
  case 90:
    console.log("考了90分");
    break;
  default:
    console.log("可惜沒整數");
    break;
}
