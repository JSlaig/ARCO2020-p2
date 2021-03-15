#include "MainWindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include "Vehicle.h"
#include <QInputDialog>
#include <QMessageBox>
#include <sstream>
#define STRING(num) #num

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    ui->cvvLine->setDisabled(true);
    ui->fueltypeLine->setDisabled(true);

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
void MainWindow::fillComboBox(){
    ui->comboBox_listVehicles->clear();
    int quantity = listaVehiculos.size();
    for (int i = 0; i < quantity;i++){
        ui->comboBox_listVehicles->addItem(QString::fromStdString((listaVehiculos[i].getName())));
    }


}
//Este metodo reinicia los valores a elegir de la ventana
void MainWindow::resetWindow(){
    ui->colorLine->setCurrentIndex(0);
    ui->wingsCheckLine->setChecked(false);
    ui->reactorCheckLine->setChecked(false);
    //ui->cvvLine->setCurrentIndex(0);
    ui->fueltypeLine->setEnabled(false);
    ui->fuelCheckLine->setChecked(false);
}
void MainWindow::on_pushButton_Matricula_released()
{
    srand(time(NULL));
    std::string registerNumber;
    char letter;
    for(int i = 0; i<=3;i++){
       registerNumber.push_back((rand()%10+48));
    }
    registerNumber.push_back('-');

    for(int i = 0; i<=2;i++){
        letter = (rand()%26+65);
        while(letter=='A'||letter=='E'||letter=='I'||letter=='O'||letter=='U'||letter=='a'||letter=='e'||letter=='i'||letter=='o'||letter=='u'){
            letter = (rand()%26+65);
        }
        registerNumber.push_back(letter);
    }
    QString str = QString::fromUtf8(registerNumber.data(),registerNumber.size());
    ui->registrationLine->setText(str);
}

//Boton de creacion de vehiculo, se toma valor a todos los campos
void MainWindow::on_pushButton_createVehicle_released()
{
    std::string name = ui->nameLine->text().toStdString();
    int wheelNumber = ui->wheelNumberLine->value();
    std::string wheelKit = ui->wheelKitLine->currentText().toStdString();
    std::string color = ui->colorLine->currentText().toStdString();
    bool wings = ui->wingsCheckLine->checkState();
    bool undercarriage = ui->undercarriageCheckLine->checkState();
    bool reactors = ui->reactorCheckLine->checkState();
    bool locomotive = ui->locomotiveCheckLine->checkState();
    bool engine = ui->engineCheckLine->checkState();
    int cvv = ui->cvvLine->text().toInt();

    bool fuel = ui->fuelCheckLine->checkState();
    std::string fuelType = ui->fueltypeLine->currentText().toStdString();
    bool wagons = ui->wagonCheckLine->checkState();
    int wagonNumber = ui->wagonNumberLine->value();
    std::string registration = ui->registrationLine->text().toStdString();



    int sizeList = listaVehiculos.size();
    // Cuando tengamos todos los datos, descomentar y completar la linea siguiente.
   // listaVehiculos.push_back(Vehiculo(atributos de vehiculo)
    //int numberVehicles = ++sizeList;
     QString QNVehicles = QString::fromStdString(static_cast<std::ostringstream*>(&(std::ostringstream() << ++sizeList))->str());
    ui->vehiculosCreados_lineEdit->setText(QNVehicles);
    fillComboBox();
    resetWindow();
}

void MainWindow::on_engineCheckLine_toggled(bool checked)
{
    if(checked){
        ui->cvvLine->setDisabled(false);
    }else{
        ui->cvvLine->setDisabled(true);
        ui->cvvLine->setValue(80);
    }
}
void MainWindow::on_fuelCheckLine_toggled(bool checked)
{
    if(checked){
        ui->fueltypeLine->setDisabled(false);
    }else{
        ui->fueltypeLine->setDisabled(true);
    }
}
