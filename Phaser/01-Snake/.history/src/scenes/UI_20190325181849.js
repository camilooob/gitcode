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


        //Agregamos el tablero de punntuaciònn
        this.add.image(0, 0, "tablero").setOrigin(0);

        // agregamos texto
        this.add.dynamicBitmapText(10, 7, "pixel", "PUNTOS", 8);



    }


}

export default UI;