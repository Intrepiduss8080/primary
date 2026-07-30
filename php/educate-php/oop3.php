<?php
class User {
    private string $name;
    private string $password;
    private int $age;
    
    // Сеттер для name
    public function setName(string $name): void {
        $this->name = $name;
    }
    public function getName() : string{
        return $this->name;
    }
    
    // Сеттер для password
    public function setPassword(string $password): void {
        $this->password = $password;
    }
    public function getPassword() : string {
        return $this->password;
    }
    

    public function setAge(int $age): void {
        $this->age = $age;
    }
    public function getAge() : int {
        return $this->age;
    }

    public function display(){
        echo "Имя:  {$this-> name} Пароль: {$this-> password}";
    }
}

class Admin extends User{

}

// не учитывать 
//$user_1 = new User();
//echo "\t - - >  ";
//$age_1 = fgets(STDIN);
//$user_1 -> setAge($age_1);
//

$us_ad_1 = new Admin();

$us_ad_1 -> setName("Админ_1");
$us_ad_1 -> setPassword("пароль админ_1");

$us_ad_1 -> display();
?>