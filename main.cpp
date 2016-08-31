#include <QCoreApplication>
#include <QString>
#include <QDate>
#include "qstd.h"

using namespace qstd;

int main(int argc, char *argv[])
{
    // QDate today(2016, 8, 31);
    QDate today(QDate::currentDate());
    QString st = "Here is the date for today: ";

    cout << st;
    cout << today.toString("MMM d, yyyy");
    cout << endl;

    int addedDays = 0;
    cin.flush();
    cout << "How many days until homework is due?\n";
    cin >> addedDays;

    cout << "Homework is due " << today.addDays(addedDays).toString("ddd - MM/dd/yyyy") << endl;



    return 0;
}
