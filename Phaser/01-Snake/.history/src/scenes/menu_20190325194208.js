// Menu del juego
class Menu extends Phaser.Scene {
    // Dentro usamos el constructor
    constructor() {
        super("Menu");

    }


    preload() {
        console.log("Soy Menu");


    }
    create() {
        this.add.image(this.sys.game.config.width / 2, this.sys.game.config.height / 2 - 50, "comida").setScale(6);
        this.add.dynamicBitmapText(this.sys.game.config.width / 2, this.sys.game.config.height / 2, "pixel", "SNAKE", 20).setOrigin(0.5);

        const pressButton = this.add.dynamicBitmapText(this.sys.game.config.width / 2, this.sys.game.config.height - 40, "pixel", "PRESS START", 8).setOrigin(0.5);
        // Con tweens hacemos que el texto parpadee
        this.tweens.add({
            targets: pressButton,
            // Alpha es la transparencia
            alpha: 0,
            ease: (x) => x < 0.5 ? 0 : 1,
            duration: 500,
            yoyo: true,
            repeat: -1
        });
        This.input.keyboard.on("keydown_ENTER", () => {
            console.log("enter")
            this.scene.start("Play");

        });

        this.input.on("pointerdown", () => {
            this.salirscene();

        })

    }


}

export default Menu;