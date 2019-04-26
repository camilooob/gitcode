const fs = require("fs"); //Importamos la libreria fs 

fs.writeFileSync("notes.txt", "Este archivo fue creado por Node.js");

// Chellenge: Append a message to notes.txt
//
// 1. Use appendFileSync to append to the file
// 2. Run the script 
// 3. Check your work by opening the file and viewring the appended text

fs.appendFileSync("notes.txt", " My name is Camilo and Im 25 years old");