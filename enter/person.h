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

//ساخت یک وظیفه جدید
    void newTask(QString,QString,QString,QString);

//    توابعی که برامون یه وظیفه رو بر میگردونن
    organ_task yourTask(QString,QString);
    organ_task yourTask(int);


//    تنظیم کردن ویژگی های وظیفه
    void setNameProject(QString,QString,QString);
    void setNameProject(int,QString);

    void setNameOrgan(QString,QString,QString);
    void setNameOrgan(int,QString);

    void setdatefinish(QString,QString,QString);
    void setdatefinish(int,QString);

    void setArchive(QString,QString);
    void setArchive(int);

    void setTask(QString,QString,QString);
     void setTask(int,QString);




};

#endif // PERSON_H
