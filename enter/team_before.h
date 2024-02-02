#ifndef TEAM_BEFORE_H
#define TEAM_BEFORE_H

#include <QWidget>

namespace Ui {
class team_before;
}

class team_before : public QWidget
{
    Q_OBJECT

public:
    explicit team_before(QWidget *parent = nullptr);
    ~team_before();

    void setUserName(QString Name);
     void setOrganName(QString Name);
        void setTeamtName(QString Name);

private slots:
    void on_change_member_task_pbn_clicked();

    void on_view_member_task_pbn_clicked();

private:
    Ui::team_before *ui;

    QString UserName;

    QString organName;

    QString teamName;

};

#endif // TEAM_BEFORE_H
