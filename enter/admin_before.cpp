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
    //-------------------------------پیدا نشدن----------------------------------
    //----------------------------------------------------------------


     QFile f(add+".txt");

     if(!f.open(QIODevice::ReadOnly | QIODevice::Text)){

         ui->led_add->setStyleSheet("background-color:red;");

         ui->led_add->setText("No such person was found");

         QTimer::singleShot(2000,[=](){
             ui->led_add->setStyleSheet("background-color:white;");
             ui->led_add->setText("");
             });
         return;

}


    //----------------------------------------------------------------
    //-------------------------------دسترسی ناکافی----------------------------------
    //----------------------------------------------------------------


//    QString organName=ui->led_remove->text();


//    // ذخیره سازمان

//    organName+=".txt";


//     QFile file(organName);

//     file.open(QIODevice::ReadOnly | QIODevice::Text);

//     QString useRead= file.readAll();

//     file.close();



//     QStringList listuse,listadmin,listproject,listteam;

//     listuse=useRead.split("\n");

//     listadmin=listuse[0].split("  ");
//     listproject=listuse[1].split("  ");
//     listteam=listuse[2].split("  ");



//     if(listadmin[0]!=UserName){

//         ui->led_remove->setStyleSheet("background-color:red;");

//         ui->led_remove->setText("you can't remove it");

//         QTimer::singleShot(4000,[=](){
//             ui->led_remove->setStyleSheet("background-color:white;");
//             ui->led_remove->setText("");


//         });
//         return;

//     }


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

}


void admin_before::on_view_admins_pbn_clicked()
{

}

