//Creamos nuestra primera escena
class Bootloader extends Phaser.Scene {
    // Dentro usamos el constructor
    constructor() {
        super("Bootloader");

    }

    // preload es el metodo donde cargamos los assets
    preload() {
        console.log("Soy Preload");

    }


}

export default Bootloader;