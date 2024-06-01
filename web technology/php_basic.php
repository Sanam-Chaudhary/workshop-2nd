<?php
print_r($GLOBALS);
$x = 5;
echo "This is global scope: $x ";
// echo 'this is global scope: $x';
$x = 5; // global scope
function myTest()
{
    print_r($GLOBALS);
    $GLOBALS['x'] = 15;
    $GLOBALS['y'] = 5;
    echo "<p>Inside function is: " . $GLOBALS['x'] . "</p>";
}
$y = 10;
myTest();
//print_r($GLOBALS);
echo "<p>Outside function is: " . $GLOBALS['x'] . "</p>"
    . $GLOBALS['y'];
function Mytest1()
{
    global $x;
    $x = 10;
    echo "Inside function $x ";
    echo 'Inside function $x ';
}
Mytest1();
echo "Outside function $x ";
print_r($GLOBALS);
function increment($a, $b = 1)
{
    $c = $a * $b;
    echo "$c <br>";
}
increment(2000, 2);
increment(8000);
class Car
{
    // Properties
    public $color;
    public $model;

    // Constructor
    public function __construct($color, $model)
    {

        $this->color = $color;
        $this->model = $model;
    }
    // Method
    public function message()
    {
        return "My car is a " . $this->color . "" . $this->model . "!";
    }
}
$myCar = new Car("black", "Volvo");
echo $myCar->message();
echo "<br>";
$myCar = new Car("red", "Toyota");
echo $myCar->message();
