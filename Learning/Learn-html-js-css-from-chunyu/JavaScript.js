//監聽器
//load: 網頁整個載入
// callback: load結束後call function
window.addEventListener("load", function () {
  const p1 = document.getElementById("title");
  console.log(p1);
  p1.innerText = "hihi";

  //   const bt = document.getElementById("bt");
  //   bt.addEventListener("click", sayHello);

  const box = document.getElementById("box");
  box.innerHTML = "<p>Add</p>";

  const inp = document.getElementById("inp");
  inp.addEventListener("keyup", function (e) {
    console.log(e.target.value);
  });
});

function sayHello() {
  window.alert("hello world!");
}

".bt".click(function () {
  sayHello();
});
