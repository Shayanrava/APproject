#include "comment.h"

comment::comment()
{

}

void comment::setTitle(QString TitleName)
{
    titleComment=TitleName;
}

QString comment::getTitle()
{
    return titleComment;
}

void comment::setName(QString Name)
{
    namePerson=Name;
}

QString comment::getName()
{
    return namePerson;
}

void comment::setDate(QString Datee)
{
    date=Datee;
}

QString comment::getDate()
{
    return date;
}


void comment::set_replyName(QString repName)
{
    replyName=repName;
}


QString comment::get_replyName()
{
    return replyName;
}

void comment::set_replyTitle(QString repTitle)
{
    replytitle=repTitle;
}

QString comment::get_replyTitle()
{
    return replytitle;
}
