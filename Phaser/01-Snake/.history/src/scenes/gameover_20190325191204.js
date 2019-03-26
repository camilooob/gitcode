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
        this.scene.stop("UI");
        this.add.dynamicBitmapText(this.sys.game.config.width / 2, (this.sys.game.config.height / 2) - 30, "pixel", "GAMEOVER", 20).setOrigin(0.5);


    }
    salirscene() {
        this.scene.start("Menu");
    }


}

export default Gameover;