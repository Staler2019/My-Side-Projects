// 陣列 Array
let classA = ["小明", "小白", "小華"];
console.log("轉學前:" + classA);
console.log("轉學前:", classA);
classA.push("小黃");
console.log("轉學前:", classA);
let photos = [
  "http://wallpaperheart.com/wp-content/uploads/2018/08/scenery-photo-hd-8.jpg",
  "https://getwallpapers.com/wallpaper/full/0/6/0/805006-vertical-scenery-background-1920x1080.jpg",
  "http://wallpaperheart.com/wp-content/uploads/2018/04/best-scenery-wallpaper-scenery-images.jpg",
];
console.log("photos", photos);
console.log("第一筆photos", photos[0]); // 用index(索引)
console.log("未定義的第四筆photos", photos[3]); // 用index(索引)

console.log(classA.length);
console.log("photos", photos.length);

// 物件 Object
const igCard = {
  name: "楊佳峻前端的名片",
  address: "aaabbb",
  age: 999,
};
console.log("名字", igCard.name); // card的name

const igPost1 = {
  image:
    "http://wallpaperheart.com/wp-content/uploads/2018/08/scenery-photo-hd-8.jpg",
  desc: "這是一張圖片",
  date: "2021/4/25",
  comment: ["好漂亮", "我也好想去..."],
};

const igPost2 = {
  image:
    "https://getwallpapers.com/wallpaper/full/0/6/0/805006-vertical-scenery-background-1920x1080.jpg",
  desc: "這是第二張圖片",
  date: "2021/4/29",
  comment: ["好漂亮", "我也好想去...", "好漂亮", "我也好想去..."],
};

const igWall = [
  // 動態牆
  igPost1,
  igPost2,
];

console.log("igWall", igWall);
