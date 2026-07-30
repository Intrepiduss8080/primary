import requests
from bs4 import BeautifulSoup


url = "https://www.gismeteo.ru/weather-volsk-11771/"

headers = {
    'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36'
}




page = requests.get(url, headers=headers)

print(f"статус кода: {page.status_code}")


if page.status_code == 200:
    soup = BeautifulSoup(page.text, 'html.parser')

    temputere = soup.find('temperature-value')
    feel_temp = soup.find("div", class_="weather-feel")
    temp_tom = soup.find("div", class_="charts")

    if temputere and feel_temp and temp_tom:
        temputere = temputere.get('value')

        feel_2 = feel_temp.find('temperature-value')
        feel = feel_2.get('value')

        temp_tom = temp_tom.find("temperature-value")
        temp_tom = temp_tom.get("value")


        print(f"Температура в данный момент времени: {temputere}°С")
        print(f"Ощущется как: {feel} °С")
        print(f"Сегодня: {temp_tom} °С")
    


