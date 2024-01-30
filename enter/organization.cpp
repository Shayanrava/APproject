#include "organization.h"


organization::organization()
{

}
//----------------------------------------------------------
//----------------------------------------------------------
//----------------------------------------------------------
void organization::setNameOrgan(QString Name)
{
    nameOrgan=Name;
}


QString organization::getNameOrgan()
{
    return nameOrgan;
}

//----------------------------------------------------------
//----------------------------------------------------------
//----------------------------------------------------------
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
//----------------------------------------------------------
//----------------------------------------------------------
//----------------------------------------------------------
void organization::addProject(QString ProjectName,QString TitleTask,QString TimeTask)
{
    project tmp;
    tmp.setName(ProjectName);
    tmp.setTask(TitleTask);
    tmp.setTaskTime(TimeTask);
    tmp.setOrgan(nameOrgan);
    tmp.setStatus("");
    organProjects.push_back(tmp);
}

bool organization::removeProject(QString Name)
{
    for(int i=0;i<organProjects.length();i++)
    {
        if(organProjects[i].getName()==Name)
        {
            organProjects.remove(i);
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

QString organization::getProjectName(int Index)
{
    return organProjects[Index].getName();
}
//----------------------------------------------------------
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
//----------------------------------------------------------

bool organization::setProjectTask(QString Name,QString NewTask)
{
   for(int i=0;i<organProjects.length();i++)
   {
       if(organProjects[i].getName()==Name)
       {
           organProjects[i].setTask(NewTask);
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

QString organization::getProjectTask(QString Name)
{
   for(int i=0;i<organProjects.length();i++)
   {
       if(organProjects[i].getName()==Name)
       {
           return organProjects[i].getTaskTitle();
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

bool organization::setProjectTimeTask(QString Name,QString NewTime)
{
   for(int i=0;i<organProjects.length();i++)
   {
       if(organProjects[i].getName()==Name)
       {
           organProjects[i].setTaskTime(NewTime);
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


QString organization::getProjectTimeTask(QString Name)
{
    for(int i=0;i<organProjects.length();i++)
    {
        if(organProjects[i].getName()==Name)
        {
            return organProjects[i].getTaskTime();
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

bool organization::getTaskArchive(QString Name)
{
    for(int i=0;i<organProjects.length();i++)
    {
        if(organProjects[i].getName()==Name)
        {
            return organProjects[i].getTaskArchive();
        }
    }
}


bool organization::setTaskArchive(QString Name)
{
    for(int i=0;i<organProjects.length();i++)
    {
        if(organProjects[i].getName()==Name)
        {
            organProjects[i].setTaskArchive();
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
//----------------------------------------------------------
bool organization::addMember(QString Name,QString userName,QString taskWork,QString dateFinish)
{
    for(int i=0;i<organProjects.length();i++)
    {
        if(organProjects[i].getName()==Name)
        {
            organProjects[i].addMember(userName,taskWork,dateFinish);
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

bool organization::removeMember(QString Name,QString NameMember)
{
    for(int i=0;i<organProjects.length();i++)
    {
        if(organProjects[i].getName()==Name)
        {
            organProjects[i].removeMember(NameMember);
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

QString organization::memberFind(QString Name,int Index)
{
    for(int i=0;i<organProjects.length();i++)
    {
        if(organProjects[i].getName()==Name)
        {
            return organProjects[i].memberFind(Index);
        }
    }
}

bool organization::setTaskMember(QString Name,QString NamePerson,QString NameTask)
{
    for(int i=0;i<organProjects.length();i++)
    {
        if(organProjects[i].getName()==Name)
        {
            organProjects[i].setTaskMember(NamePerson,NameTask);
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

bool organization::setTimeMember(QString Name,QString NamePerson,QString NewTime)
{
    for(int i=0;i<organProjects.length();i++)
    {
        if(organProjects[i].getName()==Name)
        {
            organProjects[i].setTimeMember(NamePerson,NewTime);
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

comment organization::getComment(QString Name,int Index)
{
    for(int i=0;i<organProjects.length();i++)
    {
        if(organProjects[i].getName()==Name)
        {
            return organProjects[i].getComment(Index);
        }
    }
}

bool organization::removeComment(QString Name,QString Sender,QString Title,QString Time)
{
     for(int i=0;i<organProjects.length();i++)
     {
         if(organProjects[i].getName()==Name)
         {
            return  organProjects[i].removeComment(Sender,Title,Time);
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

bool organization::removeComment(QString Name,int Index)
{
    for(int i=0;i<organProjects.length();i++)
    {
        if(organProjects[i].getName()==Name)
        {
            return  organProjects[i].removeComment(Index);
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

bool organization::addComment(QString Name,QString Sender,QString Title,QString Time,QString RepPerson,QString RepTitle)
{
    for(int i=0;i<organProjects.length();i++)
    {
        if(organProjects[i].getName()==Name)
        {
            organProjects[i].addComment(Sender,Title,Time,RepPerson,RepTitle);
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

bool organization::newAdminProject(QString Name,QString NameAdmin)
{
    for(int i=0;i<organProjects.length();i++)
    {
        if(organProjects[i].getName()==Name)
        {
            organProjects[i].newAdmin(NameAdmin);
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

bool organization::removeAdminProject(QString Name,QString NameAdmin)
{
    for(int i=0;i<organProjects.length();i++)
    {
        if(organProjects[i].getName()==Name && organProjects[i].removeAdmin(NameAdmin)=="Admin removed successfully")
        {
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

QString organization::adminFindProject(QString Name,int Index)
{
    for(int i=0;i<organProjects.length();i++)
    {
        if(organProjects[i].getName()==Name)
        {
            return organProjects[i].adminFind(Index);
        }
    }
}

bool organization::addAdminTeam(QString Name,QString NameAdmin)
{
    for(int i=0;i<organTeams.length();i++)
    {
        if(organTeams[i].getName()==Name)
        {
            return  organTeams[i].addAdminTeam(NameAdmin);
        }
        else
        {
            if(i==organTeams.length()-1)
            {
                return false;
            }
        }
    }
}

bool organization::removeAdminTeam(QString Name,QString NameAdmin)
{
    for(int i=0;i<organTeams.length();i++)
    {
        if(organTeams[i].getName()==Name)
        {
            return  organTeams[i].removeAdminTeam(NameAdmin);
        }
        else
        {
            if(i==organTeams.length()-1)
            {
                return false;
            }
        }
    }
}

QString organization::adminsFindTeam(QString Name,int Index)
{
    for(int i=0;i<organTeams.length();i++)
    {
        if(organTeams[i].getName()==Name)
        {
            return  organTeams[i].adminsTeam(Index);
        }
    }
}

bool organization::setTaskTimeTeam(QString Name,QString Time)
{
    for(int i=0;i<organTeams.length();i++)
    {
        if(organTeams[i].getName()==Name)
        {
            organTeams[i].setTaskTime(Time);
            return true;
        }
        else
        {
            if(i==organTeams.length()-1)
            {
                return false;
            }
        }
    }
}

bool organization::setTaskTeam(QString Title,QString Name)
{
    for(int i=0;i<organTeams.length();i++)
    {
        if(organTeams[i].getName()==Name)
        {
            organTeams[i].setTaskTitle(Title);
            return true;
        }
        else
        {
            if(i==organTeams.length()-1)
            {
                return false;
            }
        }
    }
}

QString organization::getTitleTeam(QString Name)
{
    for(int i=0;i<organTeams.length();i++)
    {
        if(organTeams[i].getName()==Name)
        {
            return  organTeams[i].getTaskTitle();
        }
    }
}

QString organization::getTimeTeam(QString Name)
{
    for(int i=0;i<organTeams.length();i++)
    {
        if(organTeams[i].getName()==Name)
        {
            return  organTeams[i].getTaskTime();
        }
    }
}
