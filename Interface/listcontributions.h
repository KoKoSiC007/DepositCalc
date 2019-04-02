#ifndef LISTCONTRIBUTIONS_H
#define LISTCONTRIBUTIONS_H

#include <QDialog>
#include <QListWidget>

namespace Ui {
class listcontributions;
}

class listcontributions : public QDialog
{
    Q_OBJECT

public:
    explicit listcontributions(QWidget *parent = nullptr);
    ~listcontributions();

private slots:
    void on_listWidget_itemClicked(QListWidgetItem *item);

private:
    Ui::listcontributions *ui;
};

#endif // LISTCONTRIBUTIONS_H
