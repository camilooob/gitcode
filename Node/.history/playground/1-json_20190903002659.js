const book = {
    titulo: "Ego es el enemigo",
    autor: "Camilo Baquero"
};

const bookjson = JSON.stringify(book);

console.log(bookjson);

const parsedData = JSON.parse(bookjson);
console.log(parsedData.autor);