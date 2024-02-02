#include "team.h"

team::team()
{

}



bool team::addAdminTeam(QString Name){



               teamLeaders.new_admin(Name);



}

bool team::removeAdminTeam(QString Name){


   teamLeaders.remove(Name);




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

// void team:: setTaskArchive(){
//      taskTeam.set_archive();
// }

// bool team::getTaskArchive(){

//    return taskTeam.get_archive();
// }

QString team::getTaskTitle(){

    return taskTeam.get_task();
}

QString team::getTaskTime(){

     return taskTeam.get_date_finish();
}




bool team::addMember(QString UserName){

    for(int i=0;i<personels.length();i++){

        if(personels[i]==UserName){
            return 0;
        }
    }


    QString address=UserName+".txt";

    //    organ  projectname  task  time  archive

    QFile file(address);
    if(file.open(QIODevice::WriteOnly | QIODevice::Text|QIODevice::Append)){

           QTextStream outStream(&file);


            outStream<<nameOrgan<<"  ";
            outStream<<nameTeam<<"  ";
            outStream<<"null"<<"  ";
            outStream<<"null"<<"  ";
            outStream<<true<<"  ";

             file.close();

             personels.push_back(UserName);

    }



}

QString team::getMember(int Index){
    if(Index<0||Index>personels.length()){
        return "out of range index!!";
    }

    return personels[Index];

}

bool team::removeMember(QString Name){

    for(int i=0;i<personels.length();i++)
    {
        if(personels[i]==Name)
        {

            personels.remove(i);

            break;

             }
    }


    QString address=Name+".txt";

     QFile file(address);


     if(file.open(QIODevice::ReadOnly | QIODevice::Text)){

         QString useread( file.readAll());

         file.close();

         QStringList listuser;

         listuser=useread.split("  ");



         for(int i=0;i<listuser.length();i++){

             if(listuser[i]==nameOrgan&&listuser[i+1]==nameTeam){


                 listuser.remove(i,5);



                 break;

             }


         }


         if(file.open(QIODevice::WriteOnly | QIODevice::Text)){

             for(int i=0;i<listuser.length();i++){

                   QTextStream outStream(&file);

                   outStream<<listuser[i]<<"  ";


             }

             file.close();
             return 1;
         }



    }



}


// comment team::getComment(int Index){

//     return taskTeam.getComment(Index);
// }

// bool team::removeComment(QString Name,QString Title,QString Time){

//      return taskTeam.removeComment(Name,Title,Time);
// }
// bool team::removeComment(int Index){

//     return taskTeam.removeComment(Index);
// }

// void team::addComment(QString Name,QString Title,QString Time,QString RepPerson,QString RepTitle){


//     taskTeam.addComment(Name,Title,Time,RepPerson,RepTitle);

// }

void team::setName(QString Name)
{
    nameTeam=Name;
}

QString team::getName()
{
    return nameTeam;
}

void team::setOrgan(QString Name)
{
nameOrgan=Name;
}

QString team::getOrgan()
{
return nameOrgan;
}

