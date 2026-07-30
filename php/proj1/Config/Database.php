<?php

class Database{
    private $conn;
    private $host = 'localhost';  // ← поменял artem на localhost
    private $port = '5432';
    private $db_name = 'bd';
    private $user = 'artem';
    private $password = 'Artem2800';

    public function __construct()
    {
      $dsn = "pgsql:host={$this->host};port={$this->port};dbname={$this->db_name};";
    
      try{
        $this->conn = new PDO($dsn, $this->user, $this->password);
        $this->conn->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
      } catch (PDOException $e) {
        die("Ошибка: " . $e->getMessage());
      }
    
    }

    public function query($sql_q){
        return $this->conn->query($sql_q);
    }

}

// Чтобы проверить работу:
$db = new Database();
$result = $db->query("SELECT * FROM bd");
print_r($result->fetchAll());

?>