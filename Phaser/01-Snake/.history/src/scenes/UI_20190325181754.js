//Escena encargada de mostrar puntajes
class UI extends Phaser.Scene {
    // Dentro usamos el constructor
    constructor() {
        super("UI");

    }


    preload() {
        console.log("Soy UI");


    }
    create() {
        this.add.image(0, 0, "tablero").setOrigin(0);
        this.add.dynamicBitmapText(10, 10, "pixel", "PUNTOS", 8);



    }


}

export default UI;