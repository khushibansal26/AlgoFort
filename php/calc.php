<?php
class Calc
{
    public $operator;
    public $num1;
    public $num2;

    public function __construct(string $opt, int $two, int $three)
    {
        $this->operator = $opt;
        $this->num1 = $two;
        $this->num2 = $three;
    }

    public function calculator()
    {
        switch ($this->operator) {
            case 'add':
                $result = $this->num1 + $this->num2;
                return $result;
                break;
            case 'sub':
                $result = $this->num1 - $this->num2;
                return $result;
                break;
            case 'div':
                $result = $this->num1 / $this->num2;
                return $result;
                break;
            case 'mul':
                $result = $this->num1 * $this->num2;
                return $result;
                break;
            case 'mod':
                $result = $this->num1 % $this->num2;
                return $result;
                break;

        }
    }

}
?>



<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>CALC</title>
    <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.5.1/jquery.min.js"></script>
</head>
<body>
<center>
<form action="" method = "post">

<p>Calculator</p>
<input type= "number" name="num1" placeholder="First number" id="num1">
<select name="operator" id="operator">
  <option value="add"> Addition </option>
  <option value="sub"> Substraction </option>
  <option value="div">Division </option>
  <option value="mul">Multiplication </option>
  <option value="mod">Modulus </option>
</select>
<input type="number" name="num2" placeholder="Second number" id="num2">
<button type="button" name="button" id="btn1">  Calculate</button><br><br>
</form>
<p id="result"></p>
<script>$("#btn1").click(function(){
    op=document.getElementById("operator").value;
    num1=document.getElementById("num1").value;
    num2=document.getElementById("num2").value;
    $.ajax({url: "calc1.php",
        type:"post",
       datatype: "json",
       data:{
           op:op,
           num1:num1,
           num2:num2
       },
       success:function(result){
        $("#result").html(result);
       }


    })
})
</script>

<?php
/*$oper = $_POST["operator"];
$num1 = $_POST["num1"];
$num2 = $_POST["num2"];

$calc = new Calc($oper, $num1, $num2);
echo "Result=" . $calc->calculator();
 */
?>
</center>
</body>
</html>