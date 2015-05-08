<?php
	$title = "Home";
	require_once 'inc/header.php';
?>
<!--content -->
	<section id="content">
		<article class="col1">
			<div class="box1 min_height">
				<h3><span><span><strong>&nbsp;</strong>List do sw. Mikołaja</span></span></h3>
				<form id="ContactForm" action="">
					<div>
						<div class="wrapper"><input type="text" class="input" /><strong>Imie:</strong><br /></div>
						<div class="wrapper"><input type="text" class="input" /><strong>Email:</strong><br /></div>
						<div class="wrapper"><textarea name="textarea" cols="1" rows="1"></textarea><strong>Teks:</strong><br /></div>
						<div class="centrer">
							<a href="#" class="button" onClick="document.getElementById('ContactForm').reset()"><span><span>wyczysc</span></span></a>
							<a href="#" class="button" onClick="document.getElementById('ContactForm').submit()"><span><span>wyslij</span></span></a>
						</div>
					</div>
				</form>
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
