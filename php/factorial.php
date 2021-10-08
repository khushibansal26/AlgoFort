<?php
function Factorial($n){
    $factorial = 1;
    for ($i = 1; $i <= $n; $i++){
      $factorial = $factorial * $i;
    }
    return $factorial;
}
  
$n = 6;
echo "Input Number is $n<br>";
echo "Factorial = ".Factorial($n);
?>