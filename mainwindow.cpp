#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include "vehicle.h"
#include <QInputDialog>
#include <QMessageBox>
#include <sstream>
#define STRING(num) #num

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


//==========================


void MainWindow::on_BotonPrueba_clicked()
{
    std::cout << "Locomotora seteada como true" << std::endl;

}



void MainWindow::on_checkBox_Locomotora_toggled(bool checked)
{
    if(checked){

        std::cout << "Locomotora seteada como true" << std::endl;
        newVehicle.setLocomotive(true);

    }else{

        std::cout << "Locomotora seteada como false" << std::endl;
        newVehicle.setLocomotive(false);
    }
}

void MainWindow::on_checkBox_Vagones_toggled(bool checked)
{
    bool vagones;
    if(checked){

        std::cout << "Vagones seteado como true" << std::endl;
        vagones = true;

    }else{

        std::cout << "Vagones seteado como false" << std::endl;
        vagones = false;
    }
}

void MainWindow::on_checkBox_TrenAterrizaje_toggled(bool checked)
{
    if(checked){

        std::cout << "Tren aterrizaje seteadao como true" << std::endl;
        newVehicle.setUndercarriage(true);

    }else{

        std::cout << "Tren aterrizaje seteado como false" << std::endl;
        newVehicle.setUndercarriage(false);
    }
}

void MainWindow::on_pushButton_createVehicle_clicked()
{

    QString colour = ui->comboBox_Colour->currentText();
    bool reactors = ui->checkBox_Reactor->checkState();
    bool wings = ui->checkBox_Wings->checkState();
    int sizeList = listaVehiculos.size();
    // Cuando tengamos todos los datos, descomentar y completar la linea siguiente.
   // listaVehiculos.push_back(Vehiculo(atributos de vehiculo)
    //int numberVehicles = ++sizeList;
     QString QNVehicles = QString::fromStdString(static_cast<std::ostringstream*>(&(std::ostringstream() << ++sizeList))->str());
    ui->vehiculosCreados_lineEdit->setText(QNVehicles);
    fillComboBox();
    resetWindow();






}

void MainWindow::fillComboBox(){
    ui->comboBox_listVehicles->clear();
    int quantity = listaVehiculos.size();
    for (int i = 0; i < quantity;i++){
        ui->comboBox_listVehicles->addItem(QString::fromStdString((listaVehiculos[i].getName())));
    }


}
//Este metodo reinicia los valores a elegir de la ventana
void MainWindow::resetWindow(){
    ui->comboBox_Colour->setCurrentIndex(0);
    ui->checkBox_Wings->setChecked(false);
    ui->checkBox_Reactor->setChecked(false);
}

void MainWindow::on_checkBox_Reactors_clicked()
{

}
