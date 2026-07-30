<?php
require_once(__DIR__."/../databases/db_array.php");

$post = "PHP"; // или $_POST['language'];

// ПРОВЕРКА - смотрим что внутри массива
echo "<pre>";
print_r($db_language_theme);
echo "</pre>";

// ЕСЛИ массив не пустой и ключ существует
if(isset($db_language_theme[$post])) {
    echo "Темы для языка " . $post . ":<br>";
    
    // ВЫВОДИМ темы
    foreach($db_language_theme[$post] as $theme) {
        echo $theme . "<br>";
        
        // ТВОЙ SQL ЗАПРОС
        $sql_req = "SELECT title FROM manual WHERE theme = '$theme'";
        echo "SQL: " . $sql_req . "<br>";
    }
} else {
    echo "Язык $post не найден в массиве";
}
?>