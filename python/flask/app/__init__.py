from flask import Flask
from flask_sqlalchemy import SQLAlchemy

db = SQLAlchemy()

def create_app():
    app = Flask(__name__)
    app.config["SQLALCHEMY_DATABASE_URI"] = "postgresql://artem:Artem2800@localhost:5432/bd"
    db.init_app(app)

    from app.routes import bp
    app.register_blueprint(bp)

    return app