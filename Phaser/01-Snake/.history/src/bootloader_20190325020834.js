//Creamos nuestra primera escena
class Bootloader extends Phaser.Scene {
    // Dentro usamos el constructor
    constructor() {
        super("Bootloader");

    }

    // preload es el metodo donde cargamos los assets
    preload() {
        console.log("Soy Bootloader");

        this.load.image("cuerpo", "./assets/body.png")
        this.load.image("comida", "./assets/food.png")
        this.load.image("tablero", "./assets/tablero.png")
        // Llamamos a la Escena Play
        this.scene.start("Play");
    }


}

export default Bootloader;