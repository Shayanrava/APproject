#ifndef PROJECT_H
#define PROJECT_H
#include "person.h"
#include "admins.h"
#include<QVector>
class project
{
    task task_of_projects;
    admins admins_of_projects;
    QVector<Person>personels;
public:
    project();
};

#endif // PROJECT_H