#include "team.h"

team::team()
{

}



void team::addAdminTeam(QString Name){

    teamLeaders.new_admin(Name);


}

void team::removeAdminTeam(QString Name){

    teamLeaders.remove(Name);


}


QString team::adminsTeam(int Index){

return teamLeaders.get_name(Index);

}

void team::setNameProject(QString Name){

    teamProject.setName(Name);
}

QString team::getNameProject(){

   return teamProject.getName();

}

void team::setOrganProject(QString Name){

    teamProject.setOrgan(Name);
}

QString team::getOrganProject(){

   return teamProject.getOrgan();

}


void team::setTaskProject(QString Time){

    teamProject.setTaskTime(Time);

}

void team::setTaskTimeProject(QString TaskString){

    teamProject.setTask(TaskString);

}

void team::setTaskArchiveProject(){

    teamProject.setTaskArchive();
}

QString team::getTaskTitleProject(){

    return teamProject.getTaskTitle();
}

QString team::getTaskTimeProject(){

     return teamProject.getTaskTime();
}

bool team::getTaskArchiveProject(){

    return teamProject.getTaskArchive();
}


































