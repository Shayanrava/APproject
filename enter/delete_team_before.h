#ifndef DELETE_TEAM_BEFORE_H
#define DELETE_TEAM_BEFORE_H

#include <QWidget>

namespace Ui {
class delete_team_before;
}

class delete_team_before : public QWidget
{
    Q_OBJECT

public:
    explicit delete_team_before(QWidget *parent = nullptr);
    ~delete_team_before();

private:
    Ui::delete_team_before *ui;
};

#endif // DELETE_TEAM_BEFORE_H
