#include "admin_before.h"
#include "ui_admin_before.h"

admin_before::admin_before(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::admin_before)
{
    ui->setupUi(this);
}

admin_before::~admin_before()
{
    delete ui;
}

void admin_before::setUserName(QString Name){

    UserName=Name;
}

void admin_before::setOrganName(QString Name){

    organName=Name;
}

void admin_before::on_add_admin_pbn_clicked()
{
    ui->ted_show->clear();
    QString add=ui->led_add->text();
//    ----------------------------------------------------------------
//    -----------------------------خالی نبودن -----------------------------------
//    ----------------------------------------------------------------
     if(add==""){

        ui->led_add->setStyleSheet("background-color:red;");

        ui->led_add->setText("The organization name cannot be empty");

        QTimer::singleShot(3000,[=](){
           ui->led_add->setStyleSheet("background-color:white;");
           ui->led_add->setText("");

        });

        return;
    }
     //----------------------------------------------------------------
    //-------------------------------تکرار----------------------------------
    //----------------------------------------------------------------


     QFile f(organName+".txt");
     f.open(QIODevice::ReadOnly | QIODevice::Text);

     QString readorgan( f.readAll());

     f.close();

     QStringList list,listadmins;

     list=readorgan.split("\n");

     listadmins=list[0].split("  ");

     for(int i=0;i<listadmins.length();i++){

         if(add==listadmins[i]){
             ui->led_add->setStyleSheet("background-color:red;");

             ui->led_add->setText("This admin already exists");

             QTimer::singleShot(2000,[=](){
                 ui->led_add->setStyleSheet("background-color:white;");
                 ui->led_add->setText("");
                 });
             return;

         }

     }



     //----------------------------------------------------------------
    //--------------------------------پیدا نشدن---------------------------------
    //----------------------------------------------------------------

     QFile frepeat("userinformation.txt");

    frepeat.open(QIODevice::ReadOnly | QIODevice::Text);
 QString readrepeat( frepeat.readAll());
 frepeat.close();

 QStringList arruser;
 arruser=readrepeat.split(" ");




 for(int i=0;i<arruser.length();i+=3){

     if(add==arruser[i]){

         break;
     }
     else{
         if(i==arruser.length()-1){

             ui->led_add->setStyleSheet("background-color:red;");
         ui->led_add->setText("This username not found");
             QTimer::singleShot(2000,[=](){
                 ui->led_add->setText("");
                 ui->led_add->setStyleSheet("background-color:white;");

             });


             return;
         }

     }


}




//--------------------------------------------------------------------------------

     QFile file2(organName+".txt");

    file2.open(QIODevice::ReadOnly | QIODevice::Text);

    QString organRead( file2.readAll());

    file2.close();

    QStringList listOrgan,listadmin;

    listOrgan=organRead.split("\n");

    listadmin=listOrgan[0].split("  ");


    listOrgan[0]+=add+"  ";

    file2.open(QIODevice::WriteOnly | QIODevice::Text);

     QTextStream outStream(&file2);

     outStream<<listOrgan[0]<<"\n"<<listOrgan[1]<<"\n"<<listOrgan[2];

              ui->led_add->setStyleSheet("background-color:green;");

              ui->led_add->setText("add successfully");

              QTimer::singleShot(2000,[=](){
                  ui->led_add->setStyleSheet("background-color:white;");
                  ui->led_add->setText("");
                  });


}


void admin_before::on_delete_admin_pbn_clicked()
{
ui->ted_show->clear();
    QString remove=ui->led_remove->text();
//    ----------------------------------------------------------------
//    -----------------------------خالی نبودن -----------------------------------
//    ----------------------------------------------------------------
     if(remove==""){

        ui->led_remove->setStyleSheet("background-color:red;");

        ui->led_remove->setText("The organization name cannot be empty");

        QTimer::singleShot(3000,[=](){
           ui->led_remove->setStyleSheet("background-color:white;");
           ui->led_remove->setText("");

        });

        return;
    }


//--------------------------------------------------------------------------------

     QFile file2(organName+".txt");

    file2.open(QIODevice::ReadOnly | QIODevice::Text);

    QString organRead( file2.readAll());

    file2.close();

    QStringList listOrgan,listadmin;

    listOrgan=organRead.split("\n");

    listadmin=listOrgan[0].split("  ");

    for(int i=0;i<listadmin.length();i++){
        if(listadmin[i]==remove){
            listadmin.remove(i);
        }
    }

    file2.open(QIODevice::WriteOnly | QIODevice::Text);

     QTextStream outStream(&file2);

     for(int i=0;i<listadmin.length();i++){

         outStream<<listadmin[i]<<"  ";
     }

     outStream<<"\n"<<listOrgan[1]<<"\n"<<listOrgan[2];

              ui->led_remove->setStyleSheet("background-color:green;");

              ui->led_remove->setText("add successfully");

              QTimer::singleShot(2000,[=](){
                  ui->led_remove->setStyleSheet("background-color:white;");
                  ui->led_remove->setText("");
                  });


}


void admin_before::on_view_admins_pbn_clicked()
{
    QFile file2(organName+".txt");

   file2.open(QIODevice::ReadOnly | QIODevice::Text);

   QString organRead( file2.readAll());

   file2.close();

   QStringList listOrgan,listadmin;

   listOrgan=organRead.split("\n");

   listadmin=listOrgan[0].split("  ");

   for(int i=0;i<listadmin.length();i++){
       if(i==0){
        ui->ted_show->append(listadmin[i]+" (owner)");
        continue;
       }

       if(listadmin[i]!=""){
           ui->ted_show->append(listadmin[i]);
       }


   }

}


//dfgdfgnjdkj kjdfnvdfkjv kdjfnvdkjfn dkjfndkjffbeakufbbfs
//dfggvkdhdughdufhfhgfkjsdfhsdghf
