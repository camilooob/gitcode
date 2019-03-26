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
        this.add.dynamicBitmapText(this.sys.game.config.width / 4 + 10, (this.sys.game.config.height / 2) - 30, "pixel", "GAMEOVER", 20).setOrigin(0.5);


    }


}

export default Gameover;