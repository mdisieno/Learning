/*####################################
Working on understanding arrow syntax
Credit: 
https://www.youtube.com/watch?v=h33Srr5J9nY

#####################################*/



//Normal Functions
function sum(a,b){
    return a+b;
}

function isPositive(number){
    return number>= 0;   
}

function randomNumber(){
    return Math.random;
}

document.addEventListener('click',function(){
    console.log('Click')
})
//#################################################
//Arrow Functions

//make a var and add an arrow after parenthesis
let sumArrow(a,b) => {
    return a+b;
}

let isPositiveArrow(number) => {
    return number>= 0;   
}
let isPositiveArrowSmall = number => number>= 0;   

function randomNumber(){
    return Math.random;
}


document.addEventListenerArrow('click', () => {
    console.log('Click')
})