#ifndef PROJECT_H
#define PROJECT_H
#include "person.h"
#include "admins.h"
#include<QVector>
#include<QString>
#include<QFile>
#include<QTextStream>

class project
{
    QString projectName;
    QString organName;
    task task_of_projects;
    admins admins_of_projects;
    QVector<Person>personels;
public:
    project();

//    گرفتن و تنظیم کردن نام
    void setName(QString);
    QString getName();

    void setOrgan(QString);
    QString getOrgan();

//    گرفتن و تنظیم وظیفه

    void setTask(QString);
    void setTaskTime(QString);
    void setTaskArchive();
    QString getTaskTitle();
    QString getTaskTime();
    bool getTaskArchive();

//    تنظیم و گرفتن ادمینها

void newAdmin(QString);
QString removeAdmin(QString);
QString adminFind(int);



//گرفتن و تنظیم نفرات
  void addMember(QString,QString,QString);
  void removeMember(QString);
  QString memberFind(int);
  void setTaskMember(QString,QString);


};

#endif // PROJECT_H
