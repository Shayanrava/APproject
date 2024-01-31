#ifndef TEAM_BEFORE_H
#define TEAM_BEFORE_H

#include <QWidget>

namespace Ui {
class team_before;
}

class team_before : public QWidget
{
    Q_OBJECT

public:
    explicit team_before(QWidget *parent = nullptr);
    ~team_before();

private slots:
    void on_change_member_task_pbn_clicked();

    void on_view_member_task_pbn_clicked();

private:
    Ui::team_before *ui;
};

#endif // TEAM_BEFORE_H
