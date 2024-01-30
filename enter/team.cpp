#include "team.h"

team::team()
{

}



bool team::addAdminTeam(QString Name){

    for(int i=0;i<personels.length();i++){

           if(personels[i]==Name){

               teamLeaders.new_admin(Name);

               return true;
            }
           else if(personels.length()-1){
               return false;
           }


    }

}

bool team::removeAdminTeam(QString Name){


   if(teamLeaders.remove(Name)== "Admin removed successfully"){
       return true;

   }

   else{

       return false;
   }


}


QString team::adminsTeam(int Index){

return teamLeaders.get_name(Index);

}

void team::setTaskTime(QString NewTime){

    taskTeam.set_datefinis(NewTime);
}

void team::setTaskTitle(QString NewTitle){

    taskTeam.set_taskwork(NewTitle);
}

void team:: setTaskArchive(){
     taskTeam.set_archive();
}

bool team::getTaskArchive(){

   return taskTeam.get_archive();
}

QString team::getTaskTitle(){

    return taskTeam.get_task();
}

QString team::getTaskTime(){

     return taskTeam.get_date_finish();
}




bool team::addMember(QString UserName){
     QString address=UserName+".txt";
      QFile file(address);

       if(file.open(QIODevice::WriteOnly | QIODevice::Text)){
           personels.push_back(UserName);
           return true;
       }

       else{

           return false;
       }

}

QString team::getMember(int Index){
    if(Index<0||Index>personels.length()){
        return "out of range index!!";
    }

    return personels[Index];

}

bool team::removeMember(QString Name){

    for(int i=0;i<personels.length();i++){

        if(personels[i]==Name){
            personels.remove(i);
            return true;
        }

        else{
            if(i==personels.length()){
                return false;
            }
        }


    }

}


comment team::getComment(int Index){

    return taskTeam.getComment(Index);
}

bool team::removeComment(QString Name,QString Title,QString Time){

     return taskTeam.removeComment(Name,Title,Time);
}
bool team::removeComment(int Index){

    return taskTeam.removeComment(Index);
}

void team::addComment(QString Name,QString Title,QString Time,QString RepPerson,QString RepTitle){


    taskTeam.addComment(Name,Title,Time,RepPerson,RepTitle);

}

void team::setName(QString Name)
{
    nameTeam=Name;
}

QString team::getName()
{
    return nameTeam;
}


