#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qcustomplot.h"
#include "exprtk.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <math.h>
#include <string>
#include <stdlib.h>
#include <math.h>
using namespace std;



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
}

/*Constructor*/
MainWindow::~MainWindow()
{
    delete ui;
}


/*******Importar archivo con valores de x **********/
void MainWindow::on_pushButton_4_clicked()
{    
    valoresx.clear();
    valoresy.clear();
    importararchivo();


}

/*******Importar archivo con valores de x*********/
void MainWindow::importararchivo(){

    //importar archivo con los valores de x despues de haberlos editado en el archivo de texto
    titulo = QFileDialog::getOpenFileName(this, tr("Open File"),"",tr("Files (*.*)"));//examinar archivo
    ifstream archivo (titulo.toStdString().c_str());//Convertir string a char
    //ifstream archivo ("archivo.txt");
    //indice=0;
    if(archivo.fail())
    {
      QMessageBox::information(this,"info","Error al leer el archivo");

    }else{
    while (!archivo.eof()){
       archivo>>valorx;//>>interpreta espacios y tabulados como separadores
       valoresx.push_back(valorx);
       indice++;
    }}


}


void MainWindow::on_pushButton_clicked()
{
   /*******llenar tabla con valores de x **********/
        llenarvaloresx();

    /********* Compilar funcion matematica y llenar el vector valores y********/
        double x;
        //llenar el vector valores y, despues de calcularlos segun la funcion compilada
        for(int j=0;j<valoresx.size()-1;j++){
          x=valoresx[j];
          valoresy.push_back(compilarfuncion(x));
          ui->tableWidget->item(1 , j)->setText(QString::number(valoresy[j]));
        }


}




/********* Compilar funcion matematica  y llenar tabla con valores de y********/
double MainWindow::compilarfuncion(double x){

    double y;
    QString f;
    string funcion;
    typedef exprtk::symbol_table<double> symbol_table_t;
    typedef exprtk::expression<double>     expression_t;
    typedef exprtk::parser<double>             parser_t;

    symbol_table_t symbol_table;
    expression_t   expression;
    parser_t       parser;

      f= ui->lineEdit->text();
      funcion=f.toStdString();
      symbol_table.add_variable("x",x);

      expression.register_symbol_table(symbol_table);
      parser.compile(funcion,expression);
      y=expression.value();

      return y;
}



/*************llenar tabla con valores de x******/
void MainWindow::llenarvaloresx(){


    //borrar tabla si ya tiene algo
     if(ui->tableWidget->rowCount() > 0){
         ui->tableWidget->clear();}

     //toma numero de columnas segun spinbox
     ui->tableWidget->setColumnCount(valoresx.size()-1);
     //numero de filas por defecto
     ui->tableWidget->setRowCount(2);

     //se crean los item
     for (int i = 0 ; i < 2 ; i++ ){
      for (int j = 0 ; j < valoresx.size()-1 ; j++){
     ui->tableWidget->setItem(i , j , new QTableWidgetItem );}}

     //titulo para las filas
     cabecerafilas << "X"<<"Y";
     ui->tableWidget->setVerticalHeaderLabels(cabecerafilas);


       //llenar tabla con valores de x importados del archivo de texto
       for(int j=0;j<valoresx.size()-1;j++){
         ui->tableWidget->item(0 , j)->setText(QString::number(valoresx[j]));
       }


}





//si se cambia la funcion escrita en F(x) limpiar ventana
void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{


    //borrar tabla si ya tiene algo
     if(ui->tableWidget->rowCount() > 0){
         ui->tableWidget->clear();}

     //Borrar valores de x y de y
      valoresx.clear();
      valoresy.clear();

    //Borrar aproxomaciones y errores
      ui->lineEdit_3->clear();
      ui->lineEdit_4->clear();
      ui->lineEdit_8->clear();
      ui->lineEdit_11->clear();
      ui->lineEdit_12->clear();
      ui->lineEdit_15->clear();

    //Borrar graficas
      ui->widget->clearGraphs();



}

/*******GRAFICAR f(x). Graficar polinomio de lagrange. Graficar diferencias divididas*******/
void MainWindow::on_pushButton_3_clicked()
{   ui->widget->clearGraphs();
    graficar();
}


