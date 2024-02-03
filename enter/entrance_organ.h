#ifndef ENTRANCE_ORGAN_H
#define ENTRANCE_ORGAN_H

#include <QMainWindow>
#include<QFile>


QT_BEGIN_NAMESPACE
namespace Ui {
class entrance_organ;
}
QT_END_NAMESPACE

class entrance_organ : public QMainWindow
{
    Q_OBJECT

public:
    entrance_organ(QWidget *parent = nullptr);
    ~entrance_organ();
void setName(QString Name);

private slots:



    void on_pbn_making_clicked();

    void on_pbn_removing_clicked();

    void on_pbn_filter_clicked();

    void on_pbn_login_clicked();

    void on_pbn_view_clicked();

private:
    QString userName;


    Ui::entrance_organ *ui;
};
#endif // ENTRANCE_ORGAN_H
