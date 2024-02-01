#ifndef REMOVING_ORGANIZATION_H
#define REMOVING_ORGANIZATION_H

#include <QWidget>
#include<QFile>
#include<QTextStream>
#include<QTimer>

namespace Ui {
class removing_organization;
}

class removing_organization : public QWidget
{
    Q_OBJECT

public:
    explicit removing_organization(QWidget *parent = nullptr);
    ~removing_organization();

    void setUserName(QString Name);

private slots:
    void on_pbn_remove_clicked();

private:
    Ui::removing_organization *ui;

    QString UserName;
};

#endif // REMOVING_ORGANIZATION_H
