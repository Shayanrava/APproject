#include "person.h"
Person::Person() {}

void Person::user_set_name(QString _name)
{
    username=_name;
}

QString Person::user_get_name()
{
    return username;
}

void Person::set_task_vec(QString Date_finish,QString Task_work,QString Name_of_organ)
{
    organ_task tmp;
    tmp.set_name(Name_of_organ);
    tmp.set_work(Date_finish,Task_work);
    tasks.push_back(tmp);
}
