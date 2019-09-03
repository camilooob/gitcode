const validator = require("validator");
const chalk = require("chalk");
const yargs = requite("yargs");
const notas = require("./notes.js");
const comando = process.argv[2];

if (comando === "agregar") {
    console.log(chalk.blue("Agregando Nota"));
} else if (comando === "quitar") {
    console.log(chalk.blue("Quitando nota"));
}