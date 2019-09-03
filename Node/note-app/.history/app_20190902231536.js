const validator = require("validator");
const chalk = require("chalk");
const notas = require("./notes.js");

if (comando === "agregar") {
    console.log(chalk.blue("Agregando Nota"));
} else if (comando === "quitar") {
    console.log(chalk.blue("Quitando nota"));
}