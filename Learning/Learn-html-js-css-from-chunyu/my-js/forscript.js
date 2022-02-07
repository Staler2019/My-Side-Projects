for (let i = 0; i < cla.length; i++) {
  console.log(cla[i]);
}

cla.push(undefined); // list push_back
// cla += 20; // cla(list) -> string(", ")
// ["a", "b", "c" ...] -> "a, b, c, ..."

for (let i = 0; i < cla.length; i++) {
  console.log(cla[i]);
}
// {[]}
// [{}]

let loop = 3;
while (loop--) {
  console.log(loop);
}
// no do...while
