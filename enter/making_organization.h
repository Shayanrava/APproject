#ifndef MAKING_ORGANIZATION_H
#define MAKING_ORGANIZATION_H

#include <QWidget>
#include<QFile>
#include<QTextstream>
#include<QTimer>
namespace Ui {
class making_organization;
}

class making_organization : public QWidget
{
    Q_OBJECT

public:
    explicit making_organization(QWidget *parent = nullptr);
    ~making_organization();

private slots:
    void on_pbn_making_clicked();

private:
    Ui::making_organization *ui;
};

#endif // MAKING_ORGANIZATION_H
