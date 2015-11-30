/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTableWidget>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionImportar_archivo;
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QTableWidget *tableWidget;
    QLabel *label_10;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QCustomPlot *widget;
    QGroupBox *groupBox_3;
    QLabel *label_12;
    QLineEdit *lineEdit_8;
    QGroupBox *groupBox_4;
    QLabel *label_14;
    QLineEdit *lineEdit_9;
    QLabel *label_15;
    QLineEdit *lineEdit_10;
    QLabel *label_13;
    QLineEdit *lineEdit_11;
    QGroupBox *groupBox;
    QLabel *label_3;
    QGroupBox *groupBox_2;
    QLabel *label_9;
    QLineEdit *lineEdit_5;
    QLabel *label_11;
    QLineEdit *lineEdit_6;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QGroupBox *groupBox_5;
    QLabel *label_16;
    QLineEdit *lineEdit_12;
    QLabel *label_19;
    QLineEdit *lineEdit_15;
    QPushButton *pushButton_4;
    QMenuBar *menuBar;
    QMenu *menuArchivo;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::WindowModal);
        MainWindow->setEnabled(true);
        MainWindow->resize(769, 502);
        MainWindow->setMaximumSize(QSize(769, 502));
        MainWindow->setCursor(QCursor(Qt::PointingHandCursor));
        actionImportar_archivo = new QAction(MainWindow);
        actionImportar_archivo->setObjectName(QString::fromUtf8("actionImportar_archivo"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(460, 0, 113, 31));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(140, 0, 191, 27));
        tableWidget = new QTableWidget(centralWidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 40, 751, 81));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(110, 0, 41, 27));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        label_10->setFont(font1);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(60, 410, 131, 31));
        pushButton_2->setFont(font);
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(580, 0, 111, 31));
        pushButton_3->setFont(font);
        widget = new QCustomPlot(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(230, 130, 531, 301));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(30, 220, 181, 81));
        groupBox_3->setStyleSheet(QString::fromUtf8("border: 1px solid gray;"));
        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(30, 30, 31, 17));
        label_12->setFont(font1);
        label_12->setStyleSheet(QString::fromUtf8("border: none;"));
        lineEdit_8 = new QLineEdit(groupBox_3);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setEnabled(false);
        lineEdit_8->setGeometry(QRect(60, 26, 111, 20));
        lineEdit_8->setStyleSheet(QString::fromUtf8("border: none;"));
        groupBox_4 = new QGroupBox(groupBox_3);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(70, 80, 241, 81));
        label_14 = new QLabel(groupBox_4);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(50, 20, 31, 17));
        label_14->setFont(font);
        lineEdit_9 = new QLineEdit(groupBox_4);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        lineEdit_9->setEnabled(true);
        lineEdit_9->setGeometry(QRect(110, 40, 41, 21));
        label_15 = new QLabel(groupBox_4);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(70, 40, 16, 17));
        label_15->setFont(font);
        lineEdit_10 = new QLineEdit(groupBox_4);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));
        lineEdit_10->setEnabled(true);
        lineEdit_10->setGeometry(QRect(110, 20, 41, 21));
        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(20, 50, 51, 17));
        label_13->setFont(font1);
        label_13->setStyleSheet(QString::fromUtf8("border: none;"));
        lineEdit_11 = new QLineEdit(groupBox_3);
        lineEdit_11->setObjectName(QString::fromUtf8("lineEdit_11"));
        lineEdit_11->setEnabled(false);
        lineEdit_11->setGeometry(QRect(60, 50, 111, 21));
        lineEdit_11->setStyleSheet(QString::fromUtf8("border: none;"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 130, 181, 81));
        groupBox->setFont(font1);
        groupBox->setStyleSheet(QString::fromUtf8("border: 1px solid gray;"));
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 20, 20, 20));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("border: none;"));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(70, 80, 241, 81));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(50, 20, 31, 17));
        label_9->setFont(font);
        lineEdit_5 = new QLineEdit(groupBox_2);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setEnabled(true);
        lineEdit_5->setGeometry(QRect(110, 40, 41, 21));
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(70, 40, 16, 17));
        label_11->setFont(font);
        lineEdit_6 = new QLineEdit(groupBox_2);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setEnabled(true);
        lineEdit_6->setGeometry(QRect(110, 20, 41, 21));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 50, 31, 17));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("border: none;"));
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setEnabled(false);
        lineEdit_3->setGeometry(QRect(60, 50, 111, 21));
        lineEdit_3->setStyleSheet(QString::fromUtf8("border: none;"));
        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setEnabled(true);
        lineEdit_4->setGeometry(QRect(60, 21, 41, 21));
        lineEdit_4->setStyleSheet(QString::fromUtf8("border: none;"));
        groupBox_2->raise();
        label_4->raise();
        lineEdit_3->raise();
        lineEdit_4->raise();
        label_3->raise();
        groupBox_5 = new QGroupBox(centralWidget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(30, 310, 181, 91));
        groupBox_5->setFont(font1);
        groupBox_5->setStyleSheet(QString::fromUtf8("border: 1px solid gray;"));
        label_16 = new QLabel(groupBox_5);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(30, 30, 31, 17));
        label_16->setFont(font1);
        label_16->setStyleSheet(QString::fromUtf8("border: none;"));
        lineEdit_12 = new QLineEdit(groupBox_5);
        lineEdit_12->setObjectName(QString::fromUtf8("lineEdit_12"));
        lineEdit_12->setEnabled(false);
        lineEdit_12->setGeometry(QRect(60, 30, 111, 21));
        lineEdit_12->setStyleSheet(QString::fromUtf8("border: none;"));
        label_19 = new QLabel(groupBox_5);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(20, 60, 51, 17));
        label_19->setFont(font1);
        label_19->setStyleSheet(QString::fromUtf8("border: none;\n"
""));
        lineEdit_15 = new QLineEdit(groupBox_5);
        lineEdit_15->setObjectName(QString::fromUtf8("lineEdit_15"));
        lineEdit_15->setEnabled(false);
        lineEdit_15->setGeometry(QRect(60, 60, 111, 21));
        lineEdit_15->setStyleSheet(QString::fromUtf8("border: none;"));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(340, 0, 31, 27));
        QIcon icon;
        icon.addFile(QString::fromUtf8("explorador-de-archivos-icono-6698-32.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon);
        MainWindow->setCentralWidget(centralWidget);
        groupBox->raise();
        pushButton->raise();
        lineEdit->raise();
        tableWidget->raise();
        label_10->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        widget->raise();
        groupBox_3->raise();
        groupBox_5->raise();
        pushButton_4->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 769, 25));
        menuArchivo = new QMenu(menuBar);
        menuArchivo->setObjectName(QString::fromUtf8("menuArchivo"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuArchivo->menuAction());
        menuArchivo->addAction(actionImportar_archivo);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Aproximacion Polinomial", 0, QApplication::UnicodeUTF8));
        actionImportar_archivo->setText(QApplication::translate("MainWindow", "Importar archivo", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "Generar Tabla", 0, QApplication::UnicodeUTF8));
        lineEdit->setInputMask(QString());
        label_10->setText(QApplication::translate("MainWindow", "f(x):", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainWindow", "Generar valores", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("MainWindow", "Graficar", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Lagrange", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "f(x):", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Valor real", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "f(x):", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("MainWindow", "x:", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "Error:", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "Valor real", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "x:", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Valor real", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "f(x):", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "x:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "f(x):", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "Diferencias divididas", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("MainWindow", "f(x):", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("MainWindow", "Error:", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QString());
        menuArchivo->setTitle(QApplication::translate("MainWindow", "Archivo", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
