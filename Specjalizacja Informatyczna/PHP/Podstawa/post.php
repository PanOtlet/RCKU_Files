<?php
  include '../include/head.php';
?>
  <form method="post" action="post.php">
    <table>
      <tr>
        <td>Wpisz pierwszą liczbę: </td>
        <td><input type="text" name="liczba1" /></td>
      </tr>
      <tr>
        <td>Wpisz drugą liczbę: </td>
        <td><input type="text" name="liczba2" /></td>
      </tr>
      <tr>
        <td><input type="hidden" name="wylicz" value="tak" /></td>
        <td><input type="submit" name="Sprawdź" /></td>
      </tr>
    </table>
  </form>

<?php

  if ($_POST['wylicz'] == 'tak'){
    if ($_POST['liczba1'] == "" AND $_POST['liczba2'] == ""){
      echo ("Wypełnij wszystkie pola formularzu!");
    }
    else{
      if(!is_numeric($_POST['liczba1']) AND !is_numeric($_POST['liczba2'])){
        echo ("Podane dane nie są liczbami!");
      }
      else {
        $WynikMnozenia = $_POST['liczba1'] * $_POST['liczba2'];
        if ($WynikMnozenia > 20){
          echo ("Wynik mnożenia jest większy od 20");
        }
        elseif ($_POST['liczba1'] > $_POST['liczba2']){
          echo ("Liczba 1 jest większa od liczby 2");
        }
        elseif ($_POST['liczba1'] < $_POST['liczba2']){
          echo ("Liczba 1 jest mniejsza od liczby 2");
        }
        else{
          echo ("Obie wartosci mają taką samą wartosc");
        }
      }
    }
  }

  include '../include/footer.php';
?>
