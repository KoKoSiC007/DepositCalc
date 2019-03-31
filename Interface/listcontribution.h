#ifndef LISTCONTRIBUTION_H
#define LISTCONTRIBUTION_H

#include <QDialog>

namespace Ui {
class listContribution;
}

class listContribution : public QDialog
{
    Q_OBJECT

public:
    explicit listContribution(QWidget *parent = nullptr);
    ~listContribution();

private slots:
    void on_pushButton_clicked();

private:
    Ui::listContribution *ui;
};

#endif // LISTCONTRIBUTION_H
