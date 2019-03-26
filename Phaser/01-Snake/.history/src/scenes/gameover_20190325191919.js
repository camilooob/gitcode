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

        this.evento = setTimeout(() => {


        }, 15000);

        this.input.on("pointerdown", () => {
            this.salirscene();

        });
        this.input.on("keydown:_ENTER", () => {
            this.salirscene();
        })






    }
    salirscene() {
        clearTimeout(this.evento);
        this.scene.start("Menu");
    }


}

export default Gameover;