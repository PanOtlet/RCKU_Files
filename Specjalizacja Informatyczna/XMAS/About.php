<?php
	$title = "O stronie";
	require_once 'inc/header.php';
?>
<!--content -->
	<section id="content">
		<article class="col1">
			<div class="box1 min_height">
				<h3><span><span><strong>&nbsp;</strong>O Stronie</span></span></h3>
				<p>Strona jest biedna, ale jest swiateczna i kolorowa i boli, gdy sie na nia patrzy. Dodatkowo edytor tekstowy nie rozumie wiekszosci polskich znaków, więc strona powstaje w połowicznie polskim języku, bo rakuje polaczko-cebulaczkowych znaków...</p>
				<?php for ($x=1;$x<=3;$x++){echo'
				<div class="wrapper pad_bot1">
					<figure class="left marg_right2"><img src="images/page2_img'.$x.'.jpg" alt=""></figure>
					<p class="pad_bot1"><strong>Śmieszny opis '.$x.' </strong></p>
					<p>Miał byc tutaj Lorem Ipsum, ale wolę zdac :D</p>
				</div>';};?>
			</div>
 </article>
		<article class="col2 pad_left1">
			<div class="box1">
				<?php rss(); ?>
			</div>
			<a href="#" id="banner1"><img src="images/banner1.jpg" alt=""></a>
 </article>
	</section>
<!-- / content -->
<?php require_once 'inc/footer.php' ?>
