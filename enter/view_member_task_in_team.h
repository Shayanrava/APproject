#ifndef VIEW_MEMBER_TASK_IN_TEAM_H
#define VIEW_MEMBER_TASK_IN_TEAM_H

#include <QWidget>

namespace Ui {
class view_member_task_in_team;
}

class view_member_task_in_team : public QWidget
{
    Q_OBJECT

public:
    explicit view_member_task_in_team(QWidget *parent = nullptr);
    ~view_member_task_in_team();

private:
    Ui::view_member_task_in_team *ui;
};

#endif // VIEW_MEMBER_TASK_IN_TEAM_H
