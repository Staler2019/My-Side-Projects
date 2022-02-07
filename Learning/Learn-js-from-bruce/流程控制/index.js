/*
if (...條件...) {
    ...成立做的事...
} else {
    ...未成立做的事...
}
*/
let condition = 100 > 50;
console.log("condition", condition);
if (condition) {
  console.log("100確實大於50");
} else {
  console.log("錯誤");
}

/*
算術運算子
  + - * /
邏輯運算子
  && || !
*/
/*
比較相等
1. 嚴格相等 ===
  比較型別及內容
2. 一般相等 ==
  換成同型別比較內容
3. Object.is(a, b)
  同物比較(與python相似，同類別會得到false)
*/
/*
比較不相等
1. 嚴格不相等 !==
2. 一般不相等 !=
 */
console.log(100 == 99);

let scoreA = 66,
  scoreB = 99;
let scoreCond = scoreA === scoreB;
if (scoreA > scoreB) {
  console.log("A考得比較高分");
} else {
  console.log("B考得比較高分");
}

score = 60;
if (score === 100) {
  console.log("好棒棒");
} else if (score > 70) {
  console.log("再加油");
} else if (score > 60) {
  console.log("下次小心點");
} else {
  console.log("去補修");
}

let key = 100;
switch (key) {
  case 100:
    console.log("考了100分");
    break;
  case 200:
    console.log("考了200分");
    break;
  case 300:
    console.log("考了300分");
    break;
  default:
    console.log("沒去考試喔");
    break;
}
