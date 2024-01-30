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

            for(int j=0;j<listOrgan[i].length();j++){
                listOrgan[i][j]=' ';
            }
        }

    }


     QFile file3("enter.txt");

    file3.open(QIODevice::ReadOnly | QIODevice::Text);
     QString useread( file3.readAll());
    file3.close();

    QStringList name=useread.split("  ");

    QString organName=ui->led_remove->text();


    // ذخیره ساذمان
    organName+=".txt";

     QFile file(organName);

    if( file.open(QIODevice::WriteOnly | QIODevice::Text))
     {
         QTextStream outStream(&file);



         outStream<<"\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n";
        file.close();


        file2.open((QIODevice::WriteOnly | QIODevice::Text|QIODevice::Append));

        QTextStream ts;

        ts<<"\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n";

        for(int i=0;i<listOrgan.length();i++){

            ts<<listOrgan[i]<<"  ";

        }

         file2.close();


         ui->led_remove->setStyleSheet("background-color:green;");

         ui->led_remove->setText("organization built successfully");

        QTimer::singleShot(4000,[=](){

            ui->led_remove->setStyleSheet("background-color:white;");

            ui->led_remove->setText("");});

}

}
