<!DOCTYPE html>
<html lang="en">
<head>
  <title><?php echo "$title" ?></title>
  <meta charset="utf-8">
  <link rel="stylesheet" href="css/reset.css" type="text/css" media="all">
  <link rel="stylesheet" href="css/layout.css" type="text/css" media="all">
  <link rel="stylesheet" href="css/style.css" type="text/css" media="all">
  <script type="text/javascript" src="js/jquery-1.4.2.js" ></script>
  <script type="text/javascript" src="js/cufon-yui.js"></script>
  <script type="text/javascript" src="js/cufon-replace.js"></script>
  <script type="text/javascript" src="js/UkrainianMysl_400.font.js"></script>
  <script type="text/javascript" src="js/HomewardBound_400.font.js"></script>
  <!--[if lt IE 9]>
  <script type="text/javascript" src="http://info.template-help.com/files/ie6_warning/ie6_script_other.js"></script>
  <script type="text/javascript" src="js/html5.js"></script>
  <![endif]-->

  <script>
    function showRSS(str) {
      if (str.length==0) {
        document.getElementById("rssOutput").innerHTML="";
        return;
      }
      if (window.XMLHttpRequest) {
        // code for IE7+, Firefox, Chrome, Opera, Safari
        xmlhttp=new XMLHttpRequest();
      } else {  // code for IE6, IE5
        xmlhttp=new ActiveXObject("Microsoft.XMLHTTP");
      }
      xmlhttp.onreadystatechange=function() {
        if (xmlhttp.readyState==4 && xmlhttp.status==200) {
          document.getElementById("rssOutput").innerHTML=xmlhttp.responseText;
        }
      }
      xmlhttp.open("GET","getrss.php?q="+str,true);
      xmlhttp.send();
    }
  </script>

</head>

<?php

  $text = $_GET['text'];
  $odbiorca = $_GET['odbiorca'];
  $nadawca = $_GET['nadawca'];
  if (empty($_GET['nadawca']) || empty($_GET['odbiorca']) || empty($_GET['text'])){
    echo '
  <body>
    <form class="form-horizontal">
    <fieldset>

    <div class="control-group">
      <div class="controls">
        <input id="nadawca" name="nadawca" type="text" placeholder="Nadawca" class="input-xlarge">
      </div>
    </div>

    <!-- Text input-->
    <div class="control-group">
      <div class="controls">
        <input id="odbiorca" name="odbiorca" type="text" placeholder="Odbiorca" class="input-xlarge">
      </div>
    </div>

    <!-- Textarea -->
    <div class="control-group">
      <div class="controls">
        <textarea id="text" name="text">default text</textarea>
      </div>
    </div>
    <div class="control-group">
      <div class="controls">
        <button id="id" class="btn btn-success">Wyslij</button>
      </div>
    </div>

    </fieldset>
    </form>
  </body>
    ';} else { echo '
  <style type="text/css">
  .tg  {border-collapse:collapse;border-spacing:0; width: 100%; height: 100%;}
  .tg td{font-family:Arial, sans-serif;font-size:14px;padding:10px 5px;border-style:solid;border-width:1px;overflow:hidden;word-break:normal;}
  .tg th{font-family:Arial, sans-serif;font-size:14px;font-weight:normal;padding:10px 5px;border-style:solid;border-width:1px;overflow:hidden;word-break:normal;}
  .tg .tg-s6z2{text-align:center; width: 50%}
  </style>
  <table class="tg">
    <tr>
      <th class="tg-s6z2" colspan="4" rowspan="5">'.$text.'</th>
      <th class="tg-031e" colspan="3" rowspan="2"></th>
      <th class="tg-031e" rowspan="2" width="15%" height="10%"><img src="images/znaczek.png" width="100%" height="50%"/></th>
    </tr>
    <tr>
    </tr>
    <tr>
      <td class="tg-031e" colspan="4">Nadawca: '.$nadawca.'</td>
    </tr>
    <tr>
      <td class="tg-031e" colspan="4">Odbiorca: '.$odbiorca.'</td>
    </tr>
    <tr>
      <td class="tg-031e" colspan="4">Karta wygenerowana przez PanOtlet :3</td>
    </tr>
  </table>
';}
?>
