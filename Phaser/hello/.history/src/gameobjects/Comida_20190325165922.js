class Comida {
    constructor(scene) {
        //Para poder trabajar en la escana
        this.scene = scene;

        //Creamos la comida y se muestra en pantalla creandno un grupo
        this.comida = this.scene.physics.add.group({
            key: "comida",
            setXY: {
                x: 30,
                y: 30
            }
        });
        console.log(this.comida)
    }

}

export default Comida;