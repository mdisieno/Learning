//learning promises within JS

//creates promise, if successful, push resolve, if fail push reject
let p = new Promise((resolve, reject) => {
    let a = 1 +1
    //if this succeeds, push resolve
    if (a == 2 ){
        resolve("Success")
    //if it fails, pass reject message
    }else{
        reject("Failed")
    }
})




//executing promise


p.then((message) =>{ //if it turns out to be successful
    console.log('This is in the then ' + message)
}).catch((message)=> { //if it turns out not to be successful
    console.log('This is in the catch ' + message)
})