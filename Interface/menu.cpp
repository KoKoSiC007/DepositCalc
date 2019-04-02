#include "menu.h"
#include "ui_menu.h"
#include "listcontributions.h"

menu::menu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::menu)
{
    ui->setupUi(this);
    this->setFixedSize(300, 200);
}

menu::~menu()
{
    delete ui;
}

void menu::on_beginButton_clicked()
{
    listcontributions *listcont = new listcontributions;
    this->close();
    listcont->setModal(true);
    listcont->exec();
}
