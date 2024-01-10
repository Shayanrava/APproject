#include "organ_task.h"

organ_task::organ_task() {}

QString organ_task::get_name()
{
    return organ_name;
}

QString organ_task::get_task_work()
{
    return work.get_task();
}

QString organ_task::get_task_date()
{
    return work.get_date_finish();
}

bool organ_task::get_task_archive()
{
    return work.get_archive();
}

void organ_task::set_name(QString name)
{
    organ_name=name;
}

void organ_task::set_work(QString time_finish,QString Work)
{
    work.set_datefinis(time_finish);
    work.set_taskwork(Work);
}

void organ_task::set_archive()
{
    work.set_archive();
}
