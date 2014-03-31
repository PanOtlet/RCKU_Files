<!-- Ukrycie przed przeglądarkami nie obsługującymi JavaScriptów
var length = 400;
var amplitude = 2;
function shake()
{
  for(i = 0; i < length; i++){
    window.moveBy(amplitude,0);
    window.moveBy(0,amplitude);
    window.moveBy(-amplitude,0);
    window.moveBy(0,-amplitude);
  }
}
// Koniec kodu JavaScript -->