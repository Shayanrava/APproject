#ifndef MAKING_DECISION_FOR_ORGAN_H
#define MAKING_DECISION_FOR_ORGAN_H

#include <QWidget>
#include<QStringList>
#include<QFile>
#include<QTextStream>

namespace Ui {
class making_decision_for_organ;
}

class making_decision_for_organ : public QWidget
{
    Q_OBJECT

public:
    explicit making_decision_for_organ(QWidget *parent = nullptr);
    ~making_decision_for_organ();

    void setUserName(QString Name);
     void setOrganName(QString Name);

private slots:

    void on_add_project_clicked();

    void on_delete_project_clicked();

    void on_add_team_clicked();

    void on_delete_team_clicked();

    void on_admin_clicked();

    void on_project_clicked();

    void on_team_clicked();

private:
    Ui::making_decision_for_organ *ui;
    QString UserName;
    QString orgaName;
};

#endif // MAKING_DECISION_FOR_ORGAN_H
