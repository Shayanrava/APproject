#ifndef VIEW_MEMBER_TASK_IN_PROJECT_H
#define VIEW_MEMBER_TASK_IN_PROJECT_H

#include <QWidget>

namespace Ui {
class view_member_task_in_project;
}

class view_member_task_in_project : public QWidget
{
    Q_OBJECT

public:
    explicit view_member_task_in_project(QWidget *parent = nullptr);
    ~view_member_task_in_project();

private:
    Ui::view_member_task_in_project *ui;
};

#endif // VIEW_MEMBER_TASK_IN_PROJECT_H
