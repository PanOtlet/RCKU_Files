<?php
  include '../include/head.php';
?>

  <form method="get" action="a.php">
    <table>
      <tr>
        <td>Podaj swój wiek: </td>
        <td><input type="text" name="age" size=2/></td>
      </tr>
      <tr>
        <td></td>
        <td><input type="submit" class="btn btn-success" name="submit_age" value="Wyslij" /></td>
      </tr>
    </table>
  </form>
<?php
  extract($_REQUEST);
    if (! isset ( $submit_age ))
      exit;
?>

  <table class="table">
<?php
  if ( $age >0 ){
    if ( $age == 23 ){
      echo "Mojżesz zostać siewo";
    }
    else {
        if ( $age < 23 ){
        echo "jestes za mlody by byc siewo";
      }
      else {
        echo "jestes za stary by byc siewo";
      }
    }
  }
  else {
    echo "Ups cos poszło nie tak ";
    echo "<br>";
    echo "Proszę spróbować ponownie ";
  }
?>
  </table>

<?php
  include '../include/footer.php';
?>
