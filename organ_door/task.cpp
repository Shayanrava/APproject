#include "task.h"

task::task() {}

void task::set_task(QString task_str)
{
    this->task_work=task_str;
}
void task::set_date_finish(QDate time_finish)
{
    time_finish=QDate::currentDate();
    this->date_finish=time_finish.toString("yyyy-MM-dd");
}
