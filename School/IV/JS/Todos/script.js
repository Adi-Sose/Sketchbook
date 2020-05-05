var Id = document.getElementById("Id");
var UserId = document.getElementById("UserId");
var Title = document.getElementById("Title");
var Completed = document.getElementById("Completed");
var currentTodo = 1;

function LoadNextTodo() {
    var xhttp = new XMLHttpRequest();

    xhttp.open("GET", "https://jsonplaceholder.typicode.com/todos/" + currentTodo, true);
    currentTodo = currentTodo + 1;

    xhttp.onreadystatechange = function() {
        var todo = JSON.parse(this.responseText);
        Id.value = todo.id;
        UserId.value = todo.userId;
        Title.innerHTML = todo.title;
        Completed.value = todo.completed;
    };

    xhttp.send();
}

LoadNextTodo();