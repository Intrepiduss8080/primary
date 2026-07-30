import os
from pathlib import Path

path_main = Path('/home/opensor/')

path_img = path_main / "Изображения"

for img in path_img.iterdir():
    print(img.name)
