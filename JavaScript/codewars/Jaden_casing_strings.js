var str = "How can mirrors be real if our eyes aren't real";

const capitalizingFunc =(value) =>{
    return value.split(" ").map(element => {
        element.charAt(0).toUpperCase() + element.substring(1)
    }).join(" ")
}

capitalizingFunc(str)