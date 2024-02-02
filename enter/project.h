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
    QVector<QString>personels;
    QString status;
public:
    project();
//تغییر وضعبت
    void setStatus(QString);
    QString getStatus();
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
void loadAdmin(QString);
int adminlength();
void newAdmin(QString);
QString removeAdmin(QString);
QString adminFind(int);



//گرفتن و تنظیم نفرات
int peronelslength();
  void addMember(QString);
  void loadMember(QString);
  void removeMember(QString);
  QString memberFind(int);
  void setTaskMember(QString,QString);
  void setTimeMember(QString,QString);

//  comment
  comment getComment(int Index);

  bool removeComment(QString Name,QString Title,QString Time);
  bool removeComment(int Index);

  void addComment(QString Name,QString Title,QString Time,QString RepPerson,QString RepTitle);



};

#endif // PROJECT_H
