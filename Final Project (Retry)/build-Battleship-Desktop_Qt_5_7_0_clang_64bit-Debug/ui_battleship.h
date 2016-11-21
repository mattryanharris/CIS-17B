/********************************************************************************
** Form generated from reading UI file 'battleship.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BATTLESHIP_H
#define UI_BATTLESHIP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_battleship
{
public:
    QTableWidget *playerGrid;
    QLabel *yourGrid;
<<<<<<< HEAD
=======
    QPushButton *horizontalSwitch;
    QPushButton *verticalSwitch;
    QLabel *placeTitle;
    QFrame *lineSection;
    QLabel *placeDescription;
    QPushButton *setPosition;
    QFrame *frame;
    QLabel *carrier;
    QLabel *battle;
    QLabel *cruiser;
    QLabel *sub;
    QLabel *destroyer;
    QFrame *line;
    QLabel *carrier_1;
    QLabel *carrier_2;
    QLabel *carrier_3;
    QLabel *carrier_4;
    QLabel *carrier_5;
    QLabel *bs_4;
    QLabel *bs_3;
    QLabel *bs_1;
    QLabel *bs_2;
    QLabel *cruiser_3;
    QLabel *cruiser_1;
    QLabel *cruiser_2;
    QLabel *sub_1;
    QLabel *sub_2;
    QLabel *destroyer_1;
>>>>>>> origin/master

    void setupUi(QWidget *battleship)
    {
        if (battleship->objectName().isEmpty())
            battleship->setObjectName(QStringLiteral("battleship"));
<<<<<<< HEAD
        battleship->resize(1162, 538);
=======
        battleship->setWindowModality(Qt::ApplicationModal);
        battleship->resize(1162, 607);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(2);
        sizePolicy.setHeightForWidth(battleship->sizePolicy().hasHeightForWidth());
        battleship->setSizePolicy(sizePolicy);
>>>>>>> origin/master
        battleship->setMaximumSize(QSize(16777215, 16777215));
        battleship->setLayoutDirection(Qt::LeftToRight);
        playerGrid = new QTableWidget(battleship);
        if (playerGrid->columnCount() < 10)
            playerGrid->setColumnCount(10);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        playerGrid->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        playerGrid->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        playerGrid->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        playerGrid->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        playerGrid->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        playerGrid->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        playerGrid->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        playerGrid->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        playerGrid->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        playerGrid->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        if (playerGrid->rowCount() < 10)
            playerGrid->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        playerGrid->setVerticalHeaderItem(0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        playerGrid->setVerticalHeaderItem(1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        playerGrid->setVerticalHeaderItem(2, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        playerGrid->setVerticalHeaderItem(3, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        playerGrid->setVerticalHeaderItem(4, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        playerGrid->setVerticalHeaderItem(5, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        playerGrid->setVerticalHeaderItem(6, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        playerGrid->setVerticalHeaderItem(7, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        playerGrid->setVerticalHeaderItem(8, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        playerGrid->setVerticalHeaderItem(9, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        playerGrid->setItem(2, 9, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        playerGrid->setItem(6, 9, __qtablewidgetitem21);
        playerGrid->setObjectName(QStringLiteral("playerGrid"));
        playerGrid->setEnabled(true);
        playerGrid->setGeometry(QRect(30, 60, 504, 343));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(playerGrid->sizePolicy().hasHeightForWidth());
        playerGrid->setSizePolicy(sizePolicy1);
        playerGrid->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette;
        QBrush brush(QColor(178, 215, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush);
        QBrush brush1(QColor(212, 212, 212, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush1);
        QBrush brush2(QColor(210, 39, 56, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush2);
        playerGrid->setPalette(palette);
        playerGrid->setMouseTracking(false);
        playerGrid->setAutoFillBackground(false);
        playerGrid->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        playerGrid->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        playerGrid->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        playerGrid->setAutoScroll(false);
        playerGrid->setEditTriggers(QAbstractItemView::NoEditTriggers);
        playerGrid->setDragEnabled(false);
        playerGrid->setDragDropOverwriteMode(false);
        playerGrid->setDragDropMode(QAbstractItemView::NoDragDrop);
        playerGrid->setAlternatingRowColors(false);
        playerGrid->setSelectionMode(QAbstractItemView::SingleSelection);
        playerGrid->setIconSize(QSize(12, 6));
        playerGrid->setTextElideMode(Qt::ElideMiddle);
        playerGrid->setShowGrid(true);
        playerGrid->setGridStyle(Qt::SolidLine);
        playerGrid->setSortingEnabled(false);
        playerGrid->setWordWrap(false);
        playerGrid->setCornerButtonEnabled(false);
        playerGrid->horizontalHeader()->setDefaultSectionSize(48);
        playerGrid->verticalHeader()->setDefaultSectionSize(32);
        yourGrid = new QLabel(battleship);
        yourGrid->setObjectName(QStringLiteral("yourGrid"));
        yourGrid->setGeometry(QRect(30, 15, 151, 31));
        QFont font;
        font.setPointSize(21);
        yourGrid->setFont(font);
<<<<<<< HEAD
=======
        horizontalSwitch = new QPushButton(battleship);
        horizontalSwitch->setObjectName(QStringLiteral("horizontalSwitch"));
        horizontalSwitch->setGeometry(QRect(24, 410, 113, 32));
        horizontalSwitch->setStyleSheet(QLatin1String("color:white;\n"
""));
        horizontalSwitch->setCheckable(true);
        horizontalSwitch->setChecked(true);
        horizontalSwitch->setAutoDefault(false);
        horizontalSwitch->setFlat(false);
        verticalSwitch = new QPushButton(battleship);
        verticalSwitch->setObjectName(QStringLiteral("verticalSwitch"));
        verticalSwitch->setGeometry(QRect(133, 410, 109, 32));
        verticalSwitch->setCheckable(true);
        placeTitle = new QLabel(battleship);
        placeTitle->setObjectName(QStringLiteral("placeTitle"));
        placeTitle->setGeometry(QRect(30, 470, 171, 31));
        QFont font1;
        font1.setPointSize(21);
        font1.setBold(false);
        font1.setWeight(50);
        placeTitle->setFont(font1);
        lineSection = new QFrame(battleship);
        lineSection->setObjectName(QStringLiteral("lineSection"));
        lineSection->setGeometry(QRect(0, 450, 1191, 16));
        lineSection->setFrameShape(QFrame::HLine);
        lineSection->setFrameShadow(QFrame::Sunken);
        placeDescription = new QLabel(battleship);
        placeDescription->setObjectName(QStringLiteral("placeDescription"));
        placeDescription->setGeometry(QRect(30, 497, 281, 21));
        setPosition = new QPushButton(battleship);
        setPosition->setObjectName(QStringLiteral("setPosition"));
        setPosition->setGeometry(QRect(430, 410, 110, 32));
        frame = new QFrame(battleship);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(-30, 530, 1281, 80));
        frame->setAutoFillBackground(false);
        frame->setStyleSheet(QLatin1String("background-color:white;\n"
"border:none;\n"
"border-top:1px solid #C9CBCB;\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        carrier = new QLabel(frame);
        carrier->setObjectName(QStringLiteral("carrier"));
        carrier->setGeometry(QRect(60, 6, 81, 51));
        QFont font2;
        font2.setPointSize(19);
        carrier->setFont(font2);
        carrier->setStyleSheet(QLatin1String("border: none;\n"
""));
        carrier->setFrameShape(QFrame::NoFrame);
        carrier->setFrameShadow(QFrame::Sunken);
        carrier->setLineWidth(0);
        battle = new QLabel(frame);
        battle->setObjectName(QStringLiteral("battle"));
        battle->setEnabled(false);
        battle->setGeometry(QRect(150, 6, 88, 51));
        battle->setFont(font2);
        battle->setStyleSheet(QLatin1String("border: none;\n"
""));
        battle->setFrameShape(QFrame::NoFrame);
        battle->setFrameShadow(QFrame::Sunken);
        battle->setLineWidth(0);
        cruiser = new QLabel(frame);
        cruiser->setObjectName(QStringLiteral("cruiser"));
        cruiser->setEnabled(false);
        cruiser->setGeometry(QRect(260, 6, 88, 51));
        cruiser->setFont(font2);
        cruiser->setStyleSheet(QLatin1String("border: none;\n"
""));
        cruiser->setFrameShape(QFrame::NoFrame);
        cruiser->setFrameShadow(QFrame::Sunken);
        cruiser->setLineWidth(0);
        sub = new QLabel(frame);
        sub->setObjectName(QStringLiteral("sub"));
        sub->setEnabled(false);
        sub->setGeometry(QRect(349, 6, 96, 51));
        sub->setFont(font2);
        sub->setStyleSheet(QLatin1String("border: none;\n"
""));
        sub->setFrameShape(QFrame::NoFrame);
        sub->setFrameShadow(QFrame::Sunken);
        sub->setLineWidth(0);
        destroyer = new QLabel(frame);
        destroyer->setObjectName(QStringLiteral("destroyer"));
        destroyer->setEnabled(false);
        destroyer->setGeometry(QRect(469, 6, 90, 51));
        destroyer->setFont(font2);
        destroyer->setStyleSheet(QLatin1String("border: none;\n"
""));
        destroyer->setFrameShape(QFrame::NoFrame);
        destroyer->setFrameShadow(QFrame::Sunken);
        destroyer->setLineWidth(0);
        line = new QFrame(frame);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(640, 0, 20, 81));
        line->setStyleSheet(QStringLiteral("border-left:1px solid rgb(224, 226, 226);"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        carrier_1 = new QLabel(frame);
        carrier_1->setObjectName(QStringLiteral("carrier_1"));
        carrier_1->setGeometry(QRect(62, 47, 12, 12));
        carrier_1->setPixmap(QPixmap(QString::fromUtf8(":/images/yes")));
        carrier_1->setScaledContents(true);
        carrier_2 = new QLabel(frame);
        carrier_2->setObjectName(QStringLiteral("carrier_2"));
        carrier_2->setGeometry(QRect(76, 47, 12, 12));
        carrier_2->setPixmap(QPixmap(QString::fromUtf8(":/images/yes")));
        carrier_2->setScaledContents(true);
        carrier_3 = new QLabel(frame);
        carrier_3->setObjectName(QStringLiteral("carrier_3"));
        carrier_3->setGeometry(QRect(90, 47, 12, 12));
        carrier_3->setPixmap(QPixmap(QString::fromUtf8(":/images/yes")));
        carrier_3->setScaledContents(true);
        carrier_4 = new QLabel(frame);
        carrier_4->setObjectName(QStringLiteral("carrier_4"));
        carrier_4->setGeometry(QRect(104, 47, 12, 12));
        carrier_4->setPixmap(QPixmap(QString::fromUtf8(":/images/yes")));
        carrier_4->setScaledContents(true);
        carrier_5 = new QLabel(frame);
        carrier_5->setObjectName(QStringLiteral("carrier_5"));
        carrier_5->setGeometry(QRect(118, 47, 12, 12));
        carrier_5->setPixmap(QPixmap(QString::fromUtf8(":/images/yes")));
        carrier_5->setScaledContents(true);
        bs_4 = new QLabel(frame);
        bs_4->setObjectName(QStringLiteral("bs_4"));
        bs_4->setEnabled(false);
        bs_4->setGeometry(QRect(193, 47, 12, 12));
        bs_4->setPixmap(QPixmap(QString::fromUtf8(":/images/yes")));
        bs_4->setScaledContents(true);
        bs_3 = new QLabel(frame);
        bs_3->setObjectName(QStringLiteral("bs_3"));
        bs_3->setEnabled(false);
        bs_3->setGeometry(QRect(179, 47, 12, 12));
        bs_3->setPixmap(QPixmap(QString::fromUtf8(":/images/yes")));
        bs_3->setScaledContents(true);
        bs_1 = new QLabel(frame);
        bs_1->setObjectName(QStringLiteral("bs_1"));
        bs_1->setEnabled(false);
        bs_1->setGeometry(QRect(151, 47, 12, 12));
        bs_1->setPixmap(QPixmap(QString::fromUtf8(":/images/yes")));
        bs_1->setScaledContents(true);
        bs_2 = new QLabel(frame);
        bs_2->setObjectName(QStringLiteral("bs_2"));
        bs_2->setEnabled(false);
        bs_2->setGeometry(QRect(165, 47, 12, 12));
        bs_2->setPixmap(QPixmap(QString::fromUtf8(":/images/yes")));
        bs_2->setScaledContents(true);
        cruiser_3 = new QLabel(frame);
        cruiser_3->setObjectName(QStringLiteral("cruiser_3"));
        cruiser_3->setEnabled(false);
        cruiser_3->setGeometry(QRect(290, 47, 12, 12));
        cruiser_3->setPixmap(QPixmap(QString::fromUtf8(":/images/yes")));
        cruiser_3->setScaledContents(true);
        cruiser_1 = new QLabel(frame);
        cruiser_1->setObjectName(QStringLiteral("cruiser_1"));
        cruiser_1->setEnabled(false);
        cruiser_1->setGeometry(QRect(262, 47, 12, 12));
        cruiser_1->setPixmap(QPixmap(QString::fromUtf8(":/images/yes")));
        cruiser_1->setScaledContents(true);
        cruiser_2 = new QLabel(frame);
        cruiser_2->setObjectName(QStringLiteral("cruiser_2"));
        cruiser_2->setEnabled(false);
        cruiser_2->setGeometry(QRect(276, 47, 12, 12));
        cruiser_2->setPixmap(QPixmap(QString::fromUtf8(":/images/yes")));
        cruiser_2->setScaledContents(true);
        sub_1 = new QLabel(frame);
        sub_1->setObjectName(QStringLiteral("sub_1"));
        sub_1->setEnabled(false);
        sub_1->setGeometry(QRect(350, 47, 12, 12));
        sub_1->setPixmap(QPixmap(QString::fromUtf8(":/images/yes")));
        sub_1->setScaledContents(true);
        sub_2 = new QLabel(frame);
        sub_2->setObjectName(QStringLiteral("sub_2"));
        sub_2->setEnabled(false);
        sub_2->setGeometry(QRect(365, 47, 12, 12));
        sub_2->setPixmap(QPixmap(QString::fromUtf8(":/images/yes")));
        sub_2->setScaledContents(true);
        destroyer_1 = new QLabel(frame);
        destroyer_1->setObjectName(QStringLiteral("destroyer_1"));
        destroyer_1->setEnabled(false);
        destroyer_1->setGeometry(QRect(470, 47, 12, 12));
        destroyer_1->setPixmap(QPixmap(QString::fromUtf8(":/images/yes")));
        destroyer_1->setScaledContents(true);
>>>>>>> origin/master

        retranslateUi(battleship);

        horizontalSwitch->setDefault(false);


        QMetaObject::connectSlotsByName(battleship);
    } // setupUi

    void retranslateUi(QWidget *battleship)
    {
        battleship->setWindowTitle(QApplication::translate("battleship", "Battleship", 0));
        QTableWidgetItem *___qtablewidgetitem = playerGrid->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("battleship", "A", 0));
        QTableWidgetItem *___qtablewidgetitem1 = playerGrid->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("battleship", "B", 0));
        QTableWidgetItem *___qtablewidgetitem2 = playerGrid->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("battleship", "C", 0));
        QTableWidgetItem *___qtablewidgetitem3 = playerGrid->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("battleship", "D", 0));
        QTableWidgetItem *___qtablewidgetitem4 = playerGrid->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("battleship", "E", 0));
        QTableWidgetItem *___qtablewidgetitem5 = playerGrid->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("battleship", "F", 0));
        QTableWidgetItem *___qtablewidgetitem6 = playerGrid->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("battleship", "G", 0));
        QTableWidgetItem *___qtablewidgetitem7 = playerGrid->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("battleship", "H", 0));
        QTableWidgetItem *___qtablewidgetitem8 = playerGrid->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("battleship", "I", 0));
        QTableWidgetItem *___qtablewidgetitem9 = playerGrid->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("battleship", "J", 0));
        QTableWidgetItem *___qtablewidgetitem10 = playerGrid->verticalHeaderItem(0);
        ___qtablewidgetitem10->setText(QApplication::translate("battleship", "1", 0));
        QTableWidgetItem *___qtablewidgetitem11 = playerGrid->verticalHeaderItem(1);
        ___qtablewidgetitem11->setText(QApplication::translate("battleship", "2", 0));
        QTableWidgetItem *___qtablewidgetitem12 = playerGrid->verticalHeaderItem(2);
        ___qtablewidgetitem12->setText(QApplication::translate("battleship", "3", 0));
        QTableWidgetItem *___qtablewidgetitem13 = playerGrid->verticalHeaderItem(3);
        ___qtablewidgetitem13->setText(QApplication::translate("battleship", "4", 0));
        QTableWidgetItem *___qtablewidgetitem14 = playerGrid->verticalHeaderItem(4);
        ___qtablewidgetitem14->setText(QApplication::translate("battleship", "5", 0));
        QTableWidgetItem *___qtablewidgetitem15 = playerGrid->verticalHeaderItem(5);
        ___qtablewidgetitem15->setText(QApplication::translate("battleship", "6", 0));
        QTableWidgetItem *___qtablewidgetitem16 = playerGrid->verticalHeaderItem(6);
        ___qtablewidgetitem16->setText(QApplication::translate("battleship", "7", 0));
        QTableWidgetItem *___qtablewidgetitem17 = playerGrid->verticalHeaderItem(7);
        ___qtablewidgetitem17->setText(QApplication::translate("battleship", "8", 0));
        QTableWidgetItem *___qtablewidgetitem18 = playerGrid->verticalHeaderItem(8);
        ___qtablewidgetitem18->setText(QApplication::translate("battleship", "9", 0));
        QTableWidgetItem *___qtablewidgetitem19 = playerGrid->verticalHeaderItem(9);
        ___qtablewidgetitem19->setText(QApplication::translate("battleship", "10", 0));
<<<<<<< HEAD
        yourGrid->setText(QApplication::translate("battleship", "Your Grid", 0));
=======

        const bool __sortingEnabled = playerGrid->isSortingEnabled();
        playerGrid->setSortingEnabled(false);
        playerGrid->setSortingEnabled(__sortingEnabled);

        yourGrid->setText(QApplication::translate("battleship", "Your Grid", 0));
        horizontalSwitch->setText(QApplication::translate("battleship", "Horizontal", 0));
        verticalSwitch->setText(QApplication::translate("battleship", "Vertical", 0));
        placeTitle->setText(QApplication::translate("battleship", "Place Your Ships", 0));
        placeDescription->setText(QApplication::translate("battleship", "Set your ships using the grid system", 0));
        setPosition->setText(QApplication::translate("battleship", "Set Position", 0));
        carrier->setText(QApplication::translate("battleship", "Carrier", 0));
        battle->setText(QApplication::translate("battleship", "Battleship", 0));
        cruiser->setText(QApplication::translate("battleship", "Cruiser", 0));
        sub->setText(QApplication::translate("battleship", "Submarine", 0));
        destroyer->setText(QApplication::translate("battleship", "Destroyer", 0));
        carrier_1->setText(QString());
        carrier_2->setText(QString());
        carrier_3->setText(QString());
        carrier_4->setText(QString());
        carrier_5->setText(QString());
        bs_4->setText(QString());
        bs_3->setText(QString());
        bs_1->setText(QString());
        bs_2->setText(QString());
        cruiser_3->setText(QString());
        cruiser_1->setText(QString());
        cruiser_2->setText(QString());
        sub_1->setText(QString());
        sub_2->setText(QString());
        destroyer_1->setText(QString());
>>>>>>> origin/master
    } // retranslateUi

};

namespace Ui {
    class battleship: public Ui_battleship {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATTLESHIP_H
