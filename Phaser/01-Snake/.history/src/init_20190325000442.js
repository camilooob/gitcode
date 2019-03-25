const config = {
    // creamos el cuadro
    width: 320,
    height: 180,
    parent: "container",
    type: Phaser.AUTO
    backgroundColor: "#f9ca24"
    pixelArt: true,
    scene: {
        preload: preload,
        create: create,
        update: update
    }


};
//Creamos el juego
new Phaser.Game(config);