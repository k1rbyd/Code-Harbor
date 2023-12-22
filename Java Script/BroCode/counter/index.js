
let count = 0;

document.getElementById("mybutton1").onclick = function()
{
    count--;
    document.getElementById("result").innerHTML = count;
}

document.getElementById("mybutton2").onclick = function()
{
    count = 0;
    document.getElementById("result").innerHTML = count;
}

document.getElementById("mybutton3").onclick = function()
{
    count++;
    document.getElementById("result").innerHTML = count;
}
