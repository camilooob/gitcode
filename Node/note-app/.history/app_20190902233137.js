const validator = require("validator");
const chalk = require("chalk");
const yargs = require("yargs");
const notas = require("./notes.js");

console.log(yargs.argv);
yargs.version("1.1.0");