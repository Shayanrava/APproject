#include "removing_organization.h"
#include "ui_removing_organization.h"

removing_organization::removing_organization(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::removing_organization)
{
    ui->setupUi(this);
}

removing_organization::~removing_organization()
{
    delete ui;
}

void removing_organization::on_pbn_remove_clicked()
{

    //----------------------------------------------------------------
    //-----------------------------خالی نبودن -----------------------------------
    //----------------------------------------------------------------
     if(ui->led_remove->text()==""){

        ui->led_remove->setStyleSheet("background-color:red;");

        ui->led_remove->setText("The organization name cannot be empty");

        QTimer::singleShot(4000,[=](){
           ui->led_remove->setStyleSheet("background-color:white;");
            ui->led_remove->setText("");

        });

        return;
    }
     //----------------------------------------------------------------
    //-------------------------------پیدا نشدن----------------------------------
    //----------------------------------------------------------------
    QFile file2("org.txt");

QString removeOrgan=ui->led_remove->text();

    file2.open(QIODevice::ReadOnly | QIODevice::Text);

    QString organRead( file2.readAll());

    file2.close();

    QStringList listOrgan;

    listOrgan=organRead.split("  ");

    for(int i=0;i<listOrgan.length();i++){

        if(listOrgan[i]==removeOrgan){

            listOrgan.remove(i);

            break;

        }

        else{
            if(i==listOrgan.length()-1){
                ui->led_remove->setStyleSheet("background-color:red;");

                ui->led_remove->setText("The organization not found");

                QTimer::singleShot(4000,[=](){
                   ui->led_remove->setStyleSheet("background-color:white;");
                    ui->led_remove->setText("");


                });
                return;

            }


        }


    }

    //----------------------------------------------------------------
    //-------------------------------دسترسی ناکافی----------------------------------
    //----------------------------------------------------------------


    QString organName=ui->led_remove->text();


    // ذخیره سازمان

    organName+=".txt";


     QFile file(organName);

     file.open(QIODevice::ReadOnly | QIODevice::Text);

     QString useRead= file.readAll();

     file.close();



     QStringList listuse,listadmin,listproject,listteam;

     listuse=useRead.split("\n");

     listadmin=listuse[0].split("  ");
     listproject=listuse[1].split("  ");
     listteam=listuse[2].split("  ");



     if(listadmin[0]!=UserName){

         ui->led_remove->setStyleSheet("background-color:red;");

         ui->led_remove->setText("you can't remove it");

         QTimer::singleShot(4000,[=](){
             ui->led_remove->setStyleSheet("background-color:white;");
             ui->led_remove->setText("");


         });
         return;

     }

     //----------------------------------------------------------------
     //-----------------------------------------------------------------
     //----------------------------------------------------------------


     qDebug()<<UserName<<" "<<listproject.length();

     for(int i=0;i<listproject.length();i++){

         if(listproject[i]==""){
             continue;
         }

         QFile file3(listproject[i]+".txt");
         file3.resize(0);
         file3.close();

     }



    if( file.open(QIODevice::WriteOnly | QIODevice::Text))
     {
         QTextStream outStream(&file);

         file.resize(0);

        file.close();


        file2.open((QIODevice::WriteOnly | QIODevice::Text));

        QTextStream ts(&file2);

        file2.resize(0);

        file2.close();

        file2.open((QIODevice::WriteOnly | QIODevice::Text));

         QTextStream ts2(&file2);


        for(int i=0;i<listOrgan.length();i++){

            ts2<<listOrgan[i]<<"  ";

        }

       file2.close();


         ui->led_remove->setStyleSheet("background-color:green;");

         ui->led_remove->setText("organization remove successfully");

        QTimer::singleShot(4000,[=](){

            ui->led_remove->setStyleSheet("background-color:white;");

            ui->led_remove->setText("");});

}

}

void removing_organization::setUserName(QString Name){

    UserName=Name;
}
