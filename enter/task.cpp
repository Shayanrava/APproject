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
