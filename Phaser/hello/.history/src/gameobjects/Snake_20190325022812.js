class Snake {
    constructor(scene) {
        this.scene = scene;
        this.cuerpo = this.scene.physics.add.image(10, 10, "cuerpo");
        this.dir = "derecha";


    }
    update() {
        switch (this.dir) {
            case "derecha":
                this.cuerpo.x += 10;
                break;
        }
    }


}
export default Snake;