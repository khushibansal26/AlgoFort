<?php
function Fibonacci($n)
{

    if ($n == 0) {
        return 0;
    } else if ($n == 1) {
        return 1;
    } else {
        return (Fibonacci($n - 1) +
            Fibonacci($n - 2));
    }

}

$n = 12;
echo "Input Number is $n<br>";
echo "Fibonnacci series is ";
for ($count = 0; $count < $n; $count++) {
    echo Fibonacci($count) . " ";
}
?>

