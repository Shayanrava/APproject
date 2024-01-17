#include "admins.h"
admins::admins() {}
void admins::new_admin(QString Name)
{
    admins::admins_name.push_back(Name);
}

QString admins::get_name(int index)
{
    if(index>=admins_name.length()||index<0)
    {
        return "out of range index!";
    }
    return admins_name[index];
}

QString admins::remove(QString name)
{
    bool found=0;
    for(int i=0;i<admins_name.length();i++)
    {
        if(admins_name[i]==name)
        {
            found==1;
            admins_name.remove(i);
            break;
        }
        if(i==admins_name.length()-1&&found==0)
        {
            return "No such person was found!";
        }
    }
}
