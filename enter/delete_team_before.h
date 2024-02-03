#ifndef DELETE_TEAM_BEFORE_H
#define DELETE_TEAM_BEFORE_H

#include <QWidget>
#include<QTimer>
#include<QFile>

namespace Ui {
class delete_team_before;
}

class delete_team_before : public QWidget
{
    Q_OBJECT

public:
    explicit delete_team_before(QWidget *parent = nullptr);
    ~delete_team_before();
    void setUserName(QString Name);
     void setOrganName(QString Name);

private slots:
     void on_delete_team_before_pbn_clicked();

private:
    Ui::delete_team_before *ui;
    QString UserName;
    QString orgaName;
};

#endif // DELETE_TEAM_BEFORE_H
