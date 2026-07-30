from app import db  

class User(db.Model):

    id = db.Column(db.Integer, primary_key=True)
    mail = db.Column(db.String(90), nullable=False)
    password = db.Column(db.String(90), nullable=False)
    username = db.Column(db.String(50), nullable=False, unique=False)

