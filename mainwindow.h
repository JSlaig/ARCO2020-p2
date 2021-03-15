#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <newvehicle.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void fillComboBox();
    void resetWindow();

private slots:

    void on_checkBox_Combustible_toggled(bool checked);

    void on_pushButton_createVehicle_clicked();

    void on_checkBox_Reactors_clicked();

    void on_pushButton_Matricula_clicked();

    void on_pushButton_Matricula_released();

    void on_checkBox_wagons_toggled(bool checked);

    void on_checkBox_Locomotive_toggled(bool checked);

    void on_checkBox_Undercarriage_toggled(bool checked);

private:
    Ui::MainWindow *ui;
    newVehicle newVehicle;
     Vehicle vehicle;
    std::vector<Vehicle> listaVehiculos;
};
#endif // MAINWINDOW_H
