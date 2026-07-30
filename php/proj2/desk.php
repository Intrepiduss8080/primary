<?php

$dir_name = "/home/opensor/Загрузки/";

function transfer(string $dir_name)
{
    if (!is_dir($dir_name)) {
        die("Ошибка: Директория не найдена\n");
    }

    // Карта: какое расширение в какую папку класть
    $extensions_map = [
        'jpg'  => 'pictures/', 'jpeg' => 'pictures/', 'png' => 'pictures/', 'webp' => 'pictures/', 'gif' => 'pictures/',
        'pdf'  => 'docs/',     'doc'  => 'docs/',     'docx' => 'docs/',    'txt'  => 'docs/',    'odt' => 'docs/',
        'zip'  => 'archive/',  'rar'  => 'archive/',  '7z'   => 'archive/'
    ];

    // scandir + array_diff сразу убирает "." и ".." без всяких циклов
    $files = array_diff(scandir($dir_name), ['.', '..']);

    foreach ($files as $file) {
        $file_path = $dir_name . $file;

        if (!is_file($file_path)) continue;

        // Быстро получаем расширение в нижнем регистре
        $ext = strtolower(pathinfo($file_path, PATHINFO_EXTENSION));

        // Если расширение есть в нашей карте — перемещаем
        if (isset($extensions_map[$ext])) {
            $target_dir = $dir_name . $extensions_map[$ext];

            if (!is_dir($target_dir)) {
                mkdir($target_dir, 0777, true);
            }

            rename($file_path, $target_dir . $file);
        }
    }
}

transfer($dir_name);
echo "Сортировка успешно завершена!\n";

