<?php
  include '../include/head.php';

  $naglowki = "From: otlet@jest.guru".PHP_EOL."Reply-To: otlet@jest.guru".PHP_EOL."Content-type: text/plain; charset=iso-8859-2";


  if(mail('$do', '$temat', '$tresc', $naglowki))
    echo 'Wiadomość została wysłana';
  else
    echo 'Wiadomosc nie zostala wyslana';

  include '../include/footer.php';
?>
