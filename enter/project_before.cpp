#include "project_before.h"
#include "ui_project_before.h"
#include"change_member_task_in_project.h"
#include"view_member_task_in_project.h"
project_before::project_before(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::project_before)
{
    ui->setupUi(this);
}

project_before::~project_before()
{
    delete ui;
}

void project_before::setUserName(QString Name){

    UserName=Name;

// ----------------------------------------------------------

//    qDebug()<<projectName;

    QFile f(projectName+".txt");
    f.open(QIODevice::ReadOnly | QIODevice::Text);

    QString reader(f.readAll());

    f.close();
    QStringList senderProject=reader.split("\n"),listadmin,listmem,listtask;
    listtask=senderProject[0].split("  ");
    listadmin=senderProject[2].split("  ");
    listmem=senderProject[3].split("  ");



    myproject.setName(projectName);
    myproject.setOrgan(organName);
    myproject.setTask(listtask[2]);
    myproject.setTaskTime(listtask[3]);
    myproject.setStatus(listtask[4]);

//     qDebug()<<listadmin[0]<<listadmin[1];

    for(int i=0;i<listadmin.length();i++){



        myproject.loadAdmin(listadmin[i]);


    }

    for(int i=0;i<listmem.length();i++){

        myproject.loadMember(listmem[i]);

    }

if(UserName==listadmin[0]){
    ui->lbladd->setStyleSheet("background-color:green;");
     ui->lbldel->setStyleSheet("background-color:green;");
     ui->lbldel->setText("access");
     ui->lbladd->setText("access");
}
else{
    ui->lbladd->setStyleSheet("background-color:red;");
     ui->lbldel->setStyleSheet("background-color:red;");
     ui->lbldel->setText("lock");
     ui->lbladd->setText("lock");


}


}

void project_before::setOrganName(QString Name){

    organName=Name;
}
void project_before::setprojectName(QString Name){

    projectName=Name;
}

void project_before::on_change_task_person_pbn_clicked()
{

    QFile f2(projectName+".txt");
    f2.open(QIODevice::ReadOnly | QIODevice::Text);

    QString reader(f2.readAll());

    f2.close();
    QStringList senderProject=reader.split("\n"),listadmin,listmem,listtask,listcomment;
    listtask=senderProject[0].split("  ");
    listcomment=senderProject[1].split("  ");
    listadmin=senderProject[2].split("  ");
    listmem=senderProject[3].split("  ");

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


        if(senduser[i]==organName&&senduser[i+1]==projectName){

            senduser[i+2]=newtask;
            senduser[i+3]=newtime;

           break;
        }


    }


    f.resize(0);

    f.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream tst(&f);

    for(int i=0;i<senduser.length();i++){
if(senduser[i]==""){
continue;
}
     tst<<senduser[i]<<"  ";


    }

        ui->led_namechange->setStyleSheet("background-color:green;");
        QTimer::singleShot(2000,[=](){
           ui->led_namechange->setStyleSheet("background-color:white;");
            ui->led_namechange->setText("");

        });


}


void project_before::on_view_task_person_pbn_clicked()
{

    QFile f2(projectName+".txt");
    f2.open(QIODevice::ReadOnly | QIODevice::Text);

    QString reader(f2.readAll());

    f2.close();
    QStringList senderProject=reader.split("\n"),listadmin,listmem,listtask,listcomment;
    listtask=senderProject[0].split("  ");
    listcomment=senderProject[1].split("  ");
    listadmin=senderProject[2].split("  ");
    listmem=senderProject[3].split("  ");
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


         if(senduser[i]==organName&&senduser[i+1]==projectName){
           ui->led_view_taskmem->setText("task : "+senduser[i+2]+"    time : "+senduser[i+3]);
            break;
         }


     }
}


void project_before::on_view_project_status_pbn_clicked()
{

    ui->led_view_status->setText(myproject.getStatus());

}


