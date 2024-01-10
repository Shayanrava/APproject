#ifndef ORGAN_TASK_H
#define ORGAN_TASK_H
#include<QString>
#include"task.h"
class organ_task
{
    QString organ_name;
    task work;
public:
    organ_task();

    QString get_name();
    QString get_task_work();
    QString get_task_date();
    bool get_task_archive();

    void set_name(QString);
    void set_work(QString,QString);
    void set_archive();
};

#endif // ORGAN_TASK_H
