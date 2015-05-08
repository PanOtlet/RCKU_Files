<?php
  function rcg()
  {
    $color="#";
    for($j=0;$j<3;$j++)
    {
      $color .=dechex ( rand (0,256));
    }
    return $color;
  }
  $color=rcg();
  echo "<style> body {background-color:$color}</style>";
?>
