package main

import (
	"fmt"
	"os"
	"time"
)


func main(){


 	files,err := os.ReadDir("/Загрузки")

	if err != nil{
		fmt.Println(err)
	return
	}


	for  dirc := range files{
		fmt.Println(dirc.Name())
	}
}