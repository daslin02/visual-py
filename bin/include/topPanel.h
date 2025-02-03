/********************************************************************************
** Form generated from reading UI file 'topPanel.ui'
**
** Created by: Qt User Interface Compiler version 5.15.16
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef TOPPANEL_H
#define TOPPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_topPanel
{
public:
    QHBoxLayout *horizontalLayout;
    QPushButton *PB_convert;
    QPushButton *PB_run;

    void setupUi(QWidget *topPanel)
    {
        if (topPanel->objectName().isEmpty())
            topPanel->setObjectName(QString::fromUtf8("topPanel"));
        topPanel->resize(787, 300);
        horizontalLayout = new QHBoxLayout(topPanel);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        PB_convert = new QPushButton(topPanel);
        PB_convert->setObjectName(QString::fromUtf8("PB_convert"));
        PB_convert->setStyleSheet(QString::fromUtf8("background:green;\n"
"font-size:25px;\n"
"font-weight:bold;"));

        horizontalLayout->addWidget(PB_convert);

        PB_run = new QPushButton(topPanel);
        PB_run->setObjectName(QString::fromUtf8("PB_run"));
        PB_run->setStyleSheet(QString::fromUtf8("background:green;\n"
"font-size:25px;\n"
"font-weight:bold;"));

        horizontalLayout->addWidget(PB_run);


        retranslateUi(topPanel);

        QMetaObject::connectSlotsByName(topPanel);
    } // setupUi

    void retranslateUi(QWidget *topPanel)
    {
        topPanel->setWindowTitle(QCoreApplication::translate("topPanel", "Form", nullptr));
        PB_convert->setText(QCoreApplication::translate("topPanel", "Convert", nullptr));
        PB_run->setText(QCoreApplication::translate("topPanel", "Run", nullptr));
    } // retranslateUi

};

namespace Ui {
    class topPanel: public Ui_topPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // TOPPANEL_H
