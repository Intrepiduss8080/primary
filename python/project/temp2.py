import requests
from bs4 import BeautifulSoup

url = "https://wttr.in/%D0%92%D0%BE%D0%BB%D1%8C%D1%81%D0%BA"

headers = {
    'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36'
}

page = requests.get(url, headers=headers)
soup = BeautifulSoup(page.text, "html.parser")


if page.status_code == 200:
    def weather_now():
        
        temp = soup.find("span", class_='term-fgx154')
        temp = temp.text  # нынешняя температура

        wind = soup.find("span", class_="term-fgx220")  # ветер
        wind = wind.text

        print(f"Температура сейчас: {temp} °С. Ветер: {wind} km/h")


    def all_forecasts():
        num_string = ['1', '2', '3', '4', '5', '6', '7', '8', '9', '-', '+', ' °C          │ ']
        all_temp = soup.find_all('span')

        for span in all_temp:
            temp = span.text
            if ' °C          │ ' in temp:
                print(temp)



weather_now()