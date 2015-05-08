<?php
  include '../include/head.php';

  $result = 5+4*12/4;
  print "$result = 5+4*12/4";
  echo ("<br />");
  $result = (5+4)*12/(4-2);
  print "$result = (5+4)*12/(4-2)";
  echo ("<br />");
  $result = (5+4)*(12/4);
  print "$result = (5+4)*(12/4)";
  echo ("<br />");
  echo ("<br /><br />");

  if (10 > 5){
    echo ("Liczba 10 jest większa niż liczba 5");
  }
  echo ("<br /><br />");

  $cyfra=2;
  if ($cyfra == 1){
    echo ("Wartosc zmiennej to 1");
  } elseif ($cyfra == 2){
    echo ("Wartosc zmiennej to 2");
  } elseif ($cyfra == 3){
    echo ("Wartosc zmiennej to 3");
  }
  echo ("<br /><br />");

  $cyfra=4;
  if ($cyfra == 1){
    echo ("Wartosc zmiennej to 1");
  } elseif ($cyfra == 2){
    echo ("Wartosc zmiennej to 2");
  } elseif ($cyfra == 3){
    echo ("Wartosc zmiennej to 3");
  } else {
    echo ("Wartosc zmiennej to $cyfra nie mieści się w przedziale 1-3");
  }
  echo ("<br /><br />");

  include '../include/footer.php';
?>
