#ifndef TASK_H
#define TASK_H
#include<QDate>
#include<QString>
class task
{
    QString task_work;
    bool archived;
    //QString date_start;
    QString date_finish;
public:
    task();
    void set_task(QString task_str);
    void set_date_finish(QDate time_finish);
};

#endif // TASK_H
