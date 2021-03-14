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

    void on_BotonPrueba_clicked();

    void on_checkBox_Locomotora_toggled(bool checked);

    void on_checkBox_Vagones_toggled(bool checked);

    void on_checkBox_TrenAterrizaje_toggled(bool checked);

    void on_checkBox_Combustible_toggled(bool checked);

    void on_label_windowIconTextChanged(const QString &iconText);



private:
    Ui::MainWindow *ui;
    newVehicle newVehicle;
};
#endif // MAINWINDOW_H
