const validator = require("validator");
const chalk = require("chalk");
const yargs = require("yargs");
const notas = require("./notes.js");

/// Cambiar version
yargs.version("1.2.0");
// add , remove , read , list

console.log(yargs.argv);