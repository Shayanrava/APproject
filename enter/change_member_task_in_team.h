#ifndef CHANGE_MEMBER_TASK_IN_TEAM_H
#define CHANGE_MEMBER_TASK_IN_TEAM_H

#include <QWidget>

namespace Ui {
class change_member_task_in_team;
}

class change_member_task_in_team : public QWidget
{
    Q_OBJECT

public:
    explicit change_member_task_in_team(QWidget *parent = nullptr);
    ~change_member_task_in_team();

private:
    Ui::change_member_task_in_team *ui;
};

#endif // CHANGE_MEMBER_TASK_IN_TEAM_H
