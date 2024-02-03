#ifndef DELETE_PROJECT_BEFORE_H
#define DELETE_PROJECT_BEFORE_H

#include <QWidget>
#include<QTimer>
#include<QFile>

namespace Ui {
class delete_project_before;
}

class delete_project_before : public QWidget
{
    Q_OBJECT

public:
    explicit delete_project_before(QWidget *parent = nullptr);
    ~delete_project_before();
    void setUserName(QString Name);
     void setOrganName(QString Name);

private slots:
     void on_delete_project_before_pbn_clicked();

private:
    Ui::delete_project_before *ui;
    QString UserName;
    QString orgaName;
};

#endif // DELETE_PROJECT_BEFORE_H
