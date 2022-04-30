const input = require("fs").readFileSync("/dev/stdin", "utf8");
const lines = input.split("\n");

const aux = lines.shift().split(" ");

const A = parseFloat(aux.shift());
const B = parseFloat(aux.shift());
const C = parseFloat(aux.shift());

function calcularDiscriminante(a, b, c) {
  return Math.pow(b, 2) - 4 * a * c;
}

function calcularBhaskara(a, b, discriminante) {
  const raizDelta = Math.sqrt(discriminante);

  const x1 = (-b + raizDelta) / (2 * a);
  const x2 = (-b - raizDelta) / (2 * a);
  return [x1, x2];
}

const discriminante = calcularDiscriminante(A, B, C);

if (discriminante < 0 || A === 0) {
  console.log("Impossivel calcular");
} else {
  const [x1, x2] = calcularBhaskara(A, B, discriminante);
  console.log(`R1 = ${x1.toFixed(5)}`);
  console.log(`R2 = ${x2.toFixed(5)}`);
}
