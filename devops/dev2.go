package main

import(
  "fmt"
  "os"
  "log"
)

func main(){
  dir, err := os.ReadDir("/home/opensor/Загрузки/")
  if err != nil{
    log.Fatal(err)
  }

  for i, file := range dir{
    fmt.Println("Имя:", i, file.Name())
  }
}
