// Write a program that accepts the age of a person,
// if the person is 18 and above, it should print You can vote.
// otherwise it should print You are too young to vote.

function agePerson(age){
    if (age >= 18){
        return `You can vote`;
    }
    else{
        return `You are too young to vote`;

}
}
let result = document.createElement('p');
result.setAttribute("id", "age");
result = agePerson(age);
document.body.append(result);
// result = agePerson(age);
