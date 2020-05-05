var Canvas = document.getElementById("Canvas")
var Context = Canvas.getContext("2d");

function DrawCursorPosition(event) {
    Context.clearRect(0, 0, Canvas.width, Canvas.height);
    Context.fillRect(event.clientX / 5, event.clientY / 5, 3, 3);
}

document.addEventListener('mousemove', DrawCursorPosition);