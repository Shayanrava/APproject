#ifndef ORGAN_TASK_H
#define ORGAN_TASK_H
#include<QString>
#include"task.h"
class organ_task
{
    QString organ_name;
    QString project_name;
    task work;
public:
    organ_task();

    QString get_projectName();
    QString get_organName();
    QString get_workTask();
    QString get_workFinish();
    bool get_workArchive();

    void set_projectName(QString);
    void set_organName(QString);
    void set_workFinish(QString);
    void set_workTask(QString);
    void set_workArchive();
};

#endif // ORGAN_TASK_H
