<?php include '../include/head.php'; ?>
    <p style="text-align: center">
      <?php
        //Zadanie 1
        define ("Pole",200);
        printf ("Pole wynosi: ".Pole." cm");
        echo ("<br /><br />");

        //Zadanie 2
        $y=0.55;
        $x=10;
        $z=$x+$y;
        printf ("Zmienna z ma wartosc: $z");
        echo ("<br /><br />");

        //Zadanie 3
        $x=4;
        $y=3;
        $a=$x-$y*2;
        printf ("Efektem działania jest liczba: $a");
        echo ("<br /><br />");

        //Zadanie 4
        $x=5;
        $y=10;
        $a=($x+$y)*2;
        $b=$x+$y*2;
        $c=$y/$x*2;
        $d=$y-$x*2+$y;
        printf ("Zmienne a,b,c,d: $a, $b, $c, $d");
        echo ("<br /><br />");

        //Zadanie 5
        $a=$b=$c=$d=4;
        $a+=2;
        $b-=3;
        $c*=2;
        $d/=3;
        printf ("Wartosc \$a wynosi:<font color=blue>$a</font><br />");
        printf ("Wartosc \$b wynosi:<font color=blue>$b</font><br />");
        printf ("Wartosc \$c wynosi:<font color=blue>$c</font><br />");
        printf ("Wartosc \$d wynosi:<font color=blue>$d</font>");
        echo ("<br /><br />");

        //Zadanie 6
        $a=$b=$c=$d=666;
        $a+=234;
        $b-=25;
        $c*=346;
        $d/=164;
        printf ("Wartosc \$a wynosi:<font color=blue>$a</font><br />");
        printf ("Wartosc \$b wynosi:<font color=blue>$b</font><br />");
        printf ("Wartosc \$c wynosi:<font color=blue>$c</font><br />");
        printf ("Wartosc \$d wynosi:<font color=blue>$d</font><br />");
      ?>
    </p>
    <?php include '../include/footer.php'; ?>
