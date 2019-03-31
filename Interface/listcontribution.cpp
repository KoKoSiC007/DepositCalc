#include "listcontribution.h"
#include "ui_listcontribution.h"

listContribution::listContribution(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::listContribution)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentWidget(ui->mainPage);
}

listContribution::~listContribution()
{
    delete ui;
}

void listContribution::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->firstPage);
}
