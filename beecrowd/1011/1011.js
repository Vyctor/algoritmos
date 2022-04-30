var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

/**
 * Escreva a sua solução aqui
 * Code your solution here
 * Escriba su solución aquí
 */
const volumeEsfera = (raio) => {
  return ((4 / 3) * 3.14159 * Math.pow(raio, 3)).toFixed(3);
};

const raio = lines.shift();
console.log("VOLUME =", volumeEsfera(raio));
