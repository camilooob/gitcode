const validator = require("validator");
const chalk = require("chalk");
const yargs = require("yargs");
const notas = require("./notes.js");

/// Cambiar version
yargs.version("1.2.0");
// Create add commands
yargs.command({
    command: "agregar",
    describe: "Agregar nota",
    handler: function() {
        console.log("Agregando Nota");
    }
});

// add , remove , read , list

console.log(yargs.argv);