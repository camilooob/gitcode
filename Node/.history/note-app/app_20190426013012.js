const validator = require('validator')
const getNotes = require('./notes.js')
const chalk = require('chalk')

const msg = getNotes()
console.log(chalk.red.bold(msg))