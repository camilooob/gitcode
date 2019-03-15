/////////////
// Lecture: Passing functions as arguments 
/*
var years = [1990, 1965, 1937, 2005, 1998];

function arrayCalc(arr, fn) {
    
    var arrRes = [];
    for (var i = 0; i < arr.length;
         i++) {
        arrRes.push(fn(arr[i]));
        
    }
    return arrRes;

}

function calculateAge(el) {
    return 2016 - el;
    
}

function maxHeartRate(el) {
    
    if (el >= 18 && el <= 81){
        
       return Math.round(206.9 - (0.67 * el)); 
        
    }else {
      
        return -1; 
    }
    
    
}

function isFullAge(el) {
    return el >= 18;
}




var ages = arrayCalc(years, calculateAge);
var fullAges = arrayCalc(ages,isFullAge);
var rates = arrayCalc(ages, maxHeartRate);
console.log(ages);
console.log(fullAges);
console.log(rates);


/////////////////////////////////
// Lecture: Functions returninng functionns

function interviewQuestion(job) {
    if (job === 'designer'){
        return function(name){
            console.log(name + ', can you please explain what UX designn is?');
        }
        
    } else if (job === 'teacher') {
        return function(name) {
            console.log('What subject do you teach, ' + name + '?');
        }
        
        
        }else {
           return function(name) {
               console.log('Hello' + name + 'waht do you do?'); 
           }
        }
    
}

var teacherQuestion = 
    interviewQuestion('teacher');

var designerQuestion =
    interviewQuestion('designer');


    teacherQuestion('Camilo'); 
    designerQuestion('Andres');


/////////////////////
// Lecture: IIFE


(function () {
    var score = Math.random() *10;
    console.log(score >=5);
})();

(function (goodLuck) {
    var score = Math.random() *10;
    console.log(score >=5 - goodLuck);
})();
          
/////////////////////
// Lecture: Closures

function retirement(retirementAge) {
    var a = ' years left until retiremennt.';
    return function(yearOfBirth) {
        var age = 2016 - yearOfBirth;
        console.log((retirementAge - age) + a);
    }
}

var retirementUS = retirement(66);
var retirementGermany = retirement(65);
var retiremenntIceland = retirement(67);




retirementUS(1990);
retirementGermany(1990);
retiremenntIceland(1990);




/// Challenge Use closers for  innterviwe Questions Example. 
*/

/*
function interviewQuestion(job) {
    var a = ' , can you plase explain what UX desinng is?'
    return function(name) {
        if (job === 'designer'){
            console.log(name + ', can you please explain what UX designn is?');
        }
        
    else if (job === 'teacher') {

            console.log('What subject do you teach, ' + name + '?');
        }
        
        
        else  {
               console.log('Hello ' + name + 'what do you do?'); 
           }
        } 
  }    
    
    



var teacherQuestion = interviewQuestion('teacher');
var designerQuestion = interviewQuestion('designer');
var otherQuestion = interviewQuestion('other');

teacherQuestion('Jhon');
designerQuestion('Make');
otherQuestion('Juan');
*/
////////////////////////////////////////////////
// Lecture: Bind, call and apply 
/*
var camilo = {
    name: 'Camilo',
    age: 25,
    job: 'finance',
    presentation: function(style, timeOfDay) {
       if (style === 'formal') {
           console.log('Good ' + timeOfDay + ', Ladies and gentlemen! I\'m '+ this.name + ', I\'m a '+ this.job + ' and I\'m ' + this.age + ' years old');
       } else if (style == 'friendly') {
           console.log('Hey! What\'s up?' + ' I\'m '+ this.name + ' I\'m a '+ this.job + ' and I\'m ' + this.age + ' years old. Have a nice ' + timeOfDay + '.');
       }        
    }    
};


camilo.presentation('formal','morning');
camilo.presentation('friendly','afternoon');

var nubia = {
    name: 'Nubia',
    age: 58,
    job: 'teacher',
};

camilo.presentation.call(nubia,'friendly','night');


var camiloFeliz = 
    camilo.presentation.bind(camilo,'friendly');

camiloFeliz('morning');
camiloFeliz('afternoon');

var nubiaSeria = 
    camilo.presentation.bind(nubia,'formal');
nubiaSeria('nigth'); 
/// Ejemplo de bind con el ejercicio de calcular la edad anterior 

var years = [1990, 1965,1937, 2005, 1998];

function arrayCalc(arr, fn){
    var arrRes = [];
    for (var i = 0; i< arr.length; i++) {
        arrRes.push(fn(arr[i]));
    }
    return arrRes;
}

function calculateAge(el) {
    return 2016 - el; 
    
}
function isFullAge(limit, el) {
    return el >= limit;
}

var ages = arrayCalc(years, calculateAge);
var fullJapan = arrayCalc(ages,isFullAge.bind(this, 20));
console.log(ages);
console.log(fullJapan);
*/
//////////////////
// CODING CHALLENGE 

