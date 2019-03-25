class Snake {
    constructor(scene) {
        this.scene = scene;
        this.cuerpo = [];
        this.dir = "izquierda";
        this.timer = 0;
        // Lo creamos para que no permita devolver la serpiente sobre si misma
        this.oldDir = "derecha";
        //Aqui definimos el tamaño de la serpiente
        for (let i = 0; i < 3; i++) {

            //Comienza con tres y con el push va entrando en el array 
            this.cuerpo.push(
                this.scene.physics.add.image(100 + i * 10, 100, "cuerpo")
                .setOrigin(0)

            );
        }
        //Comienza en 1 porque la primera pieza ( cabeza) no nos interesa contarla 
        for (let i = 1; i < 20; i++) {
            //Agregamos la colisiòn cuando choque con su cuerpo
            this.scene.physics.add.collider(this.cuerpo[0], this.cuerpo[i], () => this.choca());

        }

        setInterval(() => {
            this.crece();
        }, 1000);
        // 1000 milisegundos son 1 segundo 



        //Cambia de movimiento 
    }
    //Creamos la variable para que cresca la serpiente cuando come
    crece() {
        const obj = this.cuerpo[this.cuerpo.length - 1];
        const newObj = this.scene.physics.add.image(obj.x, obj.y, "cuerpo").setOrigin(0);
        this.cuerpo.push(newObj);
        this.scene.physics.add.collider(this.cuerpo[0], newObj, () => this.choca());
    }
    //Creamos la variable choca, que cuando se choque envie a la escena GameOver.
    choca() {
        this.scene.scene.start("Gameover");


    }





    changeMov(dir) {

        // si es la direccion direfente aplicar. esto no permite devovlerse sobre si misma a la serpiente 
        if (this.oldDir != dir) {
            this.dir = dir;

        }




    }

    update(time) {

        if (time > this.timer) {
            // con el for pegamos el cuerpo a la cabeza jeje
            for (let i = this.cuerpo.length - 1; i > 0; i--) {
                this.cuerpo[i].x = this.cuerpo[i - 1].x;
                this.cuerpo[i].y = this.cuerpo[i - 1].y;
                //Para que cuando se salga de la pantalla inicie al otro lado 
                this.cuerpo[this.cuerpo.length - 1 - i].x = Phaser.Math.Wrap(this.cuerpo[this.cuerpo.length - 1 - i].x, 0, this.scene.sys.game.config.width);
                // el limite en 20 pixeles arriba en eje y - para dejar el panel de puntuaciòn 
                this.cuerpo[this.cuerpo.length - 1 - i].y = Phaser.Math.Wrap(this.cuerpo[this.cuerpo.length - 1 - i].y, 20, this.scene.sys.game.config.height);
            }


            switch (this.dir) {
                case "derecha":
                    // Muevete 10 pixeles en el eje x
                    this.cuerpo[0].x += 10;
                    this.oldDir = "izquierda";
                    break;
                case "izquierda":
                    // Muevete 10 pixeles en el eje x
                    this.cuerpo[0].x -= 10;
                    this.oldDir = "derecha";
                    break;
                case "arriba":
                    // Muevete 10 pixeles en el eje x
                    this.cuerpo[0].y -= 10;
                    this.oldDir = "abajo";
                    break;
                case "abajo":
                    // Muevete 10 pixeles en el eje x
                    this.cuerpo[0].y += 10;
                    this.oldDir = "arriba";
                    break;
            }
            //Entre mas grande es el numero, mas lento va el cuerpo 
            this.timer = time + 200;
        }

    }


}
export default Snake;