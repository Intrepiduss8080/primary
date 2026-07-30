from flask import Blueprint, render_template, Response, request
from app.catalog import Catalog
from app import db
from app.user import User

bp = Blueprint('main', __name__)

@bp.route("/")
def main():
    return render_template('index.html')

@bp.route('/catalog')
def catalog():
    goods = Catalog.query.all()
    return render_template('catalog.html', goods=goods)

@bp.route("/reg")
def users():
    return render_template('reg.html')

# ИСПРАВЛЕНО: тут теперь нормальный слэш и правильное имя переменной good_id
@bp.route("/catalog/<int:good_id_i>")
def product_card(good_id_i):
    good = Catalog.query.get_or_404(good_id_i)
    return render_template("product.html", good=good)


@bp.route("/reg", methods=['POST'])
def register():
    inp_name = request.form.get('name')
    inp_mail = request.form.get('mail')
    inp_password = request.form.get('password')

    if '@' not in inp_mail:
        return "Это не почта"

    if User.query.filter_by(username=inp_name).first():
        return "Это имя пользователя уже занято!"

    new_user = User(username=inp_name, mail=inp_mail, password=inp_password)
    
    db.session.add(new_user)
    db.session.commit()
    return "Зарегано"
