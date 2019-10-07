<?php

interface Tossable{
	function toss();
}

class Ball implements Tossable {
	protected $brandName;
	function __construct($brandName){
		$this -> brandName = $brandName;
	}
	function getBrandName(){
		return $this -> brandName;
	}
	function toss(){
		echo $this -> brandName." disawat";
	}
	function bounce(){
		echo "bola ".$this -> brandName." melayang";
	}
}

class Rock implements Tossable{
	
	function toss(){
		echo "disawat";
	}
}

class Baseball extends Ball{
	
	function __construct($brandName)
	{
		$this -> brandName = $brandName ; 
	}
}

class Football extends Ball
{
	
	function __construct($brandName)
	{
		$this -> brandName = $brandName ;
	}
}

$Baseball = new Baseball("baseball");
$Football = new Football("football");
$Football -> toss();
echo "<br>";
$Football -> bounce();
echo "<br><br>";
$Baseball -> toss();
echo "<br>";
$Baseball -> bounce();

?> 
