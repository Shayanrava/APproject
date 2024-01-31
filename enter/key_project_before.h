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

private:
    Ui::key_project_before *ui;
};

#endif // KEY_PROJECT_BEFORE_H
