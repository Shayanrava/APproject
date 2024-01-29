#ifndef TASK_H
#define TASK_H
#include<QVector>
#include <QString>
#include"comment.h"

class task
{
    QVector<comment>comments;

    QString task_work;

    bool archive;

    QString date_finish;

public:
    task();
    void set_datefinis(QString );
    void set_taskwork(QString);
    void set_archive();
    bool get_archive();
    QString get_task();
    QString get_date_finish();

    bool removeComment(QString, QString, QString );
    bool removeComment(int );


    void addComment(QString,QString,QString,QString,QString);

    comment getComment(int);




};

#endif // TASK_H