void MainWindow::graficar(){


    //Agregar graficos
    /*Linea vertical del intercepto*/
    ui->widget->addGraph();
    ui->widget->graph(0)->setPen(QPen(Qt::black));
    /*funcion real*/
    ui->widget->addGraph();
    ui->widget->graph(1)->setPen(QPen(Qt::blue));
    /*lagrange*/
    ui->widget->addGraph();
    ui->widget->graph(2)->setPen(QPen(Qt::red));
    /*Diferencias divididas*/
    ui->widget->addGraph();
    ui->widget->graph(3)->setPen(QPen(Qt::yellow));


    //Llenar valores
    //Graficacion intercepto**************************************************
    QVector<double> valsinterceptox;
    QVector<double> valsinterceptoy;
    double intercepto;
    QString valorxinterfaz=ui->lineEdit_4->text();
    intercepto=valorxinterfaz.toDouble();


    for (int i=-1000; i<=1000; ++i)    {
      valsinterceptox.push_back(intercepto);
      valsinterceptoy.push_back(i);

    }


    //Graficacion de la funcion normal**************************************************
    QVector<double> valsfuncionx;
    QVector<double> valsfunciony;
    double valorxfuncion;


    for (int i=-1000; i<=1000; ++i)    {
      valsfuncionx.push_back(i/50.0);
    }


    for (int i=0; i<valsfuncionx.size(); ++i)    {
      valorxfuncion=valsfuncionx[i];
      valsfunciony.push_back(compilarfuncion(valorxfuncion));

    }




    //Graficacion de lagrange**************************************************
    QVector<double> valslagrangex;
    QVector<double> valslagrangey;
    double valorxlagrange;


    for (int i=-1000; i<=1000; ++i){
      valslagrangex.push_back(i/50.0);
    }

    for (int i=0; i<valslagrangex.size(); ++i){
      valorxlagrange=valslagrangex[i];
      valslagrangey.push_back(generarLagrange(valorxlagrange));

    }

    //Graficacion de diferencias divididas**************************************************
    QVector<double> valsdiferenciasx;
    QVector<double> valsdiferenciasy;
    double valorxdiferencias;

    for (int i=-1000; i<=1000; ++i){
      valsdiferenciasx.push_back(i/50.0);
    }

    for (int i=0; i<valsdiferenciasx.size(); ++i){
      valorxdiferencias=valsdiferenciasx[i];
      valsdiferenciasy.push_back(generarDiferenciasDivididas(valorxdiferencias));

    }
//**********************************************************************************



    ui->widget->graph(0)->setData(valsinterceptox, valsinterceptoy);
    ui->widget->graph(0)->setName("Valor evaluado");
    ui->widget->graph(1)->setData(valsfuncionx, valsfunciony);
    ui->widget->graph(1)->setName("Funcion real");
    ui->widget->graph(2)->setData(valslagrangex, valslagrangey);
    ui->widget->graph(2)->setName("Lagrange");
    ui->widget->graph(3)->setData(valsdiferenciasx, valsdiferenciasy);
    ui->widget->graph(3)->setName("Diferencias divididas");

    //Cuadro de leyenda
    ui->widget->legend->setVisible(true);
    ui->widget->legend->setFont(QFont("Helvetica",9));

     //interaccion con los ejes
     connect(ui->widget->xAxis, SIGNAL(rangeChanged(QCPRange)), ui->widget->xAxis2, SLOT(setRange(QCPRange)));
     connect(ui->widget->yAxis, SIGNAL(rangeChanged(QCPRange)), ui->widget->yAxis2, SLOT(setRange(QCPRange)));
     //reescalar
     ui->widget->rescaleAxes();
     //Hacer grafica manipulable
     ui->widget->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);
     ui->widget->xAxis->setRange(-5, 5);
     ui->widget->yAxis->setRange(-5, 5);
     ui->widget->replot();

}



/***********LAGRANGE Y DIFRERENCIAS DIVIDIDAS*************/
void MainWindow::on_pushButton_2_clicked(){

    //valor a evaluar
        QString valorxinterfaz=ui->lineEdit_4->text();
        valx=valorxinterfaz.toDouble();
        ui->lineEdit_3->setText(QString::number(compilarfuncion(valx)));

        //LAGRANGE
        double lagrangex=generarLagrange(valx);
        ui->lineEdit_8->setText(QString::number(lagrangex));
        double error1=generarError(lagrangex, compilarfuncion(valx));
        ui->lineEdit_11->setText(QString::number(error1));


        //DIFERENCIAS DIVIDIDAS
        double diferenciasx=generarDiferenciasDivididas(valx);
        ui->lineEdit_12->setText(QString::number(diferenciasx));
        double error2=generarError(diferenciasx, compilarfuncion(valx));
        ui->lineEdit_15->setText(QString::number(error2));




}


