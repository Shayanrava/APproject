#ifndef ORGANIZATION_ENTRANCE_H
#define ORGANIZATION_ENTRANCE_H

#include <QWidget>

namespace Ui {
class organization_entrance;
}

class organization_entrance : public QWidget
{
    Q_OBJECT

public:
    explicit organization_entrance(QWidget *parent = nullptr);
    ~organization_entrance();

private:
    Ui::organization_entrance *ui;
};

#endif // ORGANIZATION_ENTRANCE_H
