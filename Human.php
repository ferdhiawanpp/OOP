<?php

interface Plumber{
	function unplugDrain();
}

interface Electrician{
	function changeBulb();
}

class Human {
	protected $name;
	function __construct($name)
	{
		$this -> name = $name ;
	}
	function toString(){
		return $this -> name ;
	}
}

class HandyPerson extends Human implements Plumber,Electrician{
	
	function __construct($name)
	{
		$this -> name = $name ;
	}
	function changeBulb(){
		echo " bisa edit video ";
	}
	function unplugDrain(){
		echo " bisa shoot video ";
	}
	function toString(){
		return $this -> name ;
	}	
}

class IndustrialPlumber extends Human implements Plumber{
	
	function __construct($name)
	{
		$this -> name = $name ;
	}
	function unplugDrain(){
		echo " bisa edit video ";
	}
	function toString(){
		return $this -> name ;
	}
}

class NobodySpecial extends Human
{
	
	function __construct($name)
	{
		$this -> name = $name ;
	}
	function toString(){
		return $this -> name ;
	}
}

?>
