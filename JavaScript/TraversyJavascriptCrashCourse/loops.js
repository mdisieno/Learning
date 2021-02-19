// For Loops

for (let i=0; i<10;i++){
    console.log(i); 
}

// While Loops
let j = 0;

while (j < 10){
    console.log("While loop: " + j);
    j++;
}
// Looping through an array.

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

for(let todo of todos){
    console.log(todo.text);
}

//high order array methods. forEach, map, filter.
//take in a parameter as function

//forEach - does for each
todos.forEach(function(todo){
    console.log(todo.text)
})



//Space in output
console.log("");


//map - returns an array
const todoText = todos.map(function(todo){
    return todo.text;
});
console.log(todoText);



const todoCompleted = todos.filter(function(todo){
    return todo.id === true;
}).map(function(todo){
    
})