// array
let cla = ["a", "b", "c", 132, true];
console.log(cla);

console.log(cla[1]);
// '', ""
// ===, ==, Object.is()

/*
python dic:
    {"label":"value"}
c++ map
*/

const card = {
  name: "aaa",
  phone: "0912345678",
  address: "台北市中央路",
  family: ["cat", "dog", "pig"],
};
/*
struct Card {
    int a;

};
Card card;
card.a;
*/

console.log(card.address);
console.log(card.family.length);
console.log(cla.length);

let card1 = card; // 別名
card1.address = "台中市中山路";
let allIn = [card, card1];
console.log(allIn);
