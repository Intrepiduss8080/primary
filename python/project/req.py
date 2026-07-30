import requests
import json

resp = requests.get('https://wttr.in/Вольск?format=j1')

if resp.text:
    data = resp.json()
else: print("Пустой ответ.\n")

print("Температура: ")
print(data['current_condition'][0]["FeelsLikeC"], '°С')
#print(data['current_condition'][0]['lang_xx'][0]['value'])

print(data['current_condition'][0]["weatherDesc"][0]['value'])