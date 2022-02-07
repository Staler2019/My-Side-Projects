class Card {
  constructor(initName) {
    this.name = initName;
  }
  // this: 當下的執行環境，非物件
  hello() {
    console.log("hello", this.name);
  }
}
const c1 = new Card("楊佳峻");
console.log("c1", c1);
console.log(c1.name);
c1.hello();
// 新的物件只繼承方法，找不到就不做
// 因為物件界並不嚴謹，只要標籤名字對到就可以混用
const a = { name: "AA" };
const a2 = { naame: "AA" };
a.helloo = c1.hello;
console.log("a name=AA");
a.helloo();
console.log("a2 name=undefined");
a2.helloo = c1.hello;
a2.helloo();

/*
Card.hello() 並不存在，function 不是 js 的 class 的一個專屬方法
實際存在的是 Card.prototype.hello ===(等同於宣告告方法)
Card.prototype.hello = function (params) {
  ...
}
-> 執行網頁時，不會因為物件的多個生成造成相同 function 也多個產生
(1) 若要使單一物件綁定 function 則需要此行
Object.selfFunction = Object.hello.bind(this)
-> 寫在 constructor 裡則是 this.hellooo = this.hello.bind(this)
(2) 若要使單一類別擁有自己的 function 則需要改變 function 宣告方式成 lambda
-> 例如: hello = () +> {
            ...
        }
*/

console.log("a name=AA, but use c1.name=楊佳峻");
a.hello = c1.hello.bind(c1);
a.hello();
