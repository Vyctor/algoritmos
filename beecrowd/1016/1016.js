const input = require("fs").readFileSync("/dev/stdin", "utf8");
const lines = input.split("\n");

const qtdMinutos = input * 2;

console.log(qtdMinutos + " minutos");
