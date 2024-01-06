#ifndef ADD_PEOPLE_H
#define ADD_PEOPLE_H

#include <QWidget>

namespace Ui {
class add_people;
}

class add_people : public QWidget
{
    Q_OBJECT

public:
    explicit add_people(QWidget *parent = nullptr);
    ~add_people();

private slots:
    void on_pushButton_clicked();

private:
    Ui::add_people *ui;
};

#endif // ADD_PEOPLE_H
