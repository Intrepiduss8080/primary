package main

import (
	"fmt"
	"log"
	"net/http"

  "github.com/PuerkitoBio/goquery"
)


func main() {
  url := "https://www.gismeteo.ru/weather-saratov-5032/"
  page, err := http.Get(url)
  
  if err != nil{
    log.Fatal(err)
  }

  defer page.Body.Close()

  if page.StatusCode != 200{
    log.Fatalf("Статус кода: %d %s: ", page.StatusCode, page.Status)
  }

  doc, err := goquery.NewDocumentFromReader(page.Body)
  if err != nil{
    log.Fatal(err)
  }

  doc.Find(".weather-value .temperature-value").Each(func(i int, s *goquery.Selection){
    title := s.Text()
    fmt.Println("Найдено:", title)
  })

}
