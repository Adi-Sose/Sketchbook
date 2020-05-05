var Text = document.getElementById("Text");
var Regex = document.getElementById("Regex");
var Result = document.getElementById("Result");

Text.value = "";
Regex.value = "";
Result.value = "";

function Censor() {
    Result.value = Text.value.replace(new RegExp(Regex.value, "g"), (str) => { return "*".repeat(str.length) });
}