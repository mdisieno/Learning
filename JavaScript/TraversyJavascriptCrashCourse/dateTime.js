//new Date().toLocaleString() // local time prints


const currentTime = new Date();
var year = currentTime.getFullYear();
var month = currentTime.getMonth();
var hours = currentTime.getHours();
var minutes = currentTime.getMinutes();
var seconds = currentTime.getSeconds();

var timeStamp = (month+"_"+year+"_"+hours+"_"+minutes+"_"+seconds);

console.log(timeStamp);