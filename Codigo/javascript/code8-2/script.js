/*
Suppose that you're working in a small town
administration, and you're in charge of two town elements:
1. Parks
2. Streets

It's a very small town, so right now there are only
3 parks and
4 streets. 

All parks and streets have a name and a build year.

At an end-of-year meeting, you boss wants a final report with the following: 
1. Tree density of each park in the town
(formula: number of tress/ park area)
2. Average age of town's park ( formula: sum of all ages/ number of parks).
3. The name of the park that has mor than 1000 trees.
4. Total and average length of  the town's streets
5. Size classification of all streets:
tiny/ small / normal /big / huge (Default Parameters)
If the size is unknown, the default is normal.

All the report data should be printed to the console.

HINT: Use some of the ES6 features:
 classes, subclasses, 
 template strings,
  default parameters,
   maps, 
   arrow functions,
    destructuring, etc.
*/
// Declaro 
//Creamos una clase Global porque es lo que tenemos en comun entre las dos actividades. 
//Clase Global
class Principal {
    constructor(nombre, añodeconstruccion) {
        this.nombre = nombre;
        this.añodeconstruccion = añodeconstruccion;

    }
}
class ParquesdelPueblo extends Principal {
    constructor(nombre, añodeconstruccion, area, arboles) {
            // Super para los que ya tenemos creados 
            super(nombre, añodeconstruccion);
            // This para las nuevas variables de la clase
            this.area = area;
            this.arboles = arboles;

        }
        // solo formula math 
    densidadmath() {
        const densi = this.arboles / this.area;
        console.log(`El parque ${this.name} tiene una densidad de arboles de ${densi}`);

    }
}
class CallesdelPueblo extends Principal {
    constructor(nombre, añodeconstruccion, largo, tamaño = 3) {
            // super
            super(nombre, añodeconstruccion);
            //this
            this.tamaño = tamaño;
            this.largo = largo;
        }
        // solo formula math
    clasificaciontamaño() {
        const clasificador = Map()
        clasificador.set = (1, "pequeño");
        clasificador.set = (2, "mediano");
        clasificador.set = (3, "normal");
        clasificador.set = (4, "grande");
        clasificador.set = (5, "gigante");
        console.log(`La calle ${this.name} fue construida en ${this.añodeconstruccion} y esta clasificada como ${clasificador.get(this.tamaño)}`);

    }
}



const listaParques = [new ParquesdelPueblo("Parque Simon Bolivar", 2000, 10, 200), new ParquesdelPueblo("Los Nogales", 1900, 30, 280), new ParquesdelPueblo("Los Cerezos", 1993, 20, 270), new ParquesdelPueblo("Parque Tesla", 1890, 100, 2500)];
const listaCalles = [new CallesdelPueblo("Calle UN", 1900, 150, 4), new CallesdelPueblo("Calle Torres", 1754, 172, 1), new CallesdelPueblo("Parque Bogota", 1980, 180, 5), new CallesdelPueblo("Calle Av Suba", 1970, 140, 4)];





function reporteParques(p) {

    console.log("---Reporte de Parques ------");





}

function reporteCalles(c) {






}



reportCalles(listaCalles);
reportParques(listaParques);