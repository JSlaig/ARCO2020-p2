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
    ui->lineEditnumVagones->setDisabled(true);
    ui->lineEditnumVagones->setText("0");
    ui->comboBox_Combustible->setDisabled(true);

}

MainWindow::~MainWindow()
{
    delete ui;
}

/*Acction listener Boton de prueba*/



//==========================


void MainWindow::on_pushButton_createVehicle_clicked()
{

    QString colour = ui->comboBox_Colour->currentText();
    bool reactors = ui->checkBox_Reactor->checkState();
    bool wings = ui->checkBox_Wings->checkState();
    int sizeList = listaVehiculos.size();
    bool fuel = ui->checkBox_Combustible->checkState();
    std::string fuelType = ui->comboBox_Combustible->currentText().toStdString();
    std::string matricula = ui->label_matricula->text().toStdString();

    newVehicle.setNumWagon(ui->lineEditnumVagones->text().toInt());
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
    ui->comboBox_Combustible->setCurrentIndex(0);
    ui->comboBox_Combustible->setEnabled(false);
    ui->checkBox_Combustible->setChecked(false);
}

void MainWindow::on_checkBox_Reactors_clicked()
{

}

void MainWindow::on_checkBox_Combustible_toggled(bool checked)
{
    if(checked){
        ui->comboBox_Combustible->setEnabled(true);
        newVehicle.setFuel(true);
    }else{
        ui->comboBox_Combustible->setCurrentIndex(0);
        ui->comboBox_Combustible->setEnabled(false);
        newVehicle.setFuel(false);
    }
}

void MainWindow::on_pushButton_Matricula_clicked()
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
    ui->label_matricula->setText(str);
}
void MainWindow::on_pushButton_Matricula_released()
{

}

void MainWindow::on_checkBox_wagons_toggled(bool checked)
{

        if(checked){

            std::cout << "Vagones seteado como true" << std::endl;
            //bool wagon;
            //int numWagon;
            newVehicle.setWagon(true);
            ui->lineEditnumVagones->setDisabled(false);
            ui->lineEditnumVagones->setText("5");

        }else{

            std::cout << "Vagones seteado como false" << std::endl;
            newVehicle.setWagon(false);
            ui->lineEditnumVagones->setDisabled(true);
            ui->lineEditnumVagones->setText("0");
        }

}

void MainWindow::on_checkBox_Locomotive_toggled(bool checked)
{
        if(checked){

            std::cout << "Locomotora seteada como true" << std::endl;
            newVehicle.setLocomotive(true);

        }else{

            std::cout << "Locomotora seteada como false" << std::endl;
            newVehicle.setLocomotive(false);
        }
}

void MainWindow::on_checkBox_Undercarriage_toggled(bool checked)
{
        if(checked){

            std::cout << "Tren aterrizaje seteadao como true" << std::endl;
            newVehicle.setUndercarriage(true);

        }else{

            std::cout << "Tren aterrizaje seteado como false" << std::endl;
            newVehicle.setUndercarriage(false);
        }
}
