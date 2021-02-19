/*******************************
 * const will let you manipulate but not fully reassign.
 * 




 *******************************/





console.error("This is an error");

/*
var, let, const
var is globally scoped.
let something you are going to change.
Const is a constant variable.

datatypes: 
primitive: strings, numbers, boolean, null, undefined, and symbol.
*/

const name = "John";
const age = 30;
let score = 10;
const isCool = true;
const x = null;
const y = undefined;
//******************************************************************
//concatenation
console.log('My name is ' + name + ' and I am ' + age);
const hello = "My name is ${name} and I am ${age}";
console.log(hello);


//******************************************************************
//string features
const s = 'Hello World';
console.log(s.length);
console.log(s.toUpperCase());
console.log(s.toLowerCase());