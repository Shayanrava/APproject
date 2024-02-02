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
    QFile f2(teamName+".txt");
    f2.open(QIODevice::ReadOnly | QIODevice::Text);

    QString reader(f2.readAll());

    f2.close();
    QStringList senderProject=reader.split("\n"),listadmin,listmem,listtask;
    listtask=senderProject[0].split("  ");
    listadmin=senderProject[1].split("  ");
    listmem=senderProject[2].split("  ");

// -----------------------------------------------------------------------------------------
    QString name=ui->led_namechange->text(),newtime=ui->led_chan_tasktimemem->text(),newtask=ui->led_chan_taskmem->text();

    if(name==""){
        ui->led_namechange->setStyleSheet("background-color:red;");
        ui->led_namechange->setText("The name cannot be empty");
        QTimer::singleShot(2000,[=](){
           ui->led_namechange->setStyleSheet("background-color:white;");
            ui->led_namechange->setText("");

        });
        return;
    }
    if(newtime==""||newtask==""){
        ui->led_chan_taskmem->setStyleSheet("background-color:red;");
         ui->led_chan_tasktimemem->setStyleSheet("background-color:red;");

        ui->led_chan_taskmem->setText("The new time and new task cannot be empty");
        ui->led_chan_tasktimemem->setText("The new time and new task cannot be empty");
        QTimer::singleShot(2000,[=](){
           ui->led_chan_taskmem->setStyleSheet("background-color:white;");
            ui->led_chan_taskmem->setText("Enter task");

            ui->led_chan_tasktimemem->setStyleSheet("background-color:white;");
             ui->led_chan_tasktimemem->setText("Enter time");

        });
        return;
    }

    for(int i=0;i<listmem.length();i++){
        if(listmem[i]==name){
            break;
        }
        if(i==listmem.length()-1){
            ui->led_namechange->setStyleSheet("background-color:red;");
            ui->led_namechange->setText("user not found attend in project");
            QTimer::singleShot(2000,[=](){
               ui->led_namechange->setStyleSheet("background-color:white;");
                ui->led_namechange->setText("");

            });
            return;
        }
    }

    QFile f(name+".txt");


    f.open(QIODevice::ReadOnly | QIODevice::Text);

    QString readuser(f.readAll());

    f.close();
    QStringList senduser=readuser.split("  ");

    for(int i=0;i<senduser.length();i++){


        if(senduser[i]==organName&&senduser[i+1]==teamName){

            senduser[i+2]=newtask;
            senduser[i+3]=newtime;

           break;
        }


    }


    f.resize(0);

    f.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream tst(&f);

    for(int i=0;i<senduser.length();i++){

     tst<<senduser[i]<<"  ";


    }
        ui->led_namechange->setStyleSheet("background-color:green;");
        QTimer::singleShot(2000,[=](){
           ui->led_namechange->setStyleSheet("background-color:white;");
            ui->led_namechange->setText("");

        });


}


void team_before::on_view_member_task_pbn_clicked()
{
    QFile f2(teamName+".txt");
    f2.open(QIODevice::ReadOnly | QIODevice::Text);

    QString reader(f2.readAll());

    f2.close();
    QStringList senderProject=reader.split("\n"),listadmin,listmem,listtask;
    listtask=senderProject[0].split("  ");
    listadmin=senderProject[1].split("  ");
    listmem=senderProject[2].split("  ");
// -----------------------------------------------------------------------------------------
     QString name=ui->led_nameforview->text();

     if(name==""){
         ui->led_nameforview->setStyleSheet("background-color:red;");
         ui->led_nameforview->setText("The name cannot be empty");
         QTimer::singleShot(2000,[=](){
            ui->led_nameforview->setStyleSheet("background-color:white;");
             ui->led_nameforview->setText("");

         });
         return;
     }
     // -----------------------------------------------------------------------------------------

     for(int i=0;i<listmem.length();i++){
         if(listmem[i]==name){
             break;
         }
         if(i==listmem.length()-1){
             ui->led_nameforview->setStyleSheet("background-color:red;");
             ui->led_nameforview->setText("user not found attend in project");
             QTimer::singleShot(2000,[=](){
                ui->led_nameforview->setStyleSheet("background-color:white;");
                 ui->led_nameforview->setText("");

             });
             return;
         }
     }
     // -----------------------------------------------------------------------------------------

     QFile f(name+".txt");


     f.open(QIODevice::ReadOnly | QIODevice::Text);

     QString readuser(f.readAll());

     f.close();
     QStringList senduser=readuser.split("  ");

     for(int i=0;i<senduser.length();i++){


         if(senduser[i]==organName&&senduser[i+1]==teamName){
           ui->led_view_taskmem->setText("task : "+senduser[i+2]+"    time : "+senduser[i+3]);
            break;
         }


     }
}

