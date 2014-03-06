/**
 * @file
 * Provide event nodes/pages with ticket info from Place2book
 */
(function ($) {
  Drupal.behaviors.exampleModule = {
    attach: function (context, settings) {
      $('.place2book-ticketinfo', context).each(function() {
        var obj = this;
        $.getJSON(Drupal.settings.basePath + 'ding/place2book/ticketinfo/' + this.value, function(data) {
          $(obj).replaceWith(data['markup']);
        });
      });
    }
  };
})(jQuery);