double MainWindow::generarLagrange(double x){ //x es el numero que se desea evaluar
    try{
     int n=valoresx.size()-1;
    double datos[n][2];
    for(int i=0; i<n; i++){
        datos[i][0]=valoresx[i];
        datos[i][1]=valoresy[i];
    }
    cout<< "valoresx: " + n << endl;
    string polL[n][2];//posicion 1 el polinomio de la forma (x-x1)(x-x2)...(x-x(i-1))(x-x(i+1))...(x-xn)
    //posicion 2 el coeficiente (que acompaña al polinomio) de la forma yi/(xi-x1)(xi-x2)...(xi-x(i-1))(xi-x(i+1))...(xi-xn)
    double resultado=0;
    cout<< "resultado: " << resultado << endl;
    double resultadoPar;
    cout<< "resultadoPar: "<< resultadoPar<< endl;
    for(int i=0; i<n; i++){
        resultadoPar=1;
        cout<< "ResultadoPar: " << resultadoPar<< endl;
        for(int j=0; j<n; j++){
            double dato= datos[j][0];
            cout<< "dato(arreglo bidimensional) " <<  datos[j][0] << endl;

            ostringstream strs;//convertir entero a string
            cout<< "dato " << strs << endl;
            strs << dato;
            cout<< "dato " << strs << endl;
            if(j!=i){
                resultadoPar*=(x-dato);

                polL[i][0]+="(X-("+strs.str()+"))";
                //cout<< "Polinomio " <<  polL[i][0] << endl;
            }
        }
        cout<< "resultadoPar: " << resultadoPar << endl;

        double coefDenom = 1;
        for(int j=0; j<n; j++){
            if(j!=i) coefDenom*=(double)(datos[i][0]-datos[j][0]);

        }
        double coef=(double)datos[i][1]/coefDenom;
        //convertir Double a string
        resultadoPar*=coef;
        ostringstream strs;
        strs << coef;
        string coefStr= strs.str();
        polL[i][1]=coefStr;

        resultado+=resultadoPar;
    }
    //Imprime polinomio
    string salida="(" + polL[0][1] + polL[0][0] + ")";
    for(int i=1; i<n; i++)
        salida+= "+(" + polL[i][1] + polL[i][0] + ")";

    cout << "El polinomio de Lagrange de grado "<< n <<" ajustado para los datos es: " << salida << endl;
    cout << "El resultado de la evaluación del polinomio en " <<  x << " es: "<< resultado << endl;
    return resultado;
        }catch(...){
        cout<<"Error Lagrange";
    }

}



double MainWindow::generarError(double x, double y){

    return fabs(y-x);

}

double MainWindow::generarDiferenciasDivididas(double vlx){ //vlx es el numero que se desea evaluar
        try{
            int n=valoresx.size()-1;
            double datos[n][n];//valores de la tabla de diferencias
            double terminoPolinomio;
            double valorInterpolado;

            //inicializar tabla de diferencias. Primer columna de la tabla de diferencias
            for(int i=0;i<n;i++){
                datos[i][0]=valoresy[i];
            }

            //armartabla de diferencias
            for(int j=1;j<n;j++){
                for(int i=0;i<n-j;i++)//se reduce cada columna con un renglon menos
                {
                datos[i][j]=(datos[i+1][j-1]-datos[i][j-1])/(valoresx[i+j]-valoresx[i]);}
            }


            terminoPolinomio=1;
            valorInterpolado=datos[0][0];
            for (int i=0;i<n-1;i++){
                terminoPolinomio=terminoPolinomio*(vlx-valoresx[i]);
                valorInterpolado=valorInterpolado+datos[0][i+1]*terminoPolinomio;

            }

        return valorInterpolado;




    }catch(...){
        cout<< "Error Diferencias Divididas!""";
    }
    }






void MainWindow::on_lineEdit_4_textChanged(const QString &arg1)
{
    //Borrar aproxomaciones y errores
      ui->lineEdit_3->clear();
      ui->lineEdit_8->clear();
      ui->lineEdit_11->clear();
      ui->lineEdit_12->clear();
      ui->lineEdit_15->clear();

}
