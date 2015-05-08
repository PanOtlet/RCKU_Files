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
<body id="page1">
  <div class="main">
    <header>
      <div class="wrapper">
        <ul id="icons">
          <li><a href="#"><img src="images/icon1.gif" alt=""></a></li>
          <li><a href="#"><img src="images/icon2.gif" alt=""></a></li>
          <li><a href="#"><img src="images/icon3.gif" alt=""></a></li>
          <li><a href="#"><img src="images/icon4.gif" alt=""></a></li>
          <li><a href="#"><img src="images/icon5.gif" alt=""></a></li>
          <li><a href="#"><img src="images/icon6.gif" alt=""></a></li>
          <li><audio src="audio.mp3" controls type="audio/mpeg" /></li>
        </ul>
      </div>
      <div class="wrapper">
        <div id="banner">
          <h1><a href="index.php" id="logo">Merry X-Mas</a></h1>
          <span class="text">
            What does the fox say?
            <span>Ring-ding-ding-ding-dingeringeding!</span>
        </div>
      </div>
      <div id="menu">
        <div id="menu_left">
          <div id="menu_right">
            <nav>
              <ul>
                <li><a href="index.php">Home</a></li>
                <li><a href="About.php">O nas</a></li>
                <li><a href="http://23games.github.io/CMS23">CMS23</a></li>
                <li><a href="Contacts.php">Kontakt</a></li>
                <li class="bg_none"><a href="kartka.php">Kartka</a></li>
              </ul>
            </nav>
          </div>
        </div>
      </div>
    </header>

<?php function rss(){echo '<form>
  <select onchange="showRSS(this.value)">
    <option value="">Wybierz RSS:</option>
    <option value="Google">Google News</option>
  </select>
</form>
 <div id="rssOutput">Tutaj jest RSS</div>';}?>
