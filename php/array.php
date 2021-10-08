<?php
$fruits= array("apple","orange","babana");
echo "this is an array of fruits like ".$fruits[0]."  ".$fruits[1]."<br>";
for($x=0;$x<3;$x++)
    {echo $fruits[$x]."<br>"; }

$cars= array("bmw"=>"blue colour","benz"=>"white colour");
echo $cars["bmw"];
foreach($cars as $key => $value){
    echo "car=$key discription=$value<br>";
}


$phone= array(
    array("iphone","54k"),
    array("oneplus","37k")
);

echo $phone[1][1];

?>