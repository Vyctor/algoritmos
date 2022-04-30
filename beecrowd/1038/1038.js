var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

const aux = lines.shift().split(" ");

const cardapio = [4.0, 4.5, 5, 2, 1.5];

const a = parseFloat(aux.shift());
const b = parseFloat(aux.shift());

console.log(`Total: R$ ${(cardapio[a - 1] * b).toFixed(2)}`);
