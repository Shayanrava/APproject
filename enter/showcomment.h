#ifndef SHOWCOMMENT_H
#define SHOWCOMMENT_H

#include <QWidget>
#include<QFile>
#include<QTextStream>
#include<QTimer>

namespace Ui {
class showcomment;
}

class showcomment : public QWidget
{
    Q_OBJECT

public:
    explicit showcomment(QWidget *parent = nullptr);
    ~showcomment();

    void setUserName(QString Name);
     void setOrganName(QString Name);
        void setprojectName(QString Name);

private slots:
        void on_pushButton_clicked();

private:
    Ui::showcomment *ui;
    QString UserName;
    QString organName;

    QString projectName;
};

#endif // SHOWCOMMENT_H
