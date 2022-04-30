var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

const [tempoGasto, velocidadeMedia] = input.split("\n");

const quantidadeGasolinaNecessaria = (tempoGasto * velocidadeMedia) / 12;

console.log(quantidadeGasolinaNecessaria.toFixed(3));
