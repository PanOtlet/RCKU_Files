<?php
  include '../include/head.php';

  $a=$b=10;
  $a++;$b--;
  if ($a>$b)
    echo ("a > b");
  elseif ($a==$b)
    echo ("a = b");
  else
    echo ("a < b");
?>

  <form method="post" action="wyslij.php">
    <table class="table">
      <tr>
          <td><strong>Do: </strong></td>
          <td>
            <input type="text" name="do" size="25" />
          </td>
      </tr>
      <tr>
          <td><strong>Temat: </strong></td>
          <td>
            <input type="text" name="temat" size="25" />
          </td>
      </tr>
      <tr>
          <td><strong>Tresc: </strong></td>
          <td>
            <textarea name="tresc" cols="50" rows="5"></textarea>
          </td>
      </tr>
      <tr>
        <td>
            <strong><input type="hidden" name="op" value="Wyslij" /></strong>
        </td>
        <td>
          <input type="submit" name="Submit" value="Wyslij" />
        </td>
      </tr>
    </table>
  </form>

<?php
  include '../include/footer.php';
?>