void team_before::on_change_team_task_pbn_clicked()
{

    QFile f2(teamName+".txt");
    f2.open(QIODevice::ReadOnly | QIODevice::Text);

    QString reader(f2.readAll());

    f2.close();
    QStringList senderProject=reader.split("\n"),listadmin,listmem,listtask;
    listtask=senderProject[0].split("  ");
    listadmin=senderProject[1].split("  ");
    listmem=senderProject[2].split("  ");

// -------------------------------------------------------------------------------------------------------
    QString time=ui->led_chan_taskteam->text();
    QString title=ui->led_chan_tasktime->text();
    if(title==""){

       ui->led_chan_taskteam->setStyleSheet("background-color:red;");


       ui->led_chan_taskteam->setText("The task or cannot be empty");

       QTimer::singleShot(3000,[=](){
          ui->led_chan_taskteam->setStyleSheet("background-color:white;");
           ui->led_chan_taskteam->setText("Enter task");

       });

       return;
   }
    if(time==""){

       ui->led_chan_tasktime->setStyleSheet("background-color:red;");

       ui->led_chan_tasktime->setText("The time cannot be empty");

       QTimer::singleShot(3000,[=](){
          ui->led_chan_tasktime->setStyleSheet("background-color:white;");
           ui->led_chan_tasktime->setText("Enter time");

       });

       return;
   }

//-----------------------------------------------------------------------------------------------
    listtask[2]=title;

    listtask[3]=time;



    f2.open(QIODevice::WriteOnly | QIODevice::Text);


    QTextStream out(&f2);

    for(int i=0;i<listtask.length();i++){
if(listtask[i]==""){
continue;
}
        out<<listtask[i]<<"  ";
    }
    out<<"\n";



     for(int i=0;i<listadmin.length();i++){

         out<<listadmin[i]<<"  ";
     }

      out<<"\n";

      for(int i=0;i<listmem.length();i++){

          out<<listmem[i]<<"  ";
      }
       out<<"\n";
       f2.close();

       myteam.setTaskTitle(title);
       myteam.setTaskTime(time);

         ui->led_chan_taskteam->setStyleSheet("background-color:green;");

        ui->led_chan_tasktime->setStyleSheet("background-color:green;");

       QTimer::singleShot(3000,[=](){
           ui->led_chan_taskteam->setStyleSheet("background-color:white;");

          ui->led_chan_tasktime->setStyleSheet("background-color:white;");

           ui->led_chan_taskteam->setText("Enter task");
           ui->led_chan_tasktime->setText("Enter time");

       });

}


void team_before::on_view_task_pbn_clicked()
{
 ui->led_view_taskteam->setText("task: "+myteam.getTaskTitle()+"      time: "+myteam.getTaskTime());

}


void team_before::on_view_admins_pbn_clicked()
{
    for(int i=0;i<myteam.adminlength();i++){
        if(myteam.adminsTeam(i)!=""){

            ui->ted_view_adm->append(myteam.adminsTeam(i));
        }


    }
}


void team_before::on_view_member_pbn_clicked()
{
    for(int i=0;i<myteam.peronelslength();i++){
        if(myteam.getMember(i)!=""){

            ui->ted_view_mem->append(myteam.getMember(i));
        }


    }
}


