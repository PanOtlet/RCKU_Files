<?php
  include '../include/head.php';

  echo '<marquee><table><tr><td style="text-align: center">';
  $g='*';
  for ($i=0;$i<=10;$i++){
    echo "<center>$g</center>";
    $g.='**';
  }
  echo '||</td><td><img src="img/mikolaj.gif" /></td></tr></table></marquee>';

  include '../include/footer.php';
?>
