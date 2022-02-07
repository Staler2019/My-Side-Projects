// console.log(100);

// let + (variable)
// var不等於var，但let可取代var用
// const

// 常用5類型
// 1. "" -> 字串 string
let myName = "我是楊佳峻";
console.log(myName); // 白色
// 2. 數字 -> 數字 number
let score = 100;
console.log(score); // 紫色
// 3. 布林值 boolean : true/false
let isFake = true;
console.log(isFake); // 紫色
// 4. 空的 : 但 undefined 不等於 null
let bag = undefined;
console.log(bag); // 白色
let bag2 = null;
console.log(bag2); // 白色

// 字串加法
let age = "我的年齡:999歲";
let word = myName + "，" + age;
console.log(word);

// 數字四則運算 + - * / %
console.log(score + 200);
console.log(score - 200);
console.log(score * 200);
console.log(score / 200);
console.log(score % 200);
console.log(-score % 200);

// 可修改變數
let a1 = "aaa";
console.log(a1);
a1 = "bbb";
console.log(a1);

// 不可修改變數 const
const a2 = "aaa";
console.log(a2);
a2 = "bbb";
console.log(a2);