void team_before::on_add_admin_to_team_pbn_clicked()
{
    QFile f2(teamName+".txt");
    f2.open(QIODevice::ReadOnly | QIODevice::Text);

    QString reader(f2.readAll());

    f2.close();
    QStringList senderProject=reader.split("\n"),listadmin,listmem,listtask;
    listtask=senderProject[0].split("  ");
    listadmin=senderProject[1].split("  ");
    listmem=senderProject[2].split("  ");
//------------------------------------------------
    if(UserName!=listadmin[0]){
        return;
    }


//------------------------------------------------

    QString add=ui->led_add_adm->text();
    if(add==""){

       ui->led_add_adm->setStyleSheet("background-color:red;");

       ui->led_add_adm->setText("The  name cannot be empty");

       QTimer::singleShot(4000,[=](){
          ui->led_add_adm->setStyleSheet("background-color:white;");
           ui->led_add_adm->setText("");

       });

       return;
   }
//------------------------------------------------------------------------------------

    QFile f("userinformation.txt");

    f.open(QIODevice::ReadOnly | QIODevice::Text);
 QString useread( f.readAll());
 f.close();

 QStringList listuser;
 listuser=useread.split(" ");

 // سه تا ورودی تو ساین آپ گرفتیم دیگه
 for(int i=0;i<listuser.length();i+=3){
     if(add==listuser[i]){

     break;
     }

     else{

         if(i==listuser.length()-1){
         ui->led_add_adm->setStyleSheet("background-color:red;");

          ui->led_add_adm->setText("The username not found");

          QTimer::singleShot(4000,[=](){
             ui->led_add_adm->setStyleSheet("background-color:white;");
              ui->led_add_adm->setText("");


          });
          return;
         }

     }

}
 //------------------------------------------------------------------------------------
for(int i=0;i<listadmin.length();i++){

    if(listadmin[i]==add){
        return;
    }

}
//------------------------------------------------
myteam.addAdminTeam(add);


f2.open(QIODevice::WriteOnly | QIODevice::Text);
f2.resize(0);
QTextStream out(&f2);

for(int i=0;i<listtask.length();i++){

    out<<listtask[i]<<"  ";
}
out<<"\n";


 for(int i=0;i<listadmin.length();i++){
if(listadmin[i]==""){
continue;

}
     out<<listadmin[i]<<"  ";
 }
 out<<add<<"  ";
  out<<"\n";

  for(int i=0;i<listmem.length();i++){

      out<<listmem[i]<<"  ";
  }
   out<<"\n";
   f2.close();

   ui->led_add_adm->setStyleSheet("background-color:green;");

   QTimer::singleShot(3000,[=](){
      ui->led_add_adm->setStyleSheet("background-color:white;");
       ui->led_add_adm->setText("");

   });
}


void team_before::on_delete_admin_pbn_clicked()
{
    QFile f2(teamName+".txt");
    f2.open(QIODevice::ReadOnly | QIODevice::Text);

    QString reader(f2.readAll());

    f2.close();
    QStringList senderProject=reader.split("\n"),listadmin,listmem,listtask;
    listtask=senderProject[0].split("  ");
    listadmin=senderProject[1].split("  ");
    listmem=senderProject[2].split("  ");
//------------------------------------------------
    if(UserName!=listadmin[0]){
        return;
    }
//------------------------------------------------

    QString del=ui->led_del_adm->text();
    if(del==""){

       ui->led_del_adm->setStyleSheet("background-color:red;");

       ui->led_del_adm->setText("The  name cannot be empty");

       QTimer::singleShot(4000,[=](){
          ui->led_del_adm->setStyleSheet("background-color:white;");
           ui->led_del_adm->setText("");

       });

       return;
   }
//------------------------------------------------------------------------------------
//   for(int i=0;i<listadmin.length();i++){
//   if(listadmin[i]==del){
//       break;
//   }
//   if(i==listadmin.length()-1){
//       ui->led_del_adm->setStyleSheet("background-color:red;");

//       ui->led_del_adm->setText("not found");

//       QTimer::singleShot(4000,[=](){
//          ui->led_del_adm->setStyleSheet("background-color:white;");
//           ui->led_del_adm->setText("");

//       });

//       return;
//   }

//   }

    myteam.removeAdminTeam(del);

    for (int i=0;i<listadmin.length();i++){
        if(listadmin[i]==del){
            listadmin.remove(i);
        }
    }
    f2.open(QIODevice::WriteOnly | QIODevice::Text);

    QTextStream out(&f2);

    for(int i=0;i<listtask.length();i++){

        out<<listtask[i]<<"  ";
    }
    out<<"\n";



     for(int i=0;i<listadmin.length();i++){
    if(listadmin[i]==""){
    continue;

    }
         out<<listadmin[i]<<"  ";
     }

      out<<"\n";

      for(int i=0;i<listmem.length();i++){

          out<<listmem[i]<<"  ";
      }
       out<<"\n";
       f2.close();

       ui->led_del_adm->setStyleSheet("background-color:green;");

       QTimer::singleShot(3000,[=](){
          ui->led_del_adm->setStyleSheet("background-color:white;");
           ui->led_del_adm->setText("");

       });
}


