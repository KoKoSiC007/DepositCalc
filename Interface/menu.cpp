#include "menu.h"
#include "ui_menu.h"
#include "listcontribution.h"

Menu::Menu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);
}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_beginButton_clicked()
{
    this->close();
    listContribution listContributionWin;
    listContributionWin.setModal(true);
    listContributionWin.exec();
}
