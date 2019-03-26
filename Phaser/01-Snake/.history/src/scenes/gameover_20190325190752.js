//Escena cuando perdemos
class Gameover extends Phaser.Scene {
    // Dentro usamos el constructor
    constructor() {
        super("Gameover");

    }


    preload() {
        console.log("Soy Gameover");


    }
    create() {
        this.add.dynamicBitmapText(this.sys.game.config.width, (this.sys.game.config.height / 2) - 30, "pixel", "GAMEOVER", 20);


    }


}

export default Gameover;