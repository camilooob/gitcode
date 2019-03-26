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
        this.add.image(this.sys.game.config.width / 2, this.sys.game.config.width / 2 - 50, "comida").setScale(6);

    }


}

export default Menu;