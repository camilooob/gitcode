/*(function($) {
    $.fn.disableEverything = function(options){
        var isMobile = /iPhone|iPad|iPod|Android/i.test(navigator.userAgent);
        var $this = $(this);
        var settings = $.extend({
            disableRightClick: null
        }, options); 
        
        return this.each(function(){
            
            if(settings.disableKeyboard){
                $this.on('keypress', function(){ return false; });

                window.addEventListener("keydown", function(e) {
                    if([32, 37, 38, 39, 40].indexOf(e.keyCode) > -1) {
                        e.preventDefault();
                    }
                }, false);
				
				if(isMobile){
					$this.on('touchstart', function(e){
						$('input, textarea').prop('disabled', true);
					});
                }
            }

            if(settings.disableRightClick){
				$this.on("contextmenu", function(){
					alert(settings.rightClickMessage);
					return false;
				});
            }

            if(settings.disableCopy){
                $this.on("cut copy paste", function(e){
                    alert(settings.copyMessage);
                    return false;
                });

                $this.on('keydown', function(e){
                    if((e.metaKey) && e.which == 67){
                        e.preventDefault();
                        alert(settings.copyMessage);
                        return false;
                    }
                });

                $('img').on("contextmenu", function(e){ return false; });

                if(isMobile){
					$('img').on('touchstart', function(e){ 
                        $('img').css({'-webkit-touch-callout':'none', '-webkit-user-select':'none', 
									'pointer-events':'none', '-moz-user-select':'none'});
                        e.preventDefault();
						return false; 
                    });
                }
            }

            if(settings.disableScroll){
                var keys = {37: 1, 38: 1, 39: 1, 40: 1};

                function preventDefault(e) {
                    e = e || window.event;
                    if(e.preventDefault)
                        e.preventDefault();
                    e.returnValue = false;  
                }

                function preventDefaultForScrollKeys(e) {
                    if(keys[e.keyCode]) {
                        preventDefault(e);
                        return false;
                    }
                }

                function disableScroll() {
                    if(window.addEventListener)
                        window.addEventListener('DOMMouseScroll', preventDefault, false);
                    window.onwheel = preventDefault;
                    window.onmousewheel = document.onmousewheel = preventDefault;
                    window.ontouchmove  = preventDefault;
                    document.onkeydown  = preventDefaultForScrollKeys;
                }
                disableScroll();
				
				if(isMobile){
					document.addEventListener('touchmove', function(e){ 
						e.preventDefault(); 
					}, { passive:false });
                }
            }

            if(settings.disableImageDragging){
                $('img').on('contextmenu dragstart', function(){ 
                    alert(settings.copyMessage);
                    return false; 
                });

                if(isMobile){
					$('img').on('touchstart', function(e){ 
                        $('img').css({'-webkit-touch-callout':'none', '-webkit-user-select':'none', 
									'pointer-events':'none', '-moz-user-select':'none'});
                        e.preventDefault();
						return false; 
                    });
                }
            }
        });
    }
}(jQuery));