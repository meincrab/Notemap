#include "listmodel.h"
#include "database.h"
#include <QDate>

ListModel::ListModel(QObject *parent) :
    QSqlQueryModel(parent)
{
    QDate date = QDate::currentDate();
    this->updateModel(date.toString("dd.MM.yyyy"));
}

// Метод для получения данных из модели
QVariant ListModel::data(const QModelIndex & index, int role) const {

    // Определяем номер колонки, адрес так сказать, по номеру роли
    int columnId = role - Qt::UserRole - 1;
    // Создаём индекс с помощью новоиспечённого ID колонки
    QModelIndex modelIndex = this->index(index.row(), columnId);

    /* И с помощью уже метода data() базового класса
     * вытаскиваем данные для таблицы из модели
     * */
    return QSqlQueryModel::data(modelIndex, Qt::DisplayRole);
}

// Метод для получения имен ролей через хешированную таблицу.
QHash<int, QByteArray> ListModel::roleNames() const {
    /* То есть сохраняем в хеш-таблицу названия ролей
     * по их номеру
     * */
    QHash<int, QByteArray> roles;
    roles[IdRole] = "id";
    roles[DateRole] = "date";
    roles[NameRole] = "name";
    roles[CityRole] = "city";
    roles[AddressRole] = "address";
    roles[TimeRole] = "time";
    roles[ColorRole] = "color";
    roles[NotesRole] = "notes";
    return roles;
}

// Метод обновления таблицы в модели представления данных
void ListModel::updateModel(QString d)
{
    QSqlQuery query;
    query.prepare("SELECT id, " TABLE_DATE ", " TABLE_NAME ", " TABLE_CITY ", " TABLE_ADDRESS ", " TABLE_TIME ", " TABLE_COLOR ", " TABLE_NOTES " FROM " TABLE " WHERE " TABLE_DATE " = :DATE;");
    query.bindValue(":DATE", d);
    query.exec();
    this->setQuery(query);
}

// Получение id из строки в модели представления данных
int ListModel::getId(int row)
{
    return this->data(this->index(row, 0), IdRole).toInt();
}

int ListModel::setId() {
    return tid;
}

QString ListModel::setName() {
    return tname;
}

QString ListModel::setCity() {
    return tcity;
}

QString ListModel::setAddress() {
    return taddress;
}

QString ListModel::setTime() {
    return ttime;
}

QString ListModel::setColor() {
    return tcolor;
}

QString ListModel::setNotes() {
    return tnotes;
}

void ListModel::getTask(QString d, int ind){
    QSqlQuery query;
    query.prepare("SELECT id, " TABLE_DATE ", " TABLE_NAME ", " TABLE_CITY ", " TABLE_ADDRESS ", " TABLE_TIME ", " TABLE_COLOR ", " TABLE_NOTES " FROM " TABLE " WHERE " TABLE_DATE " = :DATE AND id = :ID;");
    query.bindValue(":DATE", d);
    query.bindValue(":ID", ind);
    query.exec();
    while (query.next()) {
        tid = query.value(0).toInt();
        tname = query.value(2).toString();
        tcity = query.value(3).toString();
        taddress = query.value(4).toString();
        ttime = query.value(5).toString();
        tcolor = query.value(6).toString();
        tnotes = query.value(7).toString();
    }
}
//вот здесь лист из адресов по дате
QStringList ListModel::addressList(QString d){
    QSqlQuery query;
    QStringList tmp;
    query.prepare("SELECT id, " TABLE_DATE ", " TABLE_CITY ", " TABLE_ADDRESS " FROM " TABLE " WHERE " TABLE_DATE " = :DATE;");
    query.bindValue(":DATE", d);
    query.exec();
    while (query.next()) {
        tmp.append(query.value(2).toString() + ", " + query.value(3).toString());
    }
    return tmp;
}
