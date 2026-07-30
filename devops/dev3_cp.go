package main

import (
	"fmt"
	"log"
	"os"
	"path/filepath"
	"strings"
	"time"
)

func main() {

	var input string
	fmt.Print("Введите да/нет: ")
	fmt.Scan(&input)

	for input == "да" || input == "yes" || input == "Да" || input == "Yes" || input == "y" || input == "д" {

		dir_name := "/home/opensor/Загрузки/"
		dir, err := os.ReadDir(dir_name)

		if err != nil {
			log.Fatal(err)
		}

		var ext string

		for _, file := range dir {
			ext = filepath.Ext(file.Name())
			if strings.Contains(file.Name(), ".webp") == true || ext == ".jpg" || ext == ".jpeg" || ext == ".png" {
				err := os.Rename(dir_name+file.Name(), dir_name+"pictures/"+file.Name())
				if err != nil {
					fmt.Println("error")
				}
			}

			if ext == ".pdf" {
				err := os.Rename(dir_name+file.Name(), dir_name+"docs/"+file.Name())
				if err != nil {
					fmt.Println("error")
				}
			}

			if ext == ".zip" || ext == ".gz" || ext == ".xz" {
				err := os.Rename(dir_name+file.Name(), dir_name+"archive/"+file.Name())
				if err != nil {
					fmt.Println("error")
				}
			}
		}

		time.Sleep(5 * time.Second)

		fmt.Print("Дальше? (да/нет?): ")
		fmt.Scan(&input)

	}
}
