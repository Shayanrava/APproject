#include "project.h"

project::project() {}

//task task_of_projects;


//admins admins_of_projects;
void project::setStatus(QString Status)
{
status=Status;
}

QString project::getStatus()
{
return status;
}

void project::setName(QString Name)
{
projectName=Name;
}

QString project::getName()
{
return projectName;
}

void project::setOrgan(QString Name)
{
organName=Name;
}

QString project::getOrgan()
{
return organName;
}

void project::setTask(QString TaskString)
{
task_of_projects.set_taskwork(TaskString);
}

void project::setTaskTime(QString Time)
{
task_of_projects.set_datefinis(Time);
}

void project::setTaskArchive()
{
task_of_projects.set_archive();
}

QString project::getTaskTitle()
{
return task_of_projects.get_task();
}

QString project::getTaskTime()
{
return task_of_projects.get_date_finish();
}

bool project::getTaskArchive()
{
return task_of_projects.get_archive();
}

void project::loadAdmin(QString Name){

admins_of_projects.new_admin(Name);
}

void project::newAdmin(QString NewName)
{
for(int i=0;i<personels.length();i++){

    if(personels[i]==NewName){

       admins_of_projects.new_admin(NewName);

       return;
    }



}


}

QString project::removeAdmin(QString Remove)
{
return admins_of_projects.remove(Remove);

}

QString project::adminFind(int Index)
{
return admins_of_projects.get_name(Index);
}

void project::addMember(QString UserName)
{

for(int i=0;i<personels.length();i++){

    if(personels[i]==UserName){
        return;
    }
}


QString address=UserName+".txt";

//    organ  projectname  task  time  archive

QFile file(address);
if(file.open(QIODevice::WriteOnly | QIODevice::Text|QIODevice::Append)){

       QTextStream outStream(&file);


        outStream<<organName<<"  ";
        outStream<<projectName<<"  ";
        outStream<<"null"<<"  ";
        outStream<<"null"<<"  ";
        outStream<<true<<"  ";

         file.close();

         personels.push_back(UserName);

}



}

void project::loadMember(QString Name){
personels.push_back(Name);
}

void project::removeMember(QString Name)
{


for(int i=0;i<personels.length();i++)
{
    if(personels[i]==Name)
    {

        personels.remove(i);

        break;

         }


    if(i==personels.length()-1){

        return;
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

         if(listuser[i]==organName&&listuser[i+1]==projectName){


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
         return;
     }



}



}

QString project::memberFind(int Index)
{
return personels[Index];
}

void project::setTaskMember(QString Name,QString NewTask){


for(int i=0;i<personels.length();i++)
{
    if(personels[i]==Name)
    {

        break;

         }


    if(i==personels.length()-1){

        return;
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

         if(listuser[i] == organName  &&  listuser[i+1] == projectName){



                 listuser[i+2]=NewTask;

             break;

         }


     }


     if(file.open(QIODevice::WriteOnly | QIODevice::Text)){

         for(int i=0;i<listuser.length();i++){

               QTextStream outStream(&file);

               outStream<<listuser[i]<<"  ";


         }

         file.close();
         return;
     }



}



}



void project::setTimeMember(QString Name,QString NewTime){


for(int i=0;i<personels.length();i++)
{
    if(personels[i]==Name)
    {


        break;

         }


    if(i==personels.length()-1){

        return;
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

         if(listuser[i] == organName  &&  listuser[i+1] == projectName){



                 listuser[i+3]=NewTime;

             break;

         }


     }


     if(file.open(QIODevice::WriteOnly | QIODevice::Text)){

         for(int i=0;i<listuser.length();i++){

               QTextStream outStream(&file);

               outStream<<listuser[i]<<"  ";


         }

         file.close();
         return;
     }

}


}

int project::peronelslength(){

    return personels.length();
}

int project::adminlength(){

    return admins_of_projects.adlength();
}



comment project::getComment(int Index){

return task_of_projects.getComment(Index);
}

bool project::removeComment(QString Name,QString Title,QString Time){

 return task_of_projects.removeComment(Name,Title,Time);
}
bool project::removeComment(int Index){

return task_of_projects.removeComment(Index);
}

void project::addComment(QString Name,QString Title,QString Time,QString RepPerson,QString RepTitle){


task_of_projects.addComment(Name,Title,Time,RepPerson,RepTitle);

}






