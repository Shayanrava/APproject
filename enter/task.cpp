#include "task.h"

task::task()
{
    archive=true;
    date_finish="";
    task_work="";

}
void task::set_datefinis(QString time_finish){

    date_finish=time_finish;

}


bool task::get_archive(){

    return archive;
}
QString task::get_date_finish(){
    return date_finish;
}

QString task::get_task(){
    return task_work;
}


void task::set_taskwork(QString tasks){

    task_work=tasks;
}

void task::set_archive(){

  archive=!archive;
}

bool task::removeComment(QString Name,QString Title,QString Time){
    for(int i=0;i<comments.length();i++){

        if(comments[i].getTitle()==Title&&comments[i].getName()==Name&&comments[i].getDate()==Time){
            comments.remove(i);
            return true;
        }

        else{
            if(i==comments.length()-1){
                return false;
            }
        }
    }

}

bool task::removeComment(int Index){

    if(Index<0&&Index>comments.length()){

        return false;
    }

            comments.remove(Index);
            return true;

}

void task::addComment(QString Name,QString Title,QString Time,QString RepPerson,QString RepTitle){

    comment tmp;
    tmp.setDate(Time);
    tmp.setName(Name);
    tmp.setTitle(Title);
    tmp.set_replyName(RepPerson);
    tmp.set_replyTitle(RepTitle);

    comments.push_back(tmp);


}

comment task::getComment(int Index){

return comments[Index];

}
