//Creamos nuestra primera escena
class Bootloader extends Phaser.Scene {
    // Dentro usamos el constructor
    constructor() {
        super("Bootloader");

    }

    // Init es el metodo que llamamos despues del constructor
    init() {
        console.log("Soy Init");

    }

    // preload es el metodo donde cargamos los assets
    preload() {
        console.log("Soy Preload");

    }
    update() {


    }


}

export default Bootloader;