void team_before::on_delete_member_pbn_clicked()
{
    QString del=ui->led_del_mem->text();
    if(del==""){

       ui->led_del_mem->setStyleSheet("background-color:red;");

       ui->led_del_mem->setText("The  name cannot be empty");

       QTimer::singleShot(4000,[=](){
          ui->led_del_mem->setStyleSheet("background-color:white;");
           ui->led_del_mem->setText("");

       });

       return;
   }

//    ----------------------------------------------

    QFile f(teamName+".txt");

    f.open(QIODevice::ReadOnly | QIODevice::Text);
 QString useread( f.readAll());
 f.close();

 QStringList listuser,listmember;
 listuser=useread.split("\n");
 listmember=listuser[2].split("  ");


 for(int i=0;i<listmember.length();i++){
     if(del==listmember[i]){

     break;
     }

     else{

         if(i==listmember.length()-1){
         ui->led_del_mem->setStyleSheet("background-color:red;");

          ui->led_del_mem->setText("The username not found");

          QTimer::singleShot(4000,[=](){
             ui->led_del_mem->setStyleSheet("background-color:white;");
              ui->led_del_mem->setText("");


          });
          return;
         }

     }

}

 myteam.removeMember(del);

 QFile f2(teamName+".txt");
 f2.open(QIODevice::ReadOnly | QIODevice::Text);

 QString reader(f2.readAll());

 f2.close();
 QStringList senderProject=reader.split("\n"),listadmin,listmem,listtask;
 listtask=senderProject[0].split("  ");
 listadmin=senderProject[1].split("  ");
 listmem=senderProject[2].split("  ");

 f2.resize(0);



 for(int i=0;i<listmem.length();i++){

     if(del==listmem[i]){
         listmem.remove(i);
         break;
     }

 }


 f2.open(QIODevice::WriteOnly | QIODevice::Text);

 QTextStream out(&f2);

 out<<senderProject[0]<<"\n"<<senderProject[1]<<"\n";
 for(int i=0;i<listmem.length();i++){
if(listmem[i]==""){
continue;
}
     out<<listmem[i]<<"  ";
 }


ui->led_del_mem->setStyleSheet("background-color:green;");


f2.close();

}


void team_before::on_add_member_pbn_clicked()
{
    QString add=ui->led_add_mem->text();
    if(add==""){

       ui->led_add_mem->setStyleSheet("background-color:red;");

       ui->led_add_mem->setText("The  name cannot be empty");

       QTimer::singleShot(4000,[=](){
          ui->led_add_mem->setStyleSheet("background-color:white;");
           ui->led_add_mem->setText("");

       });

       return;
   }

//    -----------------------------------------------

    QFile f("userinformation.txt");

    f.open(QIODevice::ReadOnly | QIODevice::Text);
 QString useread( f.readAll());
 f.close();

 QStringList listuser;
 listuser=useread.split(" ");

 // سه تا ورودی تو ساین آپ گرفتیم دیگه
 for(int i=0;i<listuser.length();i+=3){
     if(add==listuser[i]){

     break;
     }

     else{

         if(i==listuser.length()-1){
         ui->led_add_mem->setStyleSheet("background-color:red;");

          ui->led_add_mem->setText("The username not found");

          QTimer::singleShot(4000,[=](){
             ui->led_add_mem->setStyleSheet("background-color:white;");
              ui->led_add_mem->setText("");


          });
          return;
         }

     }

}





 QFile f2(teamName+".txt");
 f2.open(QIODevice::ReadOnly | QIODevice::Text);

 QString reader(f2.readAll());

 f2.close();
 QStringList senderProject=reader.split("\n"),listadmin,listmem,listtask;
 listtask=senderProject[0].split("  ");
 listadmin=senderProject[1].split("  ");
 listmem=senderProject[2].split("  ");

 for(int i=0;i<listmem.length();i++){
     if(listmem[i]==add){
         return;
     }

 }
 myteam.addMember(add);

 f2.resize(0);

 f2.open(QIODevice::WriteOnly | QIODevice::Text);

 QTextStream out(&f2);

 out<<senderProject[0]<<"\n"<<senderProject[1]<<"\n"<<senderProject[2]+add+"  ";


ui->led_add_mem->setStyleSheet("background-color:green;");

f2.close();
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

    QFile f(teamName+".txt");
    f.open(QIODevice::ReadOnly | QIODevice::Text);

    QString reader(f.readAll());

    f.close();
    QStringList senderProject=reader.split("\n"),listadmin,listmem,listtask;
    listtask=senderProject[0].split("  ");
    listadmin=senderProject[1].split("  ");
    listmem=senderProject[2].split("  ");



    myteam.setName(teamName);
    myteam.setOrgan(organName);
    myteam.setTaskTitle(listtask[2]);
    myteam.setTaskTime(listtask[3]);


//     qDebug()<<listadmin[0]<<listadmin[1];

    for(int i=0;i<listadmin.length();i++){



        myteam.addAdminTeam(listadmin[i]);


    }

    for(int i=0;i<listmem.length();i++){

        myteam.addMember(listmem[i]);

    }

if(UserName==listadmin[0]){
    ui->label_2->setStyleSheet("background-color:green;");
     ui->label_3->setStyleSheet("background-color:green;");
     ui->label_2->setText("access");
     ui->label_3->setText("access");
}
else{
    ui->label_2->setStyleSheet("background-color:red;");
     ui->label_3->setStyleSheet("background-color:red;");
     ui->label_2->setText("lock");
     ui->label_3->setText("lock");


}


}



