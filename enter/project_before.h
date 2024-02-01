#ifndef PROJECT_BEFORE_H
#define PROJECT_BEFORE_H

#include <QWidget>

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

private slots:
    void on_change_task_person_pbn_clicked();

    void on_view_task_person_pbn_clicked();

private:
    Ui::project_before *ui;

    QString UserName;

    QString organName;
};

#endif // PROJECT_BEFORE_H
