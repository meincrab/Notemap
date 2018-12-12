#ifndef LISTMODEL_H
#define LISTMODEL_H

#include <QObject>
#include <QSqlQueryModel>

class ListModel : public QSqlQueryModel
{
    Q_OBJECT
public:
    /* Перечисляем все роли, которые будут использоваться в TableView
     * Как видите, они должны лежать в памяти выше параметра Qt::UserRole
     * Связано с тем, что информация ниже этого адреса не для кастомизаций
     * */
    enum Roles {
        IdRole = Qt::UserRole + 1,
        DateRole,
        NameRole,
        CityRole,
        AddressRole,
        TimeRole,
        ColorRole,
        NotesRole
    };

    // объявляем конструктор класса
    explicit ListModel(QObject *parent = 0);

    // Переопределяем метод, который будет возвращать данные
    QVariant data(const QModelIndex & index, int role = Qt::DisplayRole) const;

protected:
    /* хешированная таблица ролей для колонок.
     * Метод используется в дебрях базового класса QAbstractItemModel,
     * от которого наследован класс QSqlQueryModel
     * */
    QHash<int, QByteArray> roleNames() const;

signals:

public slots:
    void updateModel(QString date);
    int getId(int row);
    int setId();
    QString setName();
    QString setCity();
    QString setAddress();
    QString setTime();
    QString setColor();
    QString setNotes();
    void getTask(QString date, int ind);
    QStringList addressList(QString date);

private:
    QString tname;
    QString tcity;
    QString taddress;
    QString ttime;
    QString tcolor;
    QString tnotes;
    int tid;
};


#endif // LISTMODEL_H
