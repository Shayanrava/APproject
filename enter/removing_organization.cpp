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
    //-----------------------------خالی نبودن -----------------------------------
    //----------------------------------------------------------------
    QFile file2("org.txt");


    file2.open(QIODevice::ReadOnly | QIODevice::Text);

    QString organRead( file2.readAll());

    file2.close();

    QStringList listOrgan;

    listOrgan=organRead.split("  ");

    for(int i=0;i<listOrgan.length();i++){

        if(listOrgan[i]==ui->led_remove->text()){

            listOrgan[i]=listOrgan[listOrgan.length()-1];

            break;

//            for(int j=0;j<listOrgan[i].length();j++){

//                listOrgan[i][j]=' ';
//            }

        }


    }





    QString organName=ui->led_remove->text();


    // ذخیره سازمان
    organName+=".txt";

     QFile file(organName);

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


        for(int i=0;i<listOrgan.length()-1;i++){

            ts2<<listOrgan[i]<<"  ";

        }

       file2.close();


         ui->led_remove->setStyleSheet("background-color:green;");

         ui->led_remove->setText("organization built successfully");

        QTimer::singleShot(4000,[=](){

            ui->led_remove->setStyleSheet("background-color:white;");

            ui->led_remove->setText("");});

}

}

void removing_organization::setUserName(QString Name){

    UserName=Name;
}
