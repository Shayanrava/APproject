#ifndef TEAM_H
#define TEAM_H


#include "project.h"
#include"admins.h"

class team
{
    
    admins teamLeaders;

    task taskTeam;

    QVector<QString>personels;




    
public:
    team();
// --------------------------------------
    bool addAdminTeam(QString);

    bool removeAdminTeam(QString);

    QString adminsTeam(int);
// ----------------------------------
    void setTaskTime(QString );

    void setTaskTitle(QString);

    void setTaskArchive();

    bool getTaskArchive();

    QString getTaskTitle();

    QString getTaskTime();

//----------------------------------------
   bool addMember(QString);

    QString getMember(int);

    bool removeMember(QString);


};

#endif // TEAM_H
