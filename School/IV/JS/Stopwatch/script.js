  var seconds = 0;
  var tens = 0;
  var minutes = 0;

  var Tens = document.getElementById("Tens")
  var Second = document.getElementById("Seconds")
  var Minute = document.getElementById("Minutes")

  var Interval;

  function Start() {
      clearInterval(Interval);
      Interval = setInterval(timerTick, 10); // 10 milisekundi (1 stotinka)
  }

  function Stop() {
      clearInterval(Interval);
  }

  function Reset() {
      Stop();
      tens = 0;
      seconds = 0;
      minutes = 0;
      UpdateUnits();
  }

  function timerTick() {

      tens++;

      if (tens == 100) {
          seconds++;
          tens = 0;
      }

      if (seconds == 60) {
          minutes++;
          seconds = 0;
      }

      UpdateUnits();
  }

  function UpdateUnits() {
      Tens.innerHTML = tens.toString().padStart(2, '0'); //1 -> 01 // -> 00 // 12 -> 12
      Second.innerHTML = seconds.toString().padStart(2, '0');
      Minute.innerHTML = minutes.toString().padStart(2, '0');
  }

  UpdateUnits();