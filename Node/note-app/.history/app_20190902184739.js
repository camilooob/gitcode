const validator = require("validator");
const chalk = require("chalk");
const getNotes = require("./notes.js");

const mensaje = getNotes();

const email = validator.isEmail("camilobaq@hotmail.com");
console.log(mensaje);
console.log(email);
console.log(chalk.blue("Hola a todos!"));