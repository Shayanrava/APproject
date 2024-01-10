#ifndef PERSON_H
#define PERSON_H
#include "organ_task.h"
#include<QString>
#include<QVector>
class Person
{
    QString username;
    QVector<organ_task>tasks;
public:
    Person();
    void user_set_name(QString);
    QString user_get_name();
    void set_task_vec(QString,QString,QString);
};

#endif // PERSON_H
