/*

let side1, side2, hypotenuse;

side1 = window.prompt("Whats the length of the first side");
side2 = window.prompt("whats the length of the second side");

side1 = Number(side1);
side2 = Number(side2);

hypotenuse = Math.sqrt(Math.pow(side1,2) + Math.pow(side2,2));

window.alert("Hypotenuse " + hypotenuse);
console.log("Hypotenuse", hypotenuse);

*/

// the below method is for getting the input via text box

let side1, side2 ;
document.getElementById("mybutton2").onclick = function()
{
    side1 = document.getElementById("myText1").value;
    side2 = document.getElementById("myText2").value;

side1 = Number(side1);
side2 = Number(side2);

let hypotenuse; 
hypotenuse = Math.sqrt(Math.pow(side1,2) + Math.pow(side2,2));
document.getElementById("result").innerHTML = "Hypotenuse : " + hypotenuse;

}