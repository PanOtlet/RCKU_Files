<?php
  include '../include/head.php';

  print '<form method="get" action="switch.php">
    <br />Wymierz kolor czcionki:
    <br /><input type="radio" name="color" value="red" /> czerwony
    <br /><input type="radio" name="color" value="blue" /> niebieski
    <br /><input type="radio" name="color" value="purple" /> fioletowy
    <br /><input type="radio" name="color" value="green" /> zielony
    <br /><input type="submit" name="submit_color" value="Wybierz kolor" /><br />';

  extract($_REQUEST);
  if (! isset($submit_color)){
    exit;
  }
  print '<table class="table"><tr>';
  switch ($color){
    case 'red':
      print '<td style="color:'.$color.'">Czcionka jest czerwona</td>';
      break;
    case 'blue':
      print '<td style="color:'.$color.'">Czcionka jest niebieska</td>';
      break;
    case 'purple':
      print '<td style="color:'.$color.'">Czcionka jest fioletowa</td>';
      break;
    case 'green':
      print '<td style="color:'.$color.'">Czcionka jest zielona</td>';
      break;
    default:
      print '<td style="font-color: black">Czcionka jest czarna</td>';
      break;
  }
  print '</tr></table>';

  include '../include/footer.php';
?>
