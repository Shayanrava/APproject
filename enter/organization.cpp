#include "organization.h"


organization::organization()
{

}

void organization::addProject(QString ProjectName,QString TitleTask,QString TimeTask)
{
    project tmp;
    tmp.setName(ProjectName);
    tmp.setTask(TitleTask);
    tmp.setTaskTime(TimeTask);
    tmp.setOrgan(name);
    organProjects.push_back(tmp);
}

bool organization::removeProject(QString Name)
{
    for(int i=0;i<organProjects.length();i++)
    {
        if(organProjects[i].getName()==Name)
        {
            organProjects.remove(i);
            return 1;
        }
        else
        {
            if(i==organProjects.length()-1)
            {
                return false;
            }
        }
    }
}

QString organization::getProjectName(int Index)
{
    return organProjects[Index].getName();
}

bool organization::setStatus(QString Name,QString NewStatus)
{
    for(int i=0;i<organProjects.length();i++)
    {
        if(organProjects[i].getName()==Name)
        {
            organProjects[i].setStatus(NewStatus);
            return true;
        }
        else
        {
            if(i==organProjects.length()-1)
            {
                return false;
            }
        }
    }
}

QString organization::getStatus(QString Name)
{
    for(int i=0;i<organProjects.length();i++)
    {
        if(organProjects[i].getName()==Name)
        {
            return organProjects[i].getStatus();
        }
        else
        {
            if(i==organProjects.length()-1)
            {
                return "not found!";
            }
        }
    }
}



void organization::addAdmin(QString Admin)
{
    organadmins.new_admin(Admin);
}

bool organization::removeAdmin(QString Admin)
{
    if(organadmins.remove(Admin)=="Admin removed successfully")
    {
        return true;
    }
    else
    {
        return false;
    }
}

QString organization::getAdmin(int Index)
{
    if(organadmins.get_name(Index)!="out of range index!")
    {
        return organadmins.get_name(Index);
    }
    else
    {
        return "out of range index!";
    }
}
