<?php
  include '../include/head.php';
?>

  <form method="get" action="b.php">
    <table>
      <tr>
        <td>Podaj wynik 1: </td>
        <td><input type="text" name="age1" size=2/></td>
      </tr>
      <tr>
        <td>Podaj wynik 2: </td>
        <td><input type="text" name="age2" size=2/></td>
      </tr>
      <tr>
        <td>Podaj wynik 3: </td>
        <td><input type="text" name="age3" size=2/></td>
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
  if (( $age1 >0 )&&( $age2 >0 )&&( $age3 >0 )){
    $ages=($age1+$age2+$age3)/3;
    echo $ages," punktow ";
    switch ($ages) {
    case ($ages<= 59):
        echo "Pała";
        break;
    case ($ages<= 69):
        echo "Dwa";
        break;
    case ($ages<= 79):
        echo "trzy";
        break;
    case ($ages<= 89):
        echo "Cztery";
        break;
    case ($ages<= 100):
        echo "Piątka";
        break;
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
