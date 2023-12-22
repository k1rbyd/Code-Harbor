let x;
let y;

const rollDice = () => {
    x = Math.floor(Math.random() * 6) + 1;
    y = Math.floor(Math.random() * 6) + 1;
    document.getElementById("l1").value = x;
    document.getElementById("l2").value = y;
};

document.getElementById("roll-dice").addEventListener("click", rollDice);
