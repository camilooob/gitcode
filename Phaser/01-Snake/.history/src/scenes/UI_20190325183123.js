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

        // agregamos texto puntos
        this.add.dynamicBitmapText(10, 7, "pixel", "PUNTOS", 8);
        // agregamos puntaje al final
        // Phaser.Utils.String.Pad(0, 6, 0, 1) rellena con el tablero de ceros 
        this.puntos = this.add.dynamicBitmapText(this.sys.game.config.width - 60, 7, "pixel", Phaser.Utils.String.Pad(0, 6, 0, 1), 8);


    }
    //Creamos un metodo que agrege los puntos
    addPoint() {
        this.puntos.setText(
            Phaser.Utils.String.Pad(parseInt(this.puntos.text) + 10, 6, 0, 1)




        );




    }

}

export default UI;