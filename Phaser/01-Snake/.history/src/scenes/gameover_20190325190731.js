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
        this.add.dynamicBitmapText(this.sys.game.config.width / 2, (this.sys.game.config.height / 2), "pixel", "GAMEOVER", 20);


    }


}

export default Gameover;