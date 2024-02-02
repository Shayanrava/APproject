#ifndef KEY_PROJECT_BEFORE_H
#define KEY_PROJECT_BEFORE_H

#include <QWidget>

namespace Ui {
class key_project_before;
}

class key_project_before : public QWidget
{
    Q_OBJECT

public:
    explicit key_project_before(QWidget *parent = nullptr);
    ~key_project_before();
    void setUserName(QString Name);
    void setOrganName(QString Name);

private slots:
    void on_key_project_before_pbn_clicked();

private:
    Ui::key_project_before *ui;
    QString UserName;
      QString orgaName;
};

#endif // KEY_PROJECT_BEFORE_H
