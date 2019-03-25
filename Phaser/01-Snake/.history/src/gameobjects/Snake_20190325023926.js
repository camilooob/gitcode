class Snake {
    constructor(scene) {
        this.scene = scene;
        this.cuerpo = [this.scene.physics.add.image(10, 10, "cuerpo")];
        this.dir = "derecha";
        this.timer = 0;

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
                case "abaji":
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