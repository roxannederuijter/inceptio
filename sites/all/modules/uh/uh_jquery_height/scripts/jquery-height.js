(function ($) {
    $(document).ready(function () {
        var currentTallest = 0;
        var odds           = $('.view-id-vacatures .views-row-odd');
        var evens          = $('.view-id-vacatures .views-row-even');

        for(var i = 0; i < odds.length; i++){
            if(typeof(evens[i]) == 'undefined'){ continue; }
            var odd  = $(odds[i]);
            var even = $(evens[i]);
            if(odd.outerHeight() > even.outerHeight()){
                console.log("odd");
                even.css({height: odd.outerHeight()});
            } else {
                console.log("even");
                odd.css({height: even.outerHeight()});
            }
        }

    });

})(jQuery);


