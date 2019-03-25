//Creamos nuestra primera escena
class Play extends Phaser.Scene {
    // Dentro usamos el constructor
    constructor() {
        super("Play");

    }

    // preload es el metodo donde cargamos los assets
    preload() {
        console.log("Escena Play");
        // Llamamos los assets 
        // x , y , nombre , 
        this.add.image(10, 10, "cuerpo");
    }


}

export default Play;