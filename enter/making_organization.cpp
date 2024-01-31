#include "making_organization.h"
#include "ui_making_organization.h"

making_organization::making_organization(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::making_organization)
{
    ui->setupUi(this);
}

making_organization::~making_organization()
{
    delete ui;
}

void making_organization::on_pbn_making_clicked()
{

     if(ui->led_making->text()==""){

        ui->led_making->setStyleSheet("background-color:red;");

        ui->led_making->setText("The organization name cannot be empty");

        QTimer::singleShot(4000,[=](){
           ui->led_making->setStyleSheet("background-color:white;");
            ui->led_making->setText("");

        });

        return;
    }
     //----------------------------------------------------------------
    //-----------------------------خالی نبودن -----------------------------------
    //----------------------------------------------------------------
    QFile file2("org.txt");
    file2.open((QIODevice::WriteOnly | QIODevice::Text|QIODevice::Append));
    file2.close();



    file2.open(QIODevice::ReadOnly | QIODevice::Text);

    QString organRead( file2.readAll());

    file2.close();

    QStringList listOrgan;

    listOrgan=organRead.split("  ");

    for(int i=0;i<listOrgan.length();i++){

        if(listOrgan[i]==ui->led_making->text()){

            ui->led_making->setText("This organ already exists!");

            ui->led_making->setStyleSheet("background-color:red;");

            QTimer::singleShot(4000,[=](){

                ui->led_making->setStyleSheet("background-color:white;");

                ui->led_making->setText("");

            });

            return;
        }
    }

     //----------------------------------------------------------------
    //----------------------------وجود از قبل------------------------------------
    //----------------------------------------------------------------

    QString organName=ui->led_making->text();


    // ذخیره سازمان
    organName+=".txt";

     QFile file(organName);

    if( file.open(QIODevice::WriteOnly | QIODevice::Text))
     {
         QTextStream outStream(&file);

        outStream<<UserName<<"  ";

         outStream<<"\n \n";

        file.close();


        file2.open((QIODevice::WriteOnly | QIODevice::Text|QIODevice::Append));

         QTextStream outStream2(&file2);

        outStream2<<ui->led_making->text()<<"  ";

         file2.close();


         ui->led_making->setStyleSheet("background-color:green;");

         ui->led_making->setText("organization built successfully");

        QTimer::singleShot(4000,[=](){

            ui->led_making->setStyleSheet("background-color:white;");

            ui->led_making->setText("");



        });


     }
}

void making_organization::setUserName(QString Name){

    UserName=Name;
}

