const validator = require("validator");
const chalk = require("chalk");
const yargs = require("yargs");
const notas = require("./notes.js");

/// Cambiar version
yargs.version("1.2.0");
// Creando comando para agregar nota
yargs.command({
    command: "agregar",
    describe: "Agregar nota",
    handler: function() {
        console.log("Agregando Nota");
    }
});
// Creando comando para quitar nota
yargs.command({
    command: "quitar",
    describe: "Quitar Nota",
    handler: function() {
        console.log("Quitando nota");
    }
});
// add , remove , read , list

console.log(yargs.argv);