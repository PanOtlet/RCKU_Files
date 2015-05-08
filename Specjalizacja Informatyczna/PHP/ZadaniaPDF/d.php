<?php
  include '../include/head.php';

  echo '<form method="post" action="d.php">
    <br />Wybiez wzrost:
    <br /><input type="radio" name="height" value="150 twoja waga powinna wynosic 48-64" /> 150
    <br /><input type="radio" name="height" value="155 twoja waga powinna wynosic 55-71" /> 155
    <br /><input type="radio" name="height" value="160 twoja waga powinna wynosic 62-78" /> 160
    <br /><input type="radio" name="height" value="165 twoja waga powinna wynosic 69-85" /> 165
    <br /><input type="radio" name="height" value="170 twoja waga powinna wynosic 76-92" /> 170
    <br /><input type="radio" name="height" value="175 twoja waga powinna wynosic 83-99" /> 175
    <p>
      <br /><input type="submit" name="submit_height" class="btn btn-success" value="Wybierz" /><br />
      <br /><input type="reset" class="btn btn-danger" value="Wyczysc" /><br />
    </p>';




      extract($_REQUEST);
        if (! isset ( $submit_height ))
          exit;
    echo '<img src="http://facstaff.gpc.edu/~jaliff/forearm.gif">';
    echo "<br/>";
    echo $height;

  include '../include/footer.php';
?>
