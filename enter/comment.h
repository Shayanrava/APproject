#ifndef COMMENT_H
#define COMMENT_H
#include<QString>

class comment
{

QString titleComment;

QString namePerson;

QString date;

QString replyName;

QString replytitle;



public:
    comment();

    void setTitle(QString);

    QString getTitle();

    void setName(QString);

    QString getName();

    void setDate(QString);

    QString getDate();

    void set_replyName(QString);

    QString get_replyName();

    void set_replyTitle(QString);

    QString get_replyTitle();


    //void
};

#endif // COMMENT_H
