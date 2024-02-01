#ifndef CHANGE_MEMBER_TASK_IN_PROJECT_H
#define CHANGE_MEMBER_TASK_IN_PROJECT_H

#include <QWidget>

namespace Ui {
class change_member_task_in_project;
}

class change_member_task_in_project : public QWidget
{
    Q_OBJECT

public:
    explicit change_member_task_in_project(QWidget *parent = nullptr);
    ~change_member_task_in_project();

private:
    Ui::change_member_task_in_project *ui;
};

#endif // CHANGE_MEMBER_TASK_IN_PROJECT_H
