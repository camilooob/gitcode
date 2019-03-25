// Configuración Phaser
import Bootloader from "./bootloader.js";

const config = {
    // creamos el cuadro
    title: "Snake",
    width: 320,
    height: 180,
    parent: "container",
    type: Phaser.AUTO,
    backgroundColor: "#f9ca24",
    pixelArt: true,

};
//Creamos el juego
new Phaser.Game(config);