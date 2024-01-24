#ifndef ORGANIZATION_H
#define ORGANIZATION_H
#include"project.h"
#include"admins.h"
#include"team.h"
class organization
{
    QString name;
    QVector<project>organProjects;
    QVector<team>organTeams;
    admins organadmins;

public:
    organization();

    void addAdmin(QString);

    bool removeAdmin(QString);

    QString getAdmin(int);

    bool addProject();
};

#endif // ORGANIZATION_H
