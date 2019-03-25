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
        //Utilizamos setOrigin para que la comida se alinie con la septiente. Se irigina nel punto cero, no en el centro
        this.comida.getChildren()[0].setOrigin(0);
    }

}

export default Comida;