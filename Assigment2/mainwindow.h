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

private slots:

    void on_pushButton_released();

    void on_buttonLocomotora_released();

    void on_buttonTrenAterrizaje_released();

    void on_buttonVagones_released();

    void on_lineEditnumVagones_editingFinished();

    void on_buttonTrenAterrizaje_clicked(bool checked);

private:
    Ui::MainWindow *ui;
    newVehicle newVehicle;
};
#endif // MAINWINDOW_H
