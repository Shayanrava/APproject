#include "organ_task.h"

organ_task::organ_task() {}

QString organ_task::get_organName()
{
    return organ_name;
}

QString organ_task::get_workTask()
{
    return work.get_task();
}

QString organ_task::get_projectName()
{
    return project_name;
}

QString organ_task::get_workFinish()
{
    return work.get_date_finish();
}

bool organ_task::get_workArchive()
{
    return work.get_archive();
}

void organ_task::set_organName(QString Name)
{
    organ_name=Name;
}

void organ_task::set_workFinish(QString TimeFinish)
{
    work.set_datefinis(TimeFinish);

}
void organ_task::set_workTask(QString Task ){

    work.set_taskwork(Task);

}

void organ_task::set_projectName(QString Name)
{
    project_name=Name;
}

void organ_task::set_workArchive()
{
    work.set_archive();
}



void organ_task::addComment(QString Name,QString Title,QString Time,QString RepPerson,QString RepTitle){

    work.addComment(Name,Title,Time,RepPerson,RepTitle);

}

comment organ_task::getComment(int Index){

    return work.getComment(Index);

}

bool organ_task::removeComment(int Index){

    return work.removeComment(Index);

}

bool organ_task::removeComment(QString Name,QString Title,QString Time){

    return work.removeComment(Name,Title ,Time);

}
