const p = require('prompt-sync');
const prompt = p();
let a = prompt("Enter a number");
let b = prompt("Enter a number");
let c = Number(a) + Number(b);
console.log(c);