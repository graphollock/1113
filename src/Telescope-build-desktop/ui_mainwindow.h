/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed Feb 16 23:16:50 2011
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGraphicsView>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSobre;
    QWidget *centralWidget;
    QGraphicsView *gpvImage;
    QGroupBox *groupBox;
    QLabel *label;
    QLineEdit *leAr;
    QLabel *label_2;
    QLineEdit *leDec;
    QMenuBar *menuBar;
    QMenu *menu_Configura_es;
    QMenu *menu_Ajuda;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1024, 600);
        MainWindow->setMinimumSize(QSize(1024, 600));
        MainWindow->setMaximumSize(QSize(1024, 600));
        actionSobre = new QAction(MainWindow);
        actionSobre->setObjectName(QString::fromUtf8("actionSobre"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gpvImage = new QGraphicsView(centralWidget);
        gpvImage->setObjectName(QString::fromUtf8("gpvImage"));
        gpvImage->setGeometry(QRect(190, 50, 821, 481));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 42, 181, 151));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 40, 57, 15));
        leAr = new QLineEdit(groupBox);
        leAr->setObjectName(QString::fromUtf8("leAr"));
        leAr->setGeometry(QRect(10, 60, 151, 21));
        leAr->setReadOnly(true);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 90, 57, 15));
        leDec = new QLineEdit(groupBox);
        leDec->setObjectName(QString::fromUtf8("leDec"));
        leDec->setGeometry(QRect(10, 110, 151, 21));
        leDec->setReadOnly(true);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1024, 25));
        menu_Configura_es = new QMenu(menuBar);
        menu_Configura_es->setObjectName(QString::fromUtf8("menu_Configura_es"));
        menu_Ajuda = new QMenu(menuBar);
        menu_Ajuda->setObjectName(QString::fromUtf8("menu_Ajuda"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_Configura_es->menuAction());
        menuBar->addAction(menu_Ajuda->menuAction());
        menu_Ajuda->addSeparator();
        menu_Ajuda->addAction(actionSobre);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Telescope - Viewer Module", 0, QApplication::UnicodeUTF8));
        actionSobre->setText(QApplication::translate("MainWindow", "Sobre", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "Coordenadas atuais", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "A.R:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Dec:", 0, QApplication::UnicodeUTF8));
        menu_Configura_es->setTitle(QApplication::translate("MainWindow", "&Configura\303\247\303\265es", 0, QApplication::UnicodeUTF8));
        menu_Ajuda->setTitle(QApplication::translate("MainWindow", "&Ajuda", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
