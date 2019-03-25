class Comida {
    constructor(scene) {
        //Para poder trabajar en la escana
        this.scene = scene;
        //Agregamos la imagen de la comida

        this.comida = this.scene.physics.add.group({
            key: "comida",
            setXY: {
                x: 30
                y: 30
            }
        });

    }

}

export default Comida;