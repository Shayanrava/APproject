#include "organization.h"


organization::organization()
{

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
