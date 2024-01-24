#ifndef ORGANIZATION_H
#define ORGANIZATION_H
#include"project.h"
#include"admins.h"
#include"team.h"
class organization
{
    QVector<project>organProjects;
    QVector<team>organTeams;
    admins organadmins;

public:
    organization();

    void addAdmin(QString);

};

#endif // ORGANIZATION_H
