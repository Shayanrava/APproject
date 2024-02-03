#ifndef ADD_TEAM_BEFORE_H
#define ADD_TEAM_BEFORE_H

#include <QWidget>
#include<QTimer>
#include<QFile>

namespace Ui {
class add_team_before;
}

class add_team_before : public QWidget
{
    Q_OBJECT

public:
    explicit add_team_before(QWidget *parent = nullptr);
    ~add_team_before();


    void setUserName(QString Name);
     void setOrganName(QString Name);

private slots:
     void on_add_team_before_pbn_clicked();

private:
    Ui::add_team_before *ui;

    QString UserName;
    QString orgaName;
};

#endif // ADD_TEAM_BEFORE_H
