/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon Apr 3 21:38:34 2017
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *statusLabel;
    QLabel *PartConL;
    QLabel *FlowRateL;
    QLabel *PressL;
    QLabel *TempCL;
    QLabel *PartCon;
    QLabel *FlowRate;
    QLabel *Press;
    QLabel *TempC;
    QComboBox *SkipSet;
    QComboBox *BinsSet;
    QLabel *Skip;
    QLabel *Bins;
    QPushButton *newFileButton;
    QCustomPlot *hPlot;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(425, 250);
        MainWindow->setStyleSheet(QString::fromUtf8("#MainWindow{\n"
"	background-color: rgb(0, 0, 127);\n"
"}\n"
"\n"
"#centralWidget{\n"
"background: QLinearGradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #eef, stop: 1 #ccf);\n"
"}\n"
"\n"
"QPushButton{\n"
"color: white;\n"
"background-color: QLinearGradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #88d, stop: 0.1 #99e, stop: 0.49 #77c, stop:0.5 #66b, stop: 1 #77c);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"}\n"
"\n"
"QComboBox{\n"
"color: white;\n"
"background-color: QLinearGradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #88d, stop: 0.1 #99e, stop: 0.49 #77c, stop:0.5 #66b, stop: 1 #77c);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"}\n"
"\n"
""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        statusLabel = new QLabel(centralWidget);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        statusLabel->setGeometry(QRect(10, 225, 406, 20));
        PartConL = new QLabel(centralWidget);
        PartConL->setObjectName(QString::fromUtf8("PartConL"));
        PartConL->setGeometry(QRect(0, 0, 61, 31));
        PartConL->setWordWrap(true);
        FlowRateL = new QLabel(centralWidget);
        FlowRateL->setObjectName(QString::fromUtf8("FlowRateL"));
        FlowRateL->setGeometry(QRect(0, 35, 66, 31));
        FlowRateL->setWordWrap(true);
        PressL = new QLabel(centralWidget);
        PressL->setObjectName(QString::fromUtf8("PressL"));
        PressL->setGeometry(QRect(0, 70, 61, 31));
        PressL->setWordWrap(true);
        TempCL = new QLabel(centralWidget);
        TempCL->setObjectName(QString::fromUtf8("TempCL"));
        TempCL->setGeometry(QRect(0, 105, 61, 16));
        TempCL->setWordWrap(true);
        PartCon = new QLabel(centralWidget);
        PartCon->setObjectName(QString::fromUtf8("PartCon"));
        PartCon->setGeometry(QRect(70, 0, 51, 16));
        FlowRate = new QLabel(centralWidget);
        FlowRate->setObjectName(QString::fromUtf8("FlowRate"));
        FlowRate->setGeometry(QRect(70, 35, 51, 16));
        Press = new QLabel(centralWidget);
        Press->setObjectName(QString::fromUtf8("Press"));
        Press->setGeometry(QRect(70, 70, 51, 16));
        TempC = new QLabel(centralWidget);
        TempC->setObjectName(QString::fromUtf8("TempC"));
        TempC->setGeometry(QRect(70, 105, 51, 16));
        SkipSet = new QComboBox(centralWidget);
        SkipSet->setObjectName(QString::fromUtf8("SkipSet"));
        SkipSet->setGeometry(QRect(0, 130, 81, 22));
        BinsSet = new QComboBox(centralWidget);
        BinsSet->setObjectName(QString::fromUtf8("BinsSet"));
        BinsSet->setGeometry(QRect(0, 160, 81, 22));
        BinsSet->setStyleSheet(QString::fromUtf8(""));
        Skip = new QLabel(centralWidget);
        Skip->setObjectName(QString::fromUtf8("Skip"));
        Skip->setGeometry(QRect(85, 130, 31, 16));
        Bins = new QLabel(centralWidget);
        Bins->setObjectName(QString::fromUtf8("Bins"));
        Bins->setGeometry(QRect(85, 160, 31, 16));
        newFileButton = new QPushButton(centralWidget);
        newFileButton->setObjectName(QString::fromUtf8("newFileButton"));
        newFileButton->setGeometry(QRect(20, 190, 81, 28));
        newFileButton->setStyleSheet(QString::fromUtf8(""));
        hPlot = new QCustomPlot(centralWidget);
        hPlot->setObjectName(QString::fromUtf8("hPlot"));
        hPlot->setGeometry(QRect(120, 0, 301, 221));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "POPS Data", 0, QApplication::UnicodeUTF8));
        statusLabel->setText(QApplication::translate("MainWindow", "-", 0, QApplication::UnicodeUTF8));
        PartConL->setText(QApplication::translate("MainWindow", "Part Con #/cc", 0, QApplication::UnicodeUTF8));
        FlowRateL->setText(QApplication::translate("MainWindow", "Flow Rate cc/s", 0, QApplication::UnicodeUTF8));
        PressL->setText(QApplication::translate("MainWindow", "Pressure mbar", 0, QApplication::UnicodeUTF8));
        TempCL->setText(QApplication::translate("MainWindow", "Temp C", 0, QApplication::UnicodeUTF8));
        PartCon->setText(QApplication::translate("MainWindow", "NaN", 0, QApplication::UnicodeUTF8));
        FlowRate->setText(QApplication::translate("MainWindow", "NaN", 0, QApplication::UnicodeUTF8));
        Press->setText(QApplication::translate("MainWindow", "NaN", 0, QApplication::UnicodeUTF8));
        TempC->setText(QApplication::translate("MainWindow", "NaN", 0, QApplication::UnicodeUTF8));
        SkipSet->clear();
        SkipSet->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Skip 0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Skip 9", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Skip 99", 0, QApplication::UnicodeUTF8)
        );
        BinsSet->clear();
        BinsSet->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "16 Bins", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "25 Bins", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "100 Bins", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "200 Bins", 0, QApplication::UnicodeUTF8)
        );
        Skip->setText(QApplication::translate("MainWindow", "-", 0, QApplication::UnicodeUTF8));
        Bins->setText(QApplication::translate("MainWindow", "-", 0, QApplication::UnicodeUTF8));
        newFileButton->setText(QApplication::translate("MainWindow", "New File", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
