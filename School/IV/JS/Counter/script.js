var First = document.getElementById("Clicks");
var Second = document.getElementById("TotalClicks");

if (localStorage.getItem("TotalClicks") === null)
    localStorage.setItem("TotalClicks", 0);

Second.value = localStorage.getItem("TotalClicks");

First.value = "0";

function AddClick() {
    First.value = parseInt(First.value) + 1;
    var TotalClicks = parseInt(localStorage.getItem("TotalClicks")) + 1;
    localStorage.setItem("TotalClicks", TotalClicks);
    Second.value = TotalClicks;
}

function Reset() {
    localStorage.setItem("TotalClicks", 0);
    Second.value = 0;
}