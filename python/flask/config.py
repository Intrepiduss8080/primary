from flask import Flask
from flask_sqlalchemy import SQLAlchemy
app = Flask(__name__)
app.config["SQLALCHEMY_DATABASE_URI"] = "postgresql://artem:Artem2800@localhost:5432/bd"
db = SQLAlchemy(app)

#class User(db.Model):
    #mail = db.Column(db.String(90), unique=False, nullable=False)
    #password = db.Column(db.String(90), unique=True, nullable=False)

    