#include "person.h"
Person::Person() {}

void Person::user_set_name(QString Name)
{
    username=Name;
}

QString Person::user_get_name()
{
    return username;
}

void Person::newTask(QString Date_finish,QString Task_work,QString Name_of_organ,QString NameOfProject)
{
    organ_task tmp;
    tmp.set_organName(Name_of_organ);
    tmp.set_workFinish(Date_finish);
    tmp.set_workTask(Task_work);
    tmp.set_projectName(NameOfProject);
    tasks.push_back(tmp);
}

organ_task Person::yourTask(int index)
{

    return tasks[index];

}
organ_task Person::yourTask(QString Project,QString Organ)
{
    for(int i=0;i<tasks.length();i++){
        if(tasks[i].get_projectName()==Project && tasks[i].get_organName()==Organ){
            return tasks[i];
        }

    }

    organ_task tmp;
    tmp.set_workFinish("");
    tmp.set_workTask("not found");
    return tmp;
}

void Person::setNameProject(QString OldName,QString Organ,QString NewName)
{
    for(int i=0;i<tasks.length();i++){
        if(tasks[i].get_projectName()==OldName && tasks[i].get_organName()==Organ){


            tasks[i].set_projectName(NewName);
        }

    }
}

void Person::setNameProject(int i,QString NewName)
{

            tasks[i].set_projectName(NewName);

}

void Person::setNameOrgan(QString NameProject,QString OldOrgan,QString NewOrgan){

    for(int i=0;i<tasks.length();i++){
        if(tasks[i].get_projectName()==NameProject && tasks[i].get_organName()==OldOrgan){


            tasks[i].set_organName(NewOrgan);
        }

    }

}

void Person::setNameOrgan(int i,QString NewNameOrgan){

     tasks[i].set_organName(NewNameOrgan);

}

void Person::setdatefinish(QString Name,QString Organ,QString NewTime){
    for(int i=0;i<tasks.length();i++){
        if(tasks[i].get_projectName()==Name && tasks[i].get_organName()==Organ){

            tasks[i].set_workFinish(NewTime);
        }

    }

}
void Person::setdatefinish(int i,QString NewTime){

     tasks[i].set_workFinish(NewTime);

}

void Person::setArchive(QString Name,QString Organ){
    for(int i=0;i<tasks.length();i++){
        if(tasks[i].get_projectName()==Name && tasks[i].get_organName()==Organ){

            tasks[i].set_workArchive();
        }

    }

}
void Person::setArchive(int i){

     tasks[i].set_workArchive();

}

void Person::setTask(QString Name,QString Organ,QString NewTask){
    for(int i=0;i<tasks.length();i++){
        if(tasks[i].get_projectName()==Name && tasks[i].get_organName()==Organ){

            tasks[i].set_workTask(NewTask);
        }

    }

}

void Person::setTask(int i,QString NewTask){

     tasks[i].set_workTask(NewTask);
}
