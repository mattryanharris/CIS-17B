#include <QCoreApplication>
#include <QString>
#include <QDate>
#include <QList>
#include <QDebug>
#include "qstd.h"

using namespace qstd;

int main(int argc, char *argv[])
{
    QList <int> list;

    list.append(2);
    list << 3;
    list += 6;

    for (int i = 0; i < list.size(); i++) {
        cout << list[i] << endl;
    }

    QString items = "cat, dog, bird";
    QStringList strListA = items.split(", ");

    for (int i = 0; i < strListA.size(); i++) {
        cout << strListA[i] << endl;
    }

    cout << "Using a foreach\n";

    foreach(const QString &str, strListA) {
        cout << str << endl;
    }

    QListIterator <QString> itr(strListA);

    while(itr.hasNext()) {
        QString current = itr.next();
        cout << current << "\n";
    }

    qDebug() << "This is qDebug\n";



    return 0;
}
