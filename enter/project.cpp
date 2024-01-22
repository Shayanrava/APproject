#include "project.h"

project::project() {}

//task task_of_projects;


//admins admins_of_projects;


void project::setName(QString Name)
{
    projectName=Name;
}

QString project::getName()
{
    return projectName;
}

void project::setOrgan(QString Name)
{
    organName=Name;
}

QString project::getOrgan()
{
    return organName;
}

void project::setTask(QString TaskString)
{
    task_of_projects.set_taskwork(TaskString);
}

void project::setTaskTime(QString Time)
{
    task_of_projects.set_datefinis(Time);
}

void project::setTaskArchive()
{
    task_of_projects.set_archive();
}

QString project::getTaskTitle()
{
    return task_of_projects.get_task();
}

QString project::getTaskTime()
{
    return task_of_projects.get_date_finish();
}

bool project::getTaskArchive()
{
    return task_of_projects.get_archive();
}
