// let -> redefine but cannot redeclare, const-> don't want change value and redeclare and var -> redeclare and redefine

// let myName = "Owen"
// console.log(myName)

// myName = "Ngare"
// console.log(myName)

// const myFirstName = "Owen"
// console.log(myFirstName)

// var mySecondName = "Owen"
// console.log(mySecondName)

// mySecondName = "Maina"
// console.log(mySecondName)

// var mySecondName = "Ngare"
// console.log(mySecondName)

//Data types -> instances of data
// number-1/2/89/10, string->"Owen"/"Sweetie"/"Baby boo", boolean->true/false, object->student{name, regno}, null, symbols->@#$, undefined

var num1 = 4000 // assigning a number to a variable
var string1 = "Maina" //assigning a string to a variable
var bool1 = true//assigning a boolean to a variable
var obj = {
    name:"Owen",
    email: "owen@gmail.com"
}//assigning an object to a variable
var null1 = null//assigning null to a variable
var undefined1 = undefined//assigning undefined to a variable

//Assignment operators
//Mathematical operators > +(Add) -(subtract) *(multiply) /(divide) %(modulus) 

var num1 = 2
var num2 = 2

//Addition
var sum = num1 + num2
console.log(sum)

//Subtract
var sub = num1 - num2
console.log(sub)

//Multiply
var mult = num1 * num2
console.log(mult)

//Divide
var div = num1 / num2
console.log(div)

//Modulus
var mod = num1 % num2
console.log(mod)

//Conditional operators
// <(less than) >(greater than) <=(less than or equal to) >=(greater than or equal to) ==(equal to) !=(not equal to) ===(strictly equal to) !==(strictly not equal to) ==(loosely equal to) !=(loosely not equal to)

//strictly
console.log(4 === "4") // false
console.log(3 !== "3") // true

//loosely
console.log(4 == "4") // true
console.log(3 != "3") // false


