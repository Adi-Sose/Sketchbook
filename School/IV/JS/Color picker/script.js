var Red = document.getElementById("Red");
var Green = document.getElementById("Green");
var Blue = document.getElementById("Blue");
var Result = document.getElementById("Result");

Red.value = 0;
Green.value = 0;
Blue.value = 0;

function UpdateColor() {
    var colorString = `RGB(${Red.value}, ${Green.value}, ${Blue.value})`;
    Result.style.backgroundColor = colorString;
    Result.value = colorString;
    if (parseInt(Red.value) + parseInt(Blue.value) + parseInt(Green.value) > 255 * 3 / 2)
        Result.style.color = "black";
    else
        Result.style.color = "white";
}

UpdateColor();