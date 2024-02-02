#include "admins.h"
admins::admins() {}



void admins::new_admin(QString Name)
{
//    for(int i=0;i<admins_name.length();i++)
//    {
//        if(admins_name[i]==Name)
//        {
////            قبلا اد شده
//         return;
//        }
//     if(i==admins_name.length()-1)
//        {
      admins_name.push_back(Name);
//        }

//    }

}

int admins::adlength(){

    return admins_name.length();
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

    for(int i=0;i<admins_name.length();i++)
    {
        if(admins_name[i]==name)
        {

            admins_name.remove(i);

         return "Admin removed successfully";
        }
     if(i==admins_name.length()-1)
        {
            return "No such person was found!";
        }


    }
}
