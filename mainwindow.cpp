#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "iostream"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEditnumVagones->setDisabled(true);
   // ui->lineEditnumVagones->setText("0");

}

MainWindow::~MainWindow()
{
    delete ui;
}

/*Acction listener Boton de prueba*/
void MainWindow::on_pushButton_released()
{

}


//================================================================


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
    if(checked){
        std::string textoPrueba;

        std::cout << "Vagones seteado como true" << std::endl;
        newVehicle.setWagon(true);
        ui->lineEditnumVagones->setText("5");
        ui->lineEditnumVagones->setDisabled(false);

        ui->lineEditnumVagones->text();

        //std::cout << "El texto introducido es" << text() << std::endl;

    }else{

        std::cout << "Vagones seteado como false" << std::endl;
        newVehicle.setWagon(false);
        ui->lineEditnumVagones->setText("0");
        ui->lineEditnumVagones->setDisabled(true);
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

void MainWindow::on_checkBox_Combustible_toggled(bool checked)
{
    if(checked){
        std::cout << "Combustible seteadao como true" << std::endl;
        newVehicle.setFuel(true);
        ui->checkBox_Gasolina->setDisabled(false);
        ui->checkBox_Diesel->setDisabled(false);
        ui->checkBox_Electrico->setDisabled(false);
        ui->checkBox_Hibrido->setDisabled(false);
        ui->checkBox_Queroseno->setDisabled(false);
    }else{

        std::cout << "Combustible seteado como false" << std::endl;
        newVehicle.setFuel(false);
        ui->checkBox_Gasolina->setDisabled(true);
        ui->checkBox_Diesel->setDisabled(true);
        ui->checkBox_Electrico->setDisabled(true);
        ui->checkBox_Hibrido->setDisabled(true);
        ui->checkBox_Queroseno->setDisabled(true);
    }

}

void MainWindow::on_checkBox_Gasolina_toggled(bool checked)
{
    if(checked){
        std::cout << "Tipo de combustible seteado a gasolina" << std::endl;
        ui->checkBox_Diesel->setChecked(false);
        ui->checkBox_Electrico->setChecked(false);
        ui->checkBox_Hibrido->setChecked(false);
        ui->checkBox_Queroseno->setChecked(false);
        newVehicle.setFuelType('G');
    }else{
        std::cout << "Tipo de combustible no seteado a gasolina" << std::endl;
        newVehicle.setFuelType('N');
    }
}

