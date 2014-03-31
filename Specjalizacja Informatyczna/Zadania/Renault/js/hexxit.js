$(document).ready(function(){

	y = $(window).height();
 	if (y < 835) {
 		$(".bottom-cut").css({position:'fixed', top: y-135+'px', height: "135px"});
 	} else {
 		$(".bottom-cut").css({position:'fixed', top: '700px',height: "100%"});
 	}

	$(".view").bind('scroll',function(e){
    	parallaxScroll();
    	redrawnav();
	});

	function redrawnav() {
		$('.subnav ul li a').removeClass('active');
		var xPos = $('.view').scrollLeft();
		if (xPos < 1250) {
			$('.subnav a.to-start').addClass('active');
		} else if (xPos >= 1250 && xPos < 2800) {
			$('.subnav a.to-inn').addClass('active');
		} else if (xPos >= 2800 && xPos < 4300) {
			$('.subnav a.to-tower').addClass('active');
		} else if (xPos >= 4300 && xPos < 5650) {
			$('.subnav a.to-dungeon').addClass('active');
		} else if (xPos >= 5650 && xPos < 6700) {
			$('.subnav a.to-fight').addClass('active');
		} else if (xPos >= 6700) {
			$('.subnav a.to-end').addClass('active');
		}
		console.log(xPos);
	}
	redrawnav();

	function parallaxScroll(){
	    var scrolled = $(".view").scrollLeft();
	    $('.divider0').css('left',(1100-(scrolled*.50))+'px');
	    $('.inn').css('left',(1900-(scrolled*.20))+'px');
	    $('.divider1').css('left',(2645-(scrolled*.10))+'px');
	    $('.mountains-dark').css('background-position',(0-(scrolled*.05))+'px 0px');
	    $('.mountains').css('background-position',(0-(scrolled*.05))+'px 0px');
	    //$('.clouds').css('background-position',(0-(scrolled*.08))+'px 0px');
	    //$('.clouds-large').css('background-position',(0-(scrolled*.25))+'px 0px');
	    $('.stairs').css('left',(200-(scrolled*.05))+'px');
	    $('.golem').css('left',(1300-(scrolled*.15))+'px');
	    $('.warriorfly').css('left',(950+(scrolled*.04))+'px');
	    $('.archertop').css('left',(1100-(scrolled*.20))+'px');
	}

	function moveClouds() {
		$('.clouds').animate({'background-position': '-=50px'}, 10000, 'linear', moveClouds);
		
	}
	moveClouds();

	function moveClouds2() {
		$('.clouds-large').animate({'background-position': '-=50px'}, 3000, 'linear', moveClouds2);
	}
	moveClouds2();


	$("body").mousewheel(function(event, delta) {

	  if (!$(".content").is(":visible")) {
	      $(".view").scrollLeft($(".view").scrollLeft() - (delta * 80));
	    
	      event.preventDefault();
	  }

   });

	

	$('a.to-start').click(function(){
    	$('.view').animate({
    		scrollLeft:0
    	}, 3000, function() {
		});
    	return false;
	});

	$('a.to-inn').click(function(){
    	$('.view').animate({
    		scrollLeft:1250
    	}, 3000, function() {
		});
    	return false;
	});

	$('a.to-tower').click(function(){
    	$('.view').animate({
    		scrollLeft:2800
    	}, 3000, function() {
		});
    	return false;
	});

	$('a.to-dungeon').click(function(){
    	$('.view').animate({
    		scrollLeft:4300
    	}, 3000, function() {
		});
    	return false;
	});

	$('a.to-fight').click(function(){
    	$('.view').animate({
    		scrollLeft:5650
    	}, 3000, function() {
		});
    	return false;
	});

	$('a.to-end').click(function(){
    	$('.view').animate({
    		scrollLeft:7350
    	}, 3000, function() {
		});
    	return false;
	});

	 $('.view').kinetic({ y: false, filterTarget: false });

	 $(window).resize(function() {
	 	y = $(window).height();
	 	if (y < 835) {
	 		$(".bottom-cut").css({position:'fixed', top: y-135+'px', height: "135px"});
	 	} else {
	 		$(".bottom-cut").css({position:'fixed', top: '700px',height: "100%"});
	 	}
	 });

	$(".view").click(function() {
		closeModal();
	});

	$(".nav").click(function() {
		var rel = $(this).attr("rel");
		hideAllContent();
		if ($(".content").is(":visible")) {
			$(".content-inside").fadeOut();
			$("." + rel).fadeIn();
		} else {
			$("." + rel).show();
			$(".content").slideDown();
			$(".subnav").fadeOut();
		}
		
	});

	function hideAllContent() {
		$(".about").hide();
		$(".mod-list").hide();
		$(".download").hide();
	}

	function closeModal() {
		$(".content").slideUp();
		$(".subnav").fadeIn();
	}

});