/* 
--- Let's build a fun quiz game in the console! ---- 

1. Build a function constructor called Question to describe a question. A question should include:
a) question itself
b) the answers from which the player cann choose the correct one ( choose an adequate data structure here, array,
object, etc...)
c) correct answer ( I would use a number for this)

2. Create a couple of questions usinng the constructor

3. Store them all inside an array

4. Select one random question and log it on the console, together with the possible answers ( each question should have a number) ( Hint; write a method for the Question objcts for this task).

5. Use the 'prompt' functionn to ask the user for the correct answer. The user should input the number of the correct answer such as you displayed ir on Task 4. 

6. Check if the answer is corret and print to the console whether the answer is correct or not ( Hinnt: Write another method for this.)

7. Suppose this code would be a plugin for other programmers to use in their code. So make sure that all your code is private and doesn't interfere with the other programmers code ( Hint: We learned a special technique todo exactly that). 


// Inicio


(function() {
 // Esta es la funcion constructor con el que plantearemos las preguntas
function Question(question, answers, correct) {
    this.question = question;
    this.answers = answers;
    this.correct = correct;
    
} 
// Constructor que muestra la pregunta y la respuesta con los numeros 
// los propotypes son metodos
Question.prototype.displayQuestion = 
    function() {
    console.log(this.question);
    for (var i =0;i< this.answers.length; i++){
        console.log(i + ': ' + this.answers[i]);
    }    
}

Question.prototype.checkanswer = 
    
function (ans) {
    if (ans === this.correct){
        console.log('Answere is Correct!');
    } else {
        console.log('Wrong Answere, try again!');
    }
    
    
}

//Aqui usamos la funciòn contructor y la llamamos preguta q1 
var q1 = new Question('Is JavaScript the coolest programming languge in the world?',['Yes','No'],0);
var q2 = new Question('What is the name of this course\s teacher?',['John','Micheal','Jonas'],2);
var q3 = new Question('What does best describe coding?',['Boring','Hard','Fun','Tediuos'],2);
//Ahora realizamos es 3 punto que es poner las pregunntas enn un Array y  que sean seleccionadas al azar. 
var question = [q1, q2, q3];
// Ramdom da un numero entree 0 y 1 , asi que lo multiplicamos por el numer ode preguntas que tienne nuestro array, y utilizamos floor para redondear el numero.
var azar = Math.floor(Math.random() * question.length);
// muentra una pregunta al azar usando el constructor displayQuestion 
// llamamos al metodo
question[azar].displayQuestion();
//// esti gennera un pop para que el usuario escriba la respuesta ( pero lo que escribe el usuario es Strinng
// Asi que usamos parsInt para connvertir String a Number
var answer = parseInt(prompt('Please select the corret answer \'Write Exit for Out'));

//llamamos al metodo
question[azar].checkanswer(answer);   
})();

------- Expert Level -------

8. After you display
the result, display the next random question, so that the game never ends (Hint: Write a function for this annd call ir right after displaying the result).

9. Be careful: after Task 8, the game lirerally never ennds. So inlcude the option to quit the game if user writes 'exit' intead od the answer. In this case, Don't call the funtion from task 8. 

10. Track the user's score to make the game more funn! So each time and answer is correct, add 1 poinnt to the score ( Hint: I'm going to use the power of clousures for this, but you don't have to, just do this with the tools you fell more comfortable at this point). 

11. Display the score in the console. Use yet anothe method for this. 
*/

(function() {
 // Esta es la funcion constructor con el que plantearemos las preguntas
function Question(question, answers, correct) {
    this.question = question;
    this.answers = answers;
    this.correct = correct;
    
} 
// Constructor que muestra la pregunta y la respuesta con los numeros 
// los propotypes son metodos
Question.prototype.displayQuestion = 
    function() {
    console.log(this.question);
    for (var i =0;i< this.answers.length; i++){
        console.log(i + ': ' + this.answers[i]);
    }    
}

Question.prototype.checkanswer = 
    
function (ans, callback) {
    var sc;
    if (ans === this.correct){
        console.log('Answere is Correct!');
        sc = callback(true);
    } else {
        console.log('Wrong Answere, try again!');
        sc = callback(false);
    }
    this.displayScore(sc);
}
Question.prototype.displayScore =
      function(score)  {
    console.log('Your current score is:' + score);
    console.log('----------');
}

//Aqui usamos la funciòn contructor y la llamamos preguta q1 
var q1 = new Question('Is JavaScript the coolest programming languge in the world?',['Yes','No'],0);
var q2 = new Question('What is the name of this course\s teacher?',['John','Micheal','Jonas'],2);
var q3 = new Question('What does best describe coding?',['Boring','Hard','Fun','Tediuos'],2);
//Ahora realizamos es 3 punto que es poner las pregunntas enn un Array y  que sean seleccionadas al azar. 

function nextQuestion () {  
var question = [q1, q2, q3];
    
function score() {
    var sc = 0;
    return function(correct) {
        if (correct) {
            sc++;
        }return sc;
    
    }
}   
 var keepScore = score();
    
    
// Ramdom da un numero entree 0 y 1 , asi que lo multiplicamos por el numer ode preguntas que tienne nuestro array, y utilizamos floor para redondear el numero.
var azar = Math.floor(Math.random() * question.length);
// muentra una pregunta al azar usando el constructor displayQuestion 
// llamamos al metodo
question[azar].displayQuestion();
//// esti gennera un pop para que el usuario escriba la respuesta ( pero lo que escribe el usuario es Strinng
// Asi que usamos parsInt para connvertir String a Number
var answer = prompt('Please select the corret answer \'Write Exit for Out');

 
    // esto es lo que hace que se repita la pregunta unna y otra vez
     if(answer !== 'exit'){
        //llamamos al metodo
question[azar].checkanswer(parseInt(answer),keepScore);
         // llamamos a la funcion
    nextQuestion();
    

    }
   
        }
    
    // esto hace que se repita la pregunta. 
    nextQuestion();
})();


