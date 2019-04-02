// ES6
//Variables Declaration and blocks
/*
function licenciaDeConducir(pasarTest) {
   /// las variables se tienen que declarar afuera para que el codigo tenga acceso a ellas 
    let firstName;
    const yearOfBirth = 1990;

    if (pasarTest) {
        firstName = "Camilo";

    }
    console.log(firstName + " nacio en " + yearOfBirth + " ahora esta oficialmente avalado para conducir un carro.");

}
licenciaDeConducir(true);
*/
/*
let i = 23;
for (let i = 0; i < 5; i++) {

    console.log(i);
}
console.log(i);
*/
//Strings
/*
let primerNombre = "Camilo";
let apellido = "Baquero";
const yearDeNacimiento = 1993;

function calcularEdad(year) {
    return 2019 - year;
}
// OJO: al utilizar stric tienen que utilizar comillas alt Gr 
console.log(`Este es ${primerNombre} ${apellido}. El nacio en ${yearDeNacimiento}. Hoy tiene ${calcularEdad(yearDeNacimiento)} años`);
const n = `${primerNombre} ${apellido}`;
console.log(n.startsWith("C"));
console.log(n.endsWith("od"));
console.log(n.includes("gf"));
console.log(`${primerNombre} `.repeat(5));
*/
//Arrow
/*
const years = [1990, 1965, 1982, 1937];
// Asi se declaran las funciones ya no toca usar function return 
let edad = years.map(num => 2016 -
    num);
console.log(edad);

edad = years.map((num, index) => `Edad elemento ${index +1}: ${2019 - num}. `);
console.log(edad);
*/
// Cambiamos el color de las cajas a gris. 
/*
const boxesArray = Array.from(boxes);
const boxes = document.querySelectorAll(".box");
Array.from(boxes).forEach(caja => caja.style.backgroundColor = "dodgerblue");

//
for (const cur of boxesArray)

*/
// Spred Operator 
// e usa para unir arrays ejemplo

const familiaGomez = ["Camilo", " Daniel", "Nubia"];
const familiaBaquero = ["Diego", "Sofia", "Astrid"];
const bigFamily = [...familiaGomez, ...familiaBaquero];
console.log(bigFamily);