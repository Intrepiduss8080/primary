from app import db

class Catalog(db.Model):
    id = db.Column(db.Integer, primary_key=True)
    name = db.Column(db.String(90), nullable=False)
    article = db.Column(db.String(90), unique=True, nullable=False)
    category = db.Column(db.String(90), nullable=False)
    price = db.Column(db.Float, nullable=False)
    image_name = db.Column(db.String(200), nullable=True)