/********************************************************************************
** Form generated from reading UI file 'mainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.16
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qgraphicsscene.h>
#include <qlogging.h>

QT_BEGIN_NAMESPACE

class Ui_MW_MainWindow
{
public:
    QWidget *W_centralwidget;
    QVBoxLayout *verticalLayout;
    QWidget *W_topPanel;
    QWidget *W_mainWidget;
    QHBoxLayout *horizontalLayout;
    QWidget *W_leftPanel;
    QGraphicsView *GV_view;
    QGraphicsScene* GS_scene;

    void setupUi(QMainWindow *MW_MainWindow)
    {
        if (MW_MainWindow->objectName().isEmpty())
            MW_MainWindow->setObjectName(QString::fromUtf8("MW_MainWindow"));
        MW_MainWindow->resize(800, 539);
        W_centralwidget = new QWidget(MW_MainWindow);
        W_centralwidget->setObjectName(QString::fromUtf8("W_centralwidget"));
        verticalLayout = new QVBoxLayout(W_centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        W_topPanel = new QWidget(W_centralwidget);
        W_topPanel->setObjectName(QString::fromUtf8("W_topPanel"));
        W_topPanel->setMinimumSize(QSize(0, 50));
        W_topPanel->setMaximumSize(QSize(16777215, 50));
        W_topPanel->setStyleSheet(QString::fromUtf8("background:white;"));

        verticalLayout->addWidget(W_topPanel);

        W_mainWidget = new QWidget(W_centralwidget);
        W_mainWidget->setObjectName(QString::fromUtf8("W_mainWidget"));
        horizontalLayout = new QHBoxLayout(W_mainWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        W_leftPanel = new QWidget(W_mainWidget);
        W_leftPanel->setObjectName(QString::fromUtf8("W_leftPanel"));
        W_leftPanel->setMinimumSize(QSize(100, 0));
        W_leftPanel->setStyleSheet(QString::fromUtf8("background:gray;"));

        horizontalLayout->addWidget(W_leftPanel);

        GS_scene = new QGraphicsScene;
        GV_view = new QGraphicsView(GS_scene);
        GV_view->setObjectName(QString::fromUtf8("GV_view"));

        horizontalLayout->addWidget(GV_view);


        verticalLayout->addWidget(W_mainWidget);

        MW_MainWindow->setCentralWidget(W_centralwidget);

        retranslateUi(MW_MainWindow);

        QMetaObject::connectSlotsByName(MW_MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MW_MainWindow)
    {
        MW_MainWindow->setWindowTitle(QCoreApplication::translate("MW_MainWindow", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MW_MainWindow: public Ui_MW_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MAINWINDOW_H
