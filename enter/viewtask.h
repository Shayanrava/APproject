#ifndef VIEWTASK_H
#define VIEWTASK_H

#include <QWidget>
#include<QFile>
#include<QTimer>
#include<QTextStream>>

namespace Ui {
class viewTask;
}

class viewTask : public QWidget
{
    Q_OBJECT

public:
    explicit viewTask(QWidget *parent = nullptr);
    ~viewTask();

    void setUserName(QString Name);

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::viewTask *ui;
      QString UserName;
};

#endif // VIEWTASK_H
