#include "listcontributions.h"
#include "ui_listcontributions.h"

listcontributions::listcontributions(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::listcontributions)
{
    ui->setupUi(this);
    ui->valueComboBox->setCurrentIndex(0);
   // ui->dateEdit_13->setDate(20.02.2001);
    ui->daysLineEdit->setText("0");
    ui->sumLineEdit->setText("1000");
}

listcontributions::~listcontributions()
{
    delete ui;
}

void listcontributions::on_listWidget_itemClicked(QListWidgetItem *item)
{
    switch (ui->listWidget->currentRow())
    {
        case 0: ui->mainGroupBox->setTitle("Вклад 1");
        ui->valueComboBox->setCurrentIndex(0);
       // ui->dateEdit_13->setDate(20.02.2001);
        ui->daysLineEdit->setText("0");
        ui->sumLineEdit->setText("1000");
        break;
        case 1: ui->mainGroupBox->setTitle("Вклад 2");
        ui->valueComboBox->setCurrentIndex(0);
       // ui->dateEdit_13->setDate(20.02.2001);
        ui->daysLineEdit->setText("0");
        ui->sumLineEdit->setText("1000");
        break;
        case 2: ui->mainGroupBox->setTitle("Вклад 3");
        ui->valueComboBox->setCurrentIndex(0);
       // ui->dateEdit_13->setDate(20.02.2001);
        ui->daysLineEdit->setText("0");
        ui->sumLineEdit->setText("1000");
        break;
        case 3: ui->mainGroupBox->setTitle("Вклад 4");
        ui->valueComboBox->setCurrentIndex(0);
       // ui->dateEdit_13->setDate(20.02.2001);
        ui->daysLineEdit->setText("0");
        ui->sumLineEdit->setText("1000");
        break;
        case 4: ui->mainGroupBox->setTitle("Вклад 5");
        ui->valueComboBox->setCurrentIndex(0);
       // ui->dateEdit_13->setDate(20.02.2001);
        ui->daysLineEdit->setText("0");
        ui->sumLineEdit->setText("1000");
        break;
        case 5: ui->mainGroupBox->setTitle("Вклад 6");
        ui->valueComboBox->setCurrentIndex(0);
       // ui->dateEdit_13->setDate(20.02.2001);
        ui->daysLineEdit->setText("0");
        ui->sumLineEdit->setText("1000");
        break;
    }
}
