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
        //Utilizamos setDepth para bajar una capa atras.
        this.comida.getChildren()[0].setOrigin(0).setDepth(-1);



    }
    // Metodo que crea la comida en posiciòn ramdoom
    crearComida() {

        // Genera aleatoreamennte la comida entre 30 pixeles en a la izquierda y el maximo de la pantalla menos 30 pixeles.
        let x = Phaser.Math.Between(30, this.scene.sys.game.config.width - 30);
        let y = Phaser.Math.Between(30, this.scene.sys.game.config.height - 30);
        //Dividimos el canva en una Grill de 10. 
        x = Phaser.Math.Snap.To(x, 10);
        y = Phaser.Math.Snap.To(y, 10);

        //Destruye la comida
        this.comida.getChildren()[0].destroy();
        //crea la comida
        this.comida.create(x, y, "comida");
        //Alinea la posiciòn del objeto
        this.comida.getChildren()[0].setOrigin(0).setDepth(-1);


    }





}

export default Comida;