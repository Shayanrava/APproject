#include "team_before.h"
#include "ui_team_before.h"
#include"change_member_task_in_team.h"
#include"view_member_task_in_team.h"
team_before::team_before(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::team_before)
{
    ui->setupUi(this);
}

team_before::~team_before()
{
    delete ui;
}

void team_before::on_change_member_task_pbn_clicked()
{
    change_member_task_in_team *cmtt=new change_member_task_in_team();
    cmtt->show();
}


void team_before::on_view_member_task_pbn_clicked()
{
    view_member_task_in_team *vtm=new view_member_task_in_team();
    vtm->show();
}

void team_before::setOrganName(QString Name){

    organName=Name;
}
void team_before::setTeamtName(QString Name){

    teamName=Name;
}

void team_before::setUserName(QString Name){

    UserName=Name;

// ----------------------------------------------------------

//    qDebug()<<projectName;

//    QFile f(projectName+".txt");
//    f.open(QIODevice::ReadOnly | QIODevice::Text);

//    QString reader(f.readAll());

//    f.close();
//    QStringList senderProject=reader.split("\n"),listadmin,listmem,listtask;
//    listtask=senderProject[0].split("  ");
//    listadmin=senderProject[2].split("  ");
//    listmem=senderProject[3].split("  ");



//    myproject.setName(projectName);
//    myproject.setOrgan(organName);
//    myproject.setTask(listtask[2]);
//    myproject.setTaskTime(listtask[3]);
//    myproject.setStatus(listtask[4]);

////     qDebug()<<listadmin[0]<<listadmin[1];

//    for(int i=0;i<listadmin.length();i++){



//        myproject.loadAdmin(listadmin[i]);


//    }

//    for(int i=0;i<listmem.length();i++){

//        myproject.loadMember(listmem[i]);

//    }

//if(UserName==listadmin[0]){
//    ui->lbladd->setStyleSheet("background-color:green;");
//     ui->lbldel->setStyleSheet("background-color:green;");
//     ui->lbldel->setText("access");
//     ui->lbladd->setText("access");
//}
//else{
//    ui->lbladd->setStyleSheet("background-color:red;");
//     ui->lbldel->setStyleSheet("background-color:red;");
//     ui->lbldel->setText("lock");
//     ui->lbladd->setText("lock");


//}


}
