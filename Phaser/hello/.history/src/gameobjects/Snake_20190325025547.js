class Snake {
    constructor(scene) {
        this.scene = scene;
        this.cuerpo = [this.scene.physics.add.image(10, 10, "cuerpo")];
        this.dir = "derecha";
        this.timer = 0;
        for (let i = 0; i < 3; i++) {

            //Comienza con tres y con el push va entrando en el array 
            this.cuerpo.push(this.scene.physics.add.image(100, 100, "cuerpo"))



        }





    }
    changeMov(dir) {
        this.dir = dir;


    }

    update(time) {
        if (time > this.timer) {
            switch (this.dir) {
                case "derecha":
                    // Muevete 10 pixeles en el eje x
                    this.cuerpo[0].x += 10;
                    break;
                case "izquierda":
                    // Muevete 10 pixeles en el eje x
                    this.cuerpo[0].x -= 10;
                    break;
                case "arriba":
                    // Muevete 10 pixeles en el eje x
                    this.cuerpo[0].y -= 10;
                    break;
                case "abajo":
                    // Muevete 10 pixeles en el eje x
                    this.cuerpo[0].y += 10;
                    break;
            }
            //Entre mas grande es el numero, mas lento va el cuerpo 
            this.timer = time + 200;
        }

    }


}
export default Snake;