void project_before::on_change_project_status_pbn_clicked()
{

    QString statuspro=ui->led_chang_status->text();

    if(statuspro==""){
        ui->led_chang_status->setStyleSheet("background-color:red;");
        ui->led_chang_status->setText("The new status cannot be empty");
        QTimer::singleShot(2000,[=](){
           ui->led_chang_status->setStyleSheet("background-color:white;");
            ui->led_chang_status->setText("");

        });
        return;


    }

    myproject.setStatus(statuspro);



    QFile f2(projectName+".txt");
    f2.open(QIODevice::ReadOnly | QIODevice::Text);

    QString reader(f2.readAll());

    f2.close();
    QStringList senderProject=reader.split("\n"),listadmin,listmem,listtask,listcomment;
    listtask=senderProject[0].split("  ");
    listcomment=senderProject[1].split("  ");
    listadmin=senderProject[2].split("  ");
    listmem=senderProject[3].split("  ");

    f2.resize(0);



   listtask[4]=statuspro;

   f2.open(QIODevice::WriteOnly | QIODevice::Text);

   QTextStream out(&f2);

   for(int i=0;i<listtask.length();i++){

       out<<listtask[i]<<"  ";
   }
   out<<"\n";

   for(int i=0;i<listcomment.length();i++){

       out<<listcomment[i]<<"  ";
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

      ui->led_chang_status->setStyleSheet("background-color:green;");

      QTimer::singleShot(3000,[=](){
         ui->led_chang_status->setStyleSheet("background-color:white;");
          ui->led_chang_status->setText("");

      });
}


void project_before::on_view_project_task_pbn_clicked()
{
    ui->led_view_taskpro->setText("task: "+myproject.getTaskTitle()+"      time: "+myproject.getTaskTime());
}


void project_before::on_set_project_task_pbn_clicked()
{
    QFile f2(projectName+".txt");
    f2.open(QIODevice::ReadOnly | QIODevice::Text);

    QString reader(f2.readAll());

    f2.close();
    QStringList senderProject=reader.split("\n"),listadmin,listmem,listtask,listcomment;
    listtask=senderProject[0].split("  ");
    listcomment=senderProject[1].split("  ");
    listadmin=senderProject[2].split("  ");
    listmem=senderProject[3].split("  ");

// -------------------------------------------------------------------------------------------------------
    QString time=ui->led_set_tasktimepro->text();
    QString title=ui->led_set_taskpro->text();
    if(title==""){

       ui->led_set_taskpro->setStyleSheet("background-color:red;");


       ui->led_set_taskpro->setText("The task or cannot be empty");

       QTimer::singleShot(3000,[=](){
          ui->led_set_taskpro->setStyleSheet("background-color:white;");
           ui->led_set_taskpro->setText("Enter task");

       });

       return;
   }
    if(time==""){

       ui->led_set_tasktimepro->setStyleSheet("background-color:red;");

       ui->led_set_tasktimepro->setText("The time cannot be empty");

       QTimer::singleShot(3000,[=](){
          ui->led_set_tasktimepro->setStyleSheet("background-color:white;");
           ui->led_set_tasktimepro->setText("Enter time");

       });

       return;
   }
    qDebug()<<"yes2";
//-----------------------------------------------------------------------------------------------
    listtask[2]=title;

    listtask[3]=time;

    qDebug()<<"yes";

    f2.open(QIODevice::WriteOnly | QIODevice::Text);


    QTextStream out(&f2);

    for(int i=0;i<listtask.length();i++){
if(listtask[i]==""){
continue;
}
        out<<listtask[i]<<"  ";
    }
    out<<"\n";

    for(int i=0;i<listcomment.length();i++){

        out<<listcomment[i]<<"  ";
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

       myproject.setTask(title);
       myproject.setTaskTime(time);

         ui->led_set_taskpro->setStyleSheet("background-color:green;");

        ui->led_set_tasktimepro->setStyleSheet("background-color:green;");

       QTimer::singleShot(3000,[=](){
           ui->led_set_taskpro->setStyleSheet("background-color:white;");

          ui->led_set_tasktimepro->setStyleSheet("background-color:white;");

           ui->led_set_taskpro->setText("Enter task");
           ui->led_set_tasktimepro->setText("Enter time");

       });

}


void project_before::on_view_member_pbn_clicked()
{
for(int i=0;i<myproject.peronelslength();i++){
    if(myproject.memberFind(i)!=""){

        ui->ted_view_mem->append(myproject.memberFind(i));
    }


}


}


void project_before::on_view_admin_pbn_clicked()
{

    for(int i=0;i<myproject.adminlength();i++){
        if(myproject.adminFind(i)!=""){

            ui->ted_view_adm->append(myproject.adminFind(i));
        }


    }
}


void project_before::on_delete_member_pbn_clicked()
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

    QFile f("userinformation.txt");

    f.open(QIODevice::ReadOnly | QIODevice::Text);
 QString useread( f.readAll());
 f.close();

 QStringList listuser;
 listuser=useread.split(" ");

 // سه تا ورودی تو ساین آپ گرفتیم دیگه
 for(int i=0;i<listuser.length();i+=3){
     if(del==listuser[i]){

     break;
     }

     else{

         if(i==listuser.length()-1){
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

 myproject.removeMember(del);

 QFile f2(projectName+".txt");
 f2.open(QIODevice::ReadOnly | QIODevice::Text);

 QString reader(f2.readAll());

 f2.close();
 QStringList senderProject=reader.split("\n"),listadmin,listmem,listtask;
 listtask=senderProject[0].split("  ");
 listadmin=senderProject[2].split("  ");
 listmem=senderProject[3].split("  ");

 f2.resize(0);



 for(int i=0;i<listmem.length();i++){

     if(del==listmem[i]){
         listmem.remove(i);
         break;
     }

 }


 f2.open(QIODevice::WriteOnly | QIODevice::Text);

 QTextStream out(&f2);

 out<<senderProject[0]<<"\n"<<senderProject[1]<<"\n"<<senderProject[2]<<"\n";

 for(int i=0;i<listmem.length();i++){
if(listmem[i]==""){
continue;
}
     out<<listmem[i]<<"  ";
 }


ui->led_del_mem->setStyleSheet("background-color:green;");


f2.close();

}


void project_before::on_add_member_pbn_clicked()
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

 myproject.addMember(add);

 QFile f2(projectName+".txt");
 f2.open(QIODevice::ReadOnly | QIODevice::Text);

 QString reader(f2.readAll());

 f2.close();
 QStringList senderProject=reader.split("\n"),listadmin,listmem,listtask;
 listtask=senderProject[0].split("  ");
 listadmin=senderProject[2].split("  ");
 listmem=senderProject[3].split("  ");

 f2.resize(0);

 f2.open(QIODevice::WriteOnly | QIODevice::Text);

 QTextStream out(&f2);

 out<<senderProject[0]<<"\n"<<senderProject[1]<<"\n"<<senderProject[2]<<"\n"<<senderProject[3]+add+"  ";


ui->led_add_mem->setStyleSheet("background-color:green;");

f2.close();

}

void project_before::on_delete_admin_pbn_clicked()
{
    QFile f2(projectName+".txt");
    f2.open(QIODevice::ReadOnly | QIODevice::Text);

    QString reader(f2.readAll());

    f2.close();
    QStringList senderProject=reader.split("\n"),listadmin,listmem,listtask,listcomment;
    listtask=senderProject[0].split("  ");
    listcomment=senderProject[1].split("  ");
    listadmin=senderProject[2].split("  ");
    listmem=senderProject[3].split("  ");
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
    myproject.removeAdmin(del);

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

    for(int i=0;i<listcomment.length();i++){

        out<<listcomment[i]<<"  ";
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


void project_before::on_add_admin_pbn_clicked()
{
    QFile f2(projectName+".txt");
    f2.open(QIODevice::ReadOnly | QIODevice::Text);

    QString reader(f2.readAll());

    f2.close();
    QStringList senderProject=reader.split("\n"),listadmin,listmem,listtask,listcomment;
    listtask=senderProject[0].split("  ");
    listcomment=senderProject[1].split("  ");
    listadmin=senderProject[2].split("  ");
    listmem=senderProject[3].split("  ");
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
myproject.newAdmin(add);


f2.open(QIODevice::WriteOnly | QIODevice::Text);

QTextStream out(&f2);

for(int i=0;i<listtask.length();i++){

    out<<listtask[i]<<"  ";
}
out<<"\n";

for(int i=0;i<listcomment.length();i++){

    out<<listcomment[i]<<"  ";
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



