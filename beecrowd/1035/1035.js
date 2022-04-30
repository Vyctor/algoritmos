var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

var xyz = lines.shift().split(" ");

var A = parseInt(xyz.shift());
var B = parseInt(xyz.shift());
var C = parseInt(xyz.shift());
var D = parseInt(xyz.shift());

const booleanExpression =
  B > C && D > A && C + D > A + B && C > 0 && D > 0 && A % 2 === 0;

if (booleanExpression) {
  console.log("Valores aceitos");
} else {
  console.log("Valores nao aceitos");
}
