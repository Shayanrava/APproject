#ifndef ADD_TEAM_BEFORE_H
#define ADD_TEAM_BEFORE_H

#include <QWidget>

namespace Ui {
class add_team_before;
}

class add_team_before : public QWidget
{
    Q_OBJECT

public:
    explicit add_team_before(QWidget *parent = nullptr);
    ~add_team_before();

private:
    Ui::add_team_before *ui;
};

#endif // ADD_TEAM_BEFORE_H
