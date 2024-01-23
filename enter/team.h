#ifndef TEAM_H
#define TEAM_H


#include "project.h"
#include"admins.h"

class team
{
    
    admins teamLeaders;

    project teamProject;
    
public:
    team();
// --------------------------------------
    void addAdminTeam(QString);

    void removeAdminTeam(QString);

    QString adminsTeam(int);
// ----------------------------------
    void setNameProject(QString);

    QString getNameProject();

    void setOrganProject(QString);

    QString getOrganProject();

//    ------------------------------------

    void setTaskProject(QString);

    void setTaskTimeProject(QString );

    void setTaskArchiveProject();

    QString getTaskTitleProject();

    QString getTaskTimeProject();

    bool getTaskArchiveProject();

//   ---------------------------------

    void addMember(QString,QString,QString);

    void removeMember(QString);

    QString memberFind(int);

    void setTaskMember(QString,QString);

    void setTimeMember(QString,QString);


};

#endif // TEAM_H
