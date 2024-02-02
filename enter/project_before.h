#ifndef PROJECT_BEFORE_H
#define PROJECT_BEFORE_H

#include <QWidget>
#include<QTimer>
#include<QFile>
#include"project.h"

namespace Ui {
class project_before;
}

class project_before : public QWidget
{
    Q_OBJECT

public:
    explicit project_before(QWidget *parent = nullptr);
    ~project_before();

    void setUserName(QString Name);
     void setOrganName(QString Name);
        void setprojectName(QString Name);

private slots:
    void on_change_task_person_pbn_clicked();

    void on_view_task_person_pbn_clicked();

    void on_view_project_status_pbn_clicked();

    void on_change_project_status_pbn_clicked();

    void on_view_project_task_pbn_clicked();

    void on_set_project_task_pbn_clicked();

    void on_view_member_pbn_clicked();

    void on_view_admin_pbn_clicked();

    void on_delete_member_pbn_clicked();

    void on_add_member_pbn_clicked();

    void on_delete_admin_pbn_clicked();

    void on_add_admin_pbn_clicked();

private:
    Ui::project_before *ui;

    QString UserName;

    QString organName;

    QString projectName;

    project myproject;
};

#endif // PROJECT_BEFORE_H
