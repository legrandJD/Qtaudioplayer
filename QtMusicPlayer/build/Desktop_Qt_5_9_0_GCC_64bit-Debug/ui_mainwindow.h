/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *play;
    QPushButton *forward;
    QPushButton *repeat;
    QPushButton *save;
    QPushButton *remove;
    QPushButton *add;
    QPushButton *back;
    QPushButton *shuffle;
    QPushButton *mute;
    QSlider *volumeBar;
    QSlider *seekBar;
    QLineEdit *searchBar;
    QListWidget *listWidget;
    QLabel *currentSong;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1305, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        play = new QPushButton(centralwidget);
        play->setObjectName(QStringLiteral("play"));
        play->setGeometry(QRect(430, 420, 41, 25));
        forward = new QPushButton(centralwidget);
        forward->setObjectName(QStringLiteral("forward"));
        forward->setGeometry(QRect(490, 420, 41, 25));
        repeat = new QPushButton(centralwidget);
        repeat->setObjectName(QStringLiteral("repeat"));
        repeat->setGeometry(QRect(620, 420, 41, 25));
        save = new QPushButton(centralwidget);
        save->setObjectName(QStringLiteral("save"));
        save->setGeometry(QRect(720, 420, 41, 25));
        remove = new QPushButton(centralwidget);
        remove->setObjectName(QStringLiteral("remove"));
        remove->setGeometry(QRect(860, 420, 41, 25));
        add = new QPushButton(centralwidget);
        add->setObjectName(QStringLiteral("add"));
        add->setGeometry(QRect(940, 420, 41, 25));
        back = new QPushButton(centralwidget);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(370, 420, 41, 25));
        shuffle = new QPushButton(centralwidget);
        shuffle->setObjectName(QStringLiteral("shuffle"));
        shuffle->setGeometry(QRect(220, 420, 41, 25));
        mute = new QPushButton(centralwidget);
        mute->setObjectName(QStringLiteral("mute"));
        mute->setGeometry(QRect(0, 420, 41, 25));
        volumeBar = new QSlider(centralwidget);
        volumeBar->setObjectName(QStringLiteral("volumeBar"));
        volumeBar->setGeometry(QRect(40, 430, 160, 16));
        volumeBar->setOrientation(Qt::Horizontal);
        seekBar = new QSlider(centralwidget);
        seekBar->setObjectName(QStringLiteral("seekBar"));
        seekBar->setGeometry(QRect(0, 370, 1031, 20));
        seekBar->setOrientation(Qt::Horizontal);
        searchBar = new QLineEdit(centralwidget);
        searchBar->setObjectName(QStringLiteral("searchBar"));
        searchBar->setGeometry(QRect(0, 0, 1021, 25));
        listWidget = new QListWidget(centralwidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(1050, 0, 256, 441));
        currentSong = new QLabel(centralwidget);
        currentSong->setObjectName(QStringLiteral("currentSong"));
        currentSong->setGeometry(QRect(1060, 10, 241, 17));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1305, 22));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName(QStringLiteral("menuMenu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuMenu->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        play->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        forward->setText(QApplication::translate("MainWindow", ">", Q_NULLPTR));
        repeat->setText(QApplication::translate("MainWindow", "r", Q_NULLPTR));
        save->setText(QApplication::translate("MainWindow", "save", Q_NULLPTR));
        remove->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        add->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        back->setText(QApplication::translate("MainWindow", "<", Q_NULLPTR));
        shuffle->setText(QApplication::translate("MainWindow", "s", Q_NULLPTR));
        mute->setText(QApplication::translate("MainWindow", "m", Q_NULLPTR));
        searchBar->setText(QApplication::translate("MainWindow", "search", Q_NULLPTR));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        listWidget->setSortingEnabled(__sortingEnabled);

        currentSong->setText(QString());
        menuMenu->setTitle(QApplication::translate("MainWindow", "Menu", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
