// Configuración Phaser
import Bootloader from "./bootloader.js";
import Play from "./scenes/play.js";
import Gameover from "./scenes/gameover.js";
import Menu from "./scenes/menu.js";
import UI from "./scenes/UI.js";
const config = {
    // creamos el cuadro
    title: "Snake",
    width: 320,
    height: 180,
    parent: "container",
    type: Phaser.AUTO,
    backgroundColor: "#f9ca24",
    pixelArt: true,
    physics: {
        default: "arcade"


    },

    scene: [Bootloader, Play, Gameover, Menu, UI]

};
//Creamos el juego
new Phaser.Game(config);