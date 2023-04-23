//Logical operators AND, OR, NOT 
// AND -> when two conditions are said to be true then the result is true otherwise false
/*
symbol of AND -> && 
    p  AND  q   Result
    T       T   T
    T       F   F
    F       T   F
    F       F   F
Example: if today is going to rain and I'm going to work I'll carry an umbrella
*/

//OR -> when either the condition is said to be true or false then the result is true otherwise false

/*
symbol of OR -> ||
    p  AND  q   Result
    T       T   T
    T       F   T
    F       T   T
    F       F   F
Example: if today is going to rain or I'm going to work I'll carry an umbrella
*/

//NOT -> negation of a statement
//if statement is true then negation is false and vice versa
//Example: Today is going to rain : Today is not going to rain
//symbol -> !

//LOOPS
//for loop, while loop and do while

// let numberArray = [1,2,3,4,5,6,7,8,9]
// let total = 0
// let i = 0
// for (i of numberArray){
//     // total += i
//     total = total + i
//     // return total
// }
// // console.log(total)

// while (i < numberArray.length){
//     total = total + i
//     i = i + 1
// }


// do{
//     total = total + i
//     i = i + 1
// }
// while(i < numberArray.length)

// console.log(total)

//Functions -> block of code that performs a certain task
//types of functions -> named, anonymous and Immediately invoked function expression/arrow functions
/*
    1. Named function -> function functionname(parameters)  {//block of code}
    2. Anonymous -> let functionname = function(parameters) {//block of code}
    3. Arrow function -> let functionname = (parameters) => {//block of code}

*/
let numberArray = [1,2,3,4,5,6,7,8,9]
let total = 0
let i = 0

//Named Function
// function doSummation(){
//     for (i of numberArray){
//         total = total + i  
//     }
//     console.log(total)
//     return total
// }
// doSummation()

//Anonymous function
// let doSummation = function(){
//     for (i of numberArray){
//         total = total + i  
//     }
//     console.log(total)
//     return total
// }

// doSummation()

//Arrow function
let doSummation = () => {
    for (i of numberArray){
        total = total + i  
    }
    console.log(total)
    return total
}

doSummation()

