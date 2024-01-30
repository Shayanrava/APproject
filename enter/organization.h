#ifndef ORGANIZATION_H
#define ORGANIZATION_H
#include"project.h"
#include"admins.h"
#include"team.h"
class organization
{
    QString nameOrgan;
    QVector<project>organProjects;
    QVector<team>organTeams;
    admins organadmins;

public:
    organization();
    void setNameOrgan(QString Name);
    QString getNameOrgan();
    //----------------------------------------------------------
    //----------------------------------------------------------
    //----------------------------------------------------------
    void addAdmin(QString);

    bool removeAdmin(QString);

    QString getAdmin(int);

    //----------------------------------------------------------
    //----------------------------------------------------------
    //----------------------------------------------------------

    void addProject(QString,QString,QString);

    bool removeProject(QString);

    QString getProjectName(int);

    //----------------------------------------------------------

    bool setStatus(QString,QString);

    QString getStatus(QString);
     //----------------------------------------------------------

    bool setProjectTask(QString,QString);

    QString getProjectTask(QString);

    bool setProjectTimeTask(QString,QString);

    QString getProjectTimeTask(QString);

    bool getTaskArchive(QString Name);

    bool setTaskArchive(QString Name);
    //----------------------------------------------------------
    bool addMember(QString Name,QString userName,QString taskWork,QString dateFinish);

    bool removeMember(QString Name,QString NameMember);

    QString memberFind(QString Name,int Index);

    bool setTaskMember(QString Name,QString NamePerson,QString NameTask);

    bool setTimeMember(QString Name,QString NamePerson,QString NewTime);
    //------------------------------------------------------------
    comment getComment(QString Name,int Index);
};

#endif // ORGANIZATION_H
//
