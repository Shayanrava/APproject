#ifndef KEY_TEAM_BEFORE_H
#define KEY_TEAM_BEFORE_H

#include <QWidget>

namespace Ui {
class key_team_before;
}

class key_team_before : public QWidget
{
    Q_OBJECT

public:
    explicit key_team_before(QWidget *parent = nullptr);
    ~key_team_before();

private:
    Ui::key_team_before *ui;
};

#endif // KEY_TEAM_BEFORE_H
