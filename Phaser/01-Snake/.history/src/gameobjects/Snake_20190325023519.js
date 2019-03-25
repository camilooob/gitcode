class Snake {
    constructor(scene) {
        this.scene = scene;
        this.cuerpo = this.scene.physics.add.image(10, 10, "cuerpo");
        this.dir = "derecha";
        this.timer = 0;

    }
    update(time) {
        if (time > this.timer) {
            switch (this.dir) {
                case "derecha":
                    // Muevete 10 pixeles en el eje x
                    this.cuerpo.x += 10;
                    break;
            }
            this.timer = time + 50;
        }

    }


}
export default Snake;