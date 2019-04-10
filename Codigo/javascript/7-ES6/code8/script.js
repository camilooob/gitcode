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
2. Average age of each town's park ( formula: sum of all ages/ number of parks).
3. The name of the park that has mor than 1000 trees.
4. Total and average length of the town's streets
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
class Global {
    constructor(name, yearBuild) {
        this.name = name;
        this.yearBuild = yearBuild;

    }
}
//Luego creamos una clase extends para el parque
class Parque extends Global {
    constructor(name, yearBuild, area, arboles) {
            // super las que ya tenemos creadas y queremos heredar
            super(name, yearBuild);
            // declaramos las nuevas; 
            this.area = area;
            this.arboles = arboles;

        }
        //Metodo()
    densidadxArboles() {
        const density = this.arboles / this.area;
        console.log(`${this.name} tiene una densidad de arboles de ${density} por kilometro cuadrado`);

    }

}
//Creamos una clase extends para calle 
class Calle extends Global {
    constructor(name, yearBuild, length, size = 3) {
            // super las que ya tenemos creadas y queremos heredar
            super(name, yearBuild);
            // declaramos las nuevas; 
            this.length = length;
            this.size = size;
        }
        //Metodo()
    clasificacionCalles() {
        const classification = new Map();
        classification.set(1, "tiny");
        classification.set(2, "small");
        classification.set(3, "normal");
        classification.set(4, "big");
        classification.set(5, "huge");
        console.log(`${this.name}, build in ${this.yearBuild} y esta clasificado como ${classification.get(this.size)} calles`)
    }

}

const todoslosParques = [new Parque("Green Park", 1987, 0.2, 215), new Parque("Nationa Park", 1894, 2.9, 3541), new Parque("Oak Park", 1953, 0.4, 949)];
const todaslasCalles = [new Calle("Evergreen Street", 2008, 2.7, 2), new Calle("4th Street", 2015, 0.8, 3), new Calle("Sunset Boulevard", 1982, 2.5, 5)];


function calc(arr) {

    //Metodo reducir se usa para reducir un Array a un solo valor 


    const sum = arr.reduce((prev, current, index) => prev + current, 0)
        // Retorna la suma de la matriz y el promedio 
    return [sum, sum / arr.length];

}



function reportParques(p) {

    console.log("-- --PARQUE REPORT-- -- -- -- - ");
    //Density
    //Para cada elemento calculamos la densidad
    p.forEach(element => {
        element.densidadxArboles()

    });

    //Tomamos los años 
    const ages = p.map(element => new Date().getFullYear() - element.yearBuild);
    // Average Age
    const [totalAge, avgAge] = calc(ages);
    //Imprimimos 
    console.log(`Our ${p.length} parks have an average of ${avgAge} years.`);

    // Mora that 1000
    const i = p.map(element => element.arboles).findIndex(el => el >= 1000);
    console.log(`${p[i].name} has more than 1000 trees.`)
}

function reportCalles(s) {

    // Total y promedio largo de las calles de el pueblo


    const [totalLength, avgLength] = calc(s.map(element => element.length));
    console.log(`Our ${s.length} streets have a total length of ${totalLength} km, with an average of ${avgLength} km.`);




    // Classificar sizes 

    s.forEach(element => element.clasificacionCalles());



}
//Llamo
reportParques(todoslosParques);
reportCalles(todaslasCalles);