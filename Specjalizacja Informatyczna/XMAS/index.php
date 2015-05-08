<?php
	$title = "Home";
	require_once 'inc/header.php';
?>
		<section id="content">
			<article class="col1">
				<div class="box1 min_height">
					<?php for ($x=1;$x<=666;$x++){ echo '
					<h3><span><span><strong>&nbsp;</strong>Merry Christmas and Happy New Year!</span></span></h3>
					<div class="wrapper">
						<figure class="left marg_right1"><img src="images/page1_img1.jpg" alt=""></figure>
						<p class="pad_bot1"><strong>Witaj na stronie swiatecznej po raz '.$x.'!</strong></p>
						<p>Ta strona ma byc strona przykładowa z wykorzystaniem PHP. Lubię placki i pozdrawiam :)</p>
					</div>';}; ?>
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
