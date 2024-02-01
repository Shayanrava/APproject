#ifndef ADMIN_BEFORE_H
#define ADMIN_BEFORE_H

#include <QWidget>
#include<QTimer>
#include<QFile>

namespace Ui {
class admin_before;
}

class admin_before : public QWidget
{
    Q_OBJECT

public:
    explicit admin_before(QWidget *parent = nullptr);
    ~admin_before();
      void setUserName(QString Name);
       void setOrganName(QString Name);

private slots:
      void on_add_admin_pbn_clicked();

      void on_delete_admin_pbn_clicked();

      void on_view_admins_pbn_clicked();

private:
    Ui::admin_before *ui;

       QString UserName;

       QString organName;
};

#endif // ADMIN_BEFORE_H
