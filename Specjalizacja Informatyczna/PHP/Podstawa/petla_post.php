<?php
  include '../include/head.php';

  print '<form method="post" action="petla_post.php">
    <br />Wymierz kolor czcionki:
    <br /><input type="checkbox" name="place1" value="New York" /> Nowy Jork
    <br /><input type="checkbox" name="place2" value="Chicago" /> Chicago
    <br /><input type="checkbox" name="place3" value="London" /> London
    <br /><input type="checkbox" name="place4" value="Tokyo" /> Tokyo
    <br /><input type="checkbox" name="place5" value="San Francisco" Checked /> San Francisco
    <p>
      <br /><input type="submit" value="Wybierz" /><br />
      <br /><input type="reset" value="Wyczysc" /><br />
    </p>';

  extract($_REQUEST);
  print '<table class="table"><tr><td>Elementy listy</td><td>Zaznaczone wartosci</td></tr>';
  for ($i=1;$i<=5;$i++){
    $temp = "place$i";
    echo '<tr><td>'.$temp.'</td>';
    echo '<td>'.${$temp}.'</td></tr>';
  }
  print '</table>';

  include '../include/footer.php';
?>
