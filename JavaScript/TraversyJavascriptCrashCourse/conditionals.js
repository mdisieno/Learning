// == checks if matches
// === checks datatype is equal as well
const x = 10;
const y = 14;
if (x == 10){
    console.log("You win!!!!");
}else if(x > 10){
    console.log("Dafuq you doing?");
}
else{
    console.log("You lose!!!!");
}
if (x == 10 && y == 14){
    console.log("Woot double win!!!!");
}
//terinary
const color = x > 10 ? 'red':'blue'



//##################################################################
switch(color){
    case 'red':
        console.log(color);
        break;
    case 'blue':
        console.log(color);
        break;
}