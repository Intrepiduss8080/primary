<?php

class User {
    
private $name, $password;

function __construct($name, $password){
    $this ->name = $name;
    $this->password = $password;
}



 public function print_info(){
    echo "Имя: ".$this->name. " Пароль: ".$this->password;
 }
}


$us1 = new User('User_2', "User2_2");
$us1 -> print_info();
?>