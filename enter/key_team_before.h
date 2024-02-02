#ifndef KEY_TEAM_BEFORE_H
#define KEY_TEAM_BEFORE_H

#include <QWidget>
#include<QTimer>
#include<QFile>

namespace Ui {
class key_team_before;
}

class key_team_before : public QWidget
{
    Q_OBJECT

public:
    explicit key_team_before(QWidget *parent = nullptr);
    ~key_team_before();

    void setUserName(QString Name);
    void setOrganName(QString Name);

private slots:
    void on_key_team_before_pbn_clicked();

private:
    Ui::key_team_before *ui;
    QString UserName;
      QString orgaName;
};

#endif // KEY_TEAM_BEFORE_H
