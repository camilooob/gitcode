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

//Creamos una clase Global porque es lo que tenemos en comun entre las dos actividades. 

class Global {
    constructor(name, yearBuild) {
        this.name = name;
        this.yearBuild = yearBuild;

    }
}
//Luego creamos una clase extends para el parque
class Parque extends Global {
    constructor(name, yearBuild, area, arboles) {


        //Nuevas variables 
        super(area, arboles);
        this.area = area;
        this.arboles = arboles;

    }
    densidadxArboles() {
        const density = this.arboles / this.area;
        console.log(`${this.name} tiene una densidad de arboles de ${density} por kilometro cuadrado`);




    }






}