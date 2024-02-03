#ifndef ADD_PROJECT_BEFORE_H
#define ADD_PROJECT_BEFORE_H

#include <QWidget>
#include<QTimer>
#include<QFile>

namespace Ui {
class add_project_before;
}

class add_project_before : public QWidget
{
    Q_OBJECT

public:
    explicit add_project_before(QWidget *parent = nullptr);
    ~add_project_before();

    void setUserName(QString Name);
     void setOrganName(QString Name);

private slots:
     void on_add_project_pbn_clicked();

private:
    Ui::add_project_before *ui;
    QString UserName;
    QString orgaName;
};

#endif // ADD_PROJECT_BEFORE_H
