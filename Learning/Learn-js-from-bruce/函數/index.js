// 宣告
function hello1() {
  console.log("你好1");
}
function hello2() {
  console.log("你好2");
}
function hello3() {
  console.log("你好3");
}
// 執行
hello1();
hello2();
hello3();

// 有參數的 function
function addMoney(price1, price2, discount) {
  console.log("price1", price1);
  console.log("price2", price2);
  console.log("discount", discount);
  console.log(price1 + price2);
}
addMoney(1000, 200);
addMoney(3000, 850);

// 有回傳值的 function
function newAddMoney(price1, price2, discount) {
  console.log("price1", price1);
  console.log("price2", price2);
  console.log("discount", discount);
  let result = price1 + price2 - discount;
  console.log("result", result);
  let message = "普通會員";

  if (result >= 50000) {
    message = "尊榮會員";
    return message;
  }
  if (result >= 20000) {
    message = "白金會員";
    return message;
  }

  return message;
}
let msg = newAddMoney(5000, 6000, 811);
console.log("msg", msg);

// const card1 = { name: "小明1" };
// const card2 = { name: "小明2" };
// const card3 = { name: "小明3" };
// 構造函數
function createCard(name) {
  this.cardName = name;
}
// 建立或構造
const a1 = new createCard("小明1");
const a2 = new createCard("小明2");
const a3 = new createCard("小明3");
const a4 = new createCard("小明4");
const a5 = new createCard("小明5");
console.log(a1);
console.log(a2);
console.log(a3);
console.log(a4);
console.log(a5);

// 不能理解再講甚麼
function helloworld() {}
let hw = function () {};
let hw2 = () => {};
