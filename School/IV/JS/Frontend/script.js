var Id = document.getElementById("StudentId");
var Ime = document.getElementById("Ime");
var Prezime = document.getElementById("Prezime");
var Prosjek = document.getElementById("Prosjek");

function UcitajKorisnika() {
    var xhttp = new XMLHttpRequest();

    var StudentId = Id.value;

    xhttp.open("GET", "http://localhost:4486/values?StudentId=" + StudentId, true);

    xhttp.onreadystatechange = function() {
        var Student = JSON.parse(this.responseText);
        console.log(Student);
        Ime.innerHTML = Student.ime;
        Prezime.innerHTML = Student.prezime;
        Prosjek.innerHTML = Student.prosjek;
    };

    xhttp.send();
}