#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "iostream"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

/*Acction listener Boton de prueba*/
void MainWindow::on_pushButton_released()
{

}

void MainWindow::on_buttonTrenAterrizaje_clicked(bool checked)
{
    if(checked){
        newVehicle.setLocomotive(true);
        std::cout << "Locomotora seteada como true";
    }
}

void MainWindow::on_buttonTrenAterrizaje_released()
{
    newVehicle.setUndercarriage(true);
}

void MainWindow::on_buttonVagones_released()
{
    int defaultWagon = 0;
    newVehicle.setWagon(defaultWagon);

}

void MainWindow::on_lineEditnumVagones_editingFinished()
{
   // newVehicle.setWagon(defaultWagon);
}

//==========================
void MainWindow::on_buttonLocomotora_released(){

}
