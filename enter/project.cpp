#include "project.h"

project::project() {}

//task task_of_projects;


//admins admins_of_projects;


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

void project::newAdmin(QString NewName)
{
    for(int i=0;i<personels.length();i++){

        if(personels[i].user_get_name()==NewName){

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

void project::addMember(QString UserName,QString TaskWork,QString DateFinish)
{

    for(int i=0;i<personels.length();i++){

        if(personels[i].user_get_name()==UserName){
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
            outStream<<TaskWork<<"  ";
            outStream<<DateFinish<<"  ";
            outStream<<true<<"  ";

             file.close();

        Person tmp;

       tmp.newTask( DateFinish,TaskWork,organName,projectName);
tmp.user_set_name(UserName);

personels.push_back(tmp);

    }



}

void project::removeMember(QString Name)
{


    for(int i=0;i<personels.length();i++)
    {
        if(personels[i].user_get_name()==Name)
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

                 for(int j=i;j<listuser.length()-5;j++){

                     listuser[j]=listuser[j+5];
                 }
                 break;

             }


         }


         if(file.open(QIODevice::WriteOnly | QIODevice::Text)){

             for(int i=0;i<listuser.length()-5;i++){

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
    return personels[Index].user_get_name();
}

void project::setTaskMember(QString Name,QString NewTask){


    for(int i=0;i<personels.length();i++)
    {
        if(personels[i].user_get_name()==Name)
        {

            personels[i].setTask(projectName,organName,NewTask);

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
        if(personels[i].user_get_name()==Name)
        {

            personels[i].setdatefinish(projectName,organName,NewTime);

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


