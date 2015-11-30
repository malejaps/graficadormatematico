#ifndef CONTROL_H
#define CONTROL_H
#include <stdlib.h>
#include <iostream>
#include "exprtk.hpp"
#include <qcustomplot.h>
#include <string>
#include <QString>
#include <QImage>
#include <QFile>
#include <QMainWindow>
#include <QMessageBox>
#include <QFileDialog>
#include <QTextStream>
#include <QVector>
#include <fstream>
#include <sstream>
#include <vector>
#include <math.h>




using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_lineEdit_textChanged(const QString &arg1);

    void on_pushButton_4_clicked();

    void on_lineEdit_4_textChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;


    //Cargar archivo
    QString value;
    QStringList cabecerafilas;
    QStringList cabeceracolumnas;
    QString titulo;
    int valorx;
    int indice;
    QVector<double> valoresx;
    QVector<double> valoresy;
    ifstream archivo;
    ostringstream convertir;
    QString convertido;


    //Funciones

    double compilarfuncion(double x);
    void importararchivo();
    void graficar();
    void llenarvaloresx();
    double generarLagrange(double x);
    double generarDiferenciasDivididas(double x);
    double generarError(double x, double y);

    //lagrange
    double valx;
    QVector<double> lagrangey;
    //double datos[][];

    //diferencias divididas
    QVector<double> divididasy;


};

#endif // MAINWINDOW_H
