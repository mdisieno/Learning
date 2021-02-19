/*******************************************
 * Javascript is not statically typed.
 * 
 ******************************************/


//const an array as you typically wont reassign it. 
const numbers = new Array(1,2,3,4,5);
console.log(numbers);
//******************************************************************
//Treats it like a stack
numbers.pop();
console.log(numbers);
numbers.push(7);
console.log(numbers);
numbers.unshift(8);
console.log(numbers);
//*******************************************************************
const todos = [
    { 
        id: 1,
        text: "Take out the trash.",
        isCompleted: false
    },    
    { 
        id: 2,
        text: "Take out the rabbit.",
        isCompleted: false
    },
    { 
        id: 3,
        text: "Take out the dogs.",
        isCompleted: false
    },
    { 
        id: 4,
        text: "Take out the farts.",
        isCompleted: false
    }
];

console.log(todos[1].text);
//*******************************************************************
//JSON route
const todoJSON = JSON.stringify(todos);

