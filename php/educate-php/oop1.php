<?php 

class Users{
    private string $name;
    private string $password;
    private int $age;

    function __construct(string $name, string $password, int $age)
    {
        $this -> name = $name;
        $this -> password = $password;
        $this -> age = $age;
    }

    public function getName(){
        return $this->name;
    }

    public function getPassword(){
        return $this->password;
    }

    public function getAge(){
        return $this->age;
    }


}

?>