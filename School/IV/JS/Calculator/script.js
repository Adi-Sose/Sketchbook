var First = document.getElementById("First");
var Second = document.getElementById("Second");
var Result = document.getElementById("Result");

First.value = "";
Second.value = "";
Result.value = "";

function Add() {
    Result.value = parseInt(First.value) + parseInt(Second.value);
}

function Subtract() {
    Result.value = First.value - Second.value;
}

function Divide() {
    Result.value = First.value / Second.value;
}

function Multiply() {
    Result.value = First.value * Second.value;
}