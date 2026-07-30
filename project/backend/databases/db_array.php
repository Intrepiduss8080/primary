<?php
require_once('db_connect.php');

$db_language = []; //массив language 2й таблицы
$db_id_lang = []; //массив id_lang
$db_lang_matter = []; //массив lang->matter
$db_language_theme = []; //массив language->theme
$db_title_matter = [];
$db_matter_code = [];
$db_code = [];


$sql = "SELECT * 
                    FROM document_1
                    JOIN manual
                    ON document_1.id = manual.id_lang";

$stmt = $conn->query($sql);
$all_db = $stmt-> fetchAll(PDO::FETCH_ASSOC);
//

foreach($all_db as $row){
    $db_language[] = $row['language'];
    $db_id_lang[] = $row['id_lang'];
    $db_language_theme[$row['language']] = $row['theme'];
    $db_theme_title[$row['theme']] = $row['title'];
    $db_title_matter[$row['title']] = $row['matter'];

    $db_matter_code[$row['matter']]  = $row['code'];

}
//echo $db_theme_matter['тема1'];
//echo($db_theme_id_lang[$id][$id_lang]);

//echo $db_matter_code['контент1'][1];


?>