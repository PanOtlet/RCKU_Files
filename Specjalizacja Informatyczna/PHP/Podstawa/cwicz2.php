<?php
  include '../include/head.php';

  $lancuch1="Koń";
  $lancuch2="ciągnie";
  $lancuch3="wóz";
  $zdanie="$lancuch1.$lancuch2.$lancuch3";
  printf ("Powstało zdanie: $zdanie");
  echo ("<br /><br />");

  $tab[0]="Polska";
  $tab[1]="Niemcy";
  $tab[2]="Czechy";
  $tab[3]="Francja";
  printf ("Nowi członkowie Unii Europejskiej to: ".$tab[0]." i ".$tab[2].", a starzy trutnie to: ".$tab[1]." i ".$tab[3]);
  echo ("<br /><br />");

  $x="Renata";
  $y="Beger";
  $z="$x $y";
  echo ("<br /><br />");

  $tab[0]="Darek";
  $tab[1]="Marek";
  $tab[2]="Ewa";
  $tab[3]="Ola";
  $i=4;
  $tab[$i]="Ania";
  printf ("<b>$z i jej czworo dzieci:</b><br />$tab[0]<br />$tab[1]<br />$tab[2]<br />$tab[3]</br>$tab[4]");
  echo ("<br /><br />");

  $x="Janek";
  $y="Wisniewski";
  echo ("$x $y");
  echo ("<br /><br />");

  $a=5;
  echo($a);
  $a+=3;
  echo($a);
  $a-=1;
  echo($a);
  $a*=4;
  echo($a);
  $a/=2;
  echo($a);
  $a%=3;
  echo($a);
  echo ("<br />");
  $a=5;
  echo($a."<br />");
  $a+=3;;
  echo($a."<br />");
  $a-=1;;
  echo($a."<br />");
  $a*=4;;
  echo($a."<br />");
  $a/=2;;
  echo($a."<br />");
  $a%=3;;
  echo($a."<br />");

  echo ("<br /><br />");

  include '../include/footer.php';
?>
