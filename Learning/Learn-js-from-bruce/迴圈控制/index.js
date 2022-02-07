for (let i = 0; i < 10; i++) {
  console.log("i:", i);
}

let a = 10;
a += 20;
console.log("a:", a);

let classA = [100, 70, 40];
classA.push(59);
console.log("classA:", classA);
for (let i = 0; i < classA.length; i++) {
  console.log("i:", classA[i]);
}
for (let i = 0; i < classA.length; i++) {
  if (i === 2) {
    classA[i] = 999;
  }
}
console.log("classA:", classA);

const a1 = { name: "楊佳峻", desc: "貼文一" };
console.log(a1.name);
const posts = [a1, { name: "楊佳峻2號", desc: "貼文二" }];
for (let i = 0; i < posts.length; i++) {
  if (i === 0) {
    let post = posts[i];
    console.log(post);
  }
}

let condition = true;
let target = 10;
let i = 0;
while (condition) {
  if (i === target) {
    condition = false;
  }
  console.log(i);
  i++;
}
