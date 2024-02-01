#ifndef ADMIN_BEFORE_H
#define ADMIN_BEFORE_H

#include <QWidget>

namespace Ui {
class admin_before;
}

class admin_before : public QWidget
{
    Q_OBJECT

public:
    explicit admin_before(QWidget *parent = nullptr);
    ~admin_before();

private:
    Ui::admin_before *ui;
};

#endif // ADMIN_BEFORE_H
