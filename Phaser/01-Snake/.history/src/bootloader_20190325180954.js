//Creamos nuestra primera escena
class Bootloader extends Phaser.Scene {
    // Dentro usamos el constructor
    constructor() {
        super("Bootloader");

    }

    // preload es el metodo donde cargamos los assets
    preload() {
        console.log("Soy Bootloader");
        // Se pone el nombre que le queremos dar, seguido de la ruta
        this.load.image("cuerpo", "./assets/body.png")
        this.load.image("comida", "./assets/food.png")
        this.load.image("tablero", "./assets/tablero.png")
        // Llamamos a la Escena Play
        // Importamos la fuente (el json de la fuentne y la imagen )
        this.load.json("fontJSON", "../assets/font/font.json");
        this.load.image("font", "../assets/font/font.png");


    }
    create() {
        // Cargamos la fuente
        const fontJSON = this.cache.json.get("fontJSON");
        console.log(fontJSON);
        //Iniciamos el juego con la escena Play
        this.scene.start("Play");

    }

}

export default Bootloader;