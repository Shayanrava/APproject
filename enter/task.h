#ifndef TASK_H
#define TASK_H

#include <QString>


class task
{

    QString task_work;

    bool archive;

    QString date_finish;

public:
    task();
    void set_datefinis(QString );
    void set_taskwork(QString);
    void set_archive();
    bool get_archive();
    QString get_task();
    QString get_date_finish();
};

#endif // TASK_H
