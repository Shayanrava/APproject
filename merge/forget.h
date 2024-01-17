#ifndef FORGET_H
#define FORGET_H

#include <QWidget>
#include<QFile>
#include<QTimer>

namespace Ui {
class forget;
}

class forget : public QWidget
{
    Q_OBJECT

public:
    explicit forget(QWidget *parent = nullptr);
    ~forget();


public slots:
    void readinfo();

private:
    Ui::forget *ui;
};

#endif // FORGET_H
