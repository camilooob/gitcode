//Creamos nuestra primera escena
import Snake from "../gameobjects/Snake.js";
import Comida from "../gameobjects/Comida.js";
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
        //Llamamos los objetos y los volvelos locales para poderlos usar en este javascript
        //Agregamos elementos al a escena Play
        this.snake = new Snake(this);
        this.comida = new Comida(thzis);
    }
    create() {

        this.input.keyboard.on("keydown_RIGHT", () => {
            console.log("Derecha");
            this.snake.changeMov("derecha");
        });
        this.input.keyboard.on("keydown_LEFT", () => {
            console.log("Izquierda");
            this.snake.changeMov("izquierda");
        });
        this.input.keyboard.on("keydown_UP", () => {
            console.log("Arriba");
            this.snake.changeMov("arriba");
        });
        this.input.keyboard.on("keydown_DOWN", () => {
            console.log("Abajo")
            this.snake.changeMov("abajo");

        });
        this.input.keyboard.on("keydown_W", () => {
            console.log("Abajo")
            this.snake.changeMov("arriba");

        });
        this.input.keyboard.on("keydown_S", () => {
            console.log("Abajo")
            this.snake.changeMov("abajo");

        });
        this.input.keyboard.on("keydown_A", () => {
            console.log("Abajo")
            this.snake.changeMov("izquierda");

        });
        this.input.keyboard.on("keydown_D", () => {
            console.log("Abajo")
            this.snake.changeMov("derecha");

        });


    }



    update(time) {

        this.snake.update(time);
    }
}

export default Play;