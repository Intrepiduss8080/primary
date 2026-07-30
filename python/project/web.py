import requests
from bs4 import BeautifulSoup

class web:
    def __init__(self, url, headers):
        self.url = url
        self.headers = {
            "User-Agent": 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36'
        }
        self.page = None
        self.soup = None


    def get_page():
        self.page = requests.get(self.url, headers=self.headers)
        if self.page.status_code == 200:
            self.soup = BeautifulSoup(page.text, "html.parser")
            


