class jsonTrack {
    constructor(key, lati, long, altitude, speed, timeStamp) {
        //DO Notes - Do we need just Hex, Lat, Lon?
        this.hex = key;
        //make time stamp its own hash
        //this.timeStamp = timeStamp;
        this.lat = lati;
        this.lon = long;
        this.alt = altitude;
        this.speed = speed;
        this.timeKey = (key + "_" + timeStamp);

    }
}

//#############################################################
class Person{
    constructor(firstName, lastName, dob){
        this.firstName = firstName;
        this.lastName = lastName;
        this.dob = new Date (dob);
    }
    person.prototype.getBirthYear = function(){
        return this.dob.getFullYear();
    }
}

const person1 = new Person("John", "Doe","4-3-1989");
const person2 = new Person("Marry", "Smith","2-3-1982");

console.log(person1.getBirthYear());