#ifndef ADD_PROJECT_BEFORE_H
#define ADD_PROJECT_BEFORE_H

#include <QWidget>

namespace Ui {
class add_project_before;
}

class add_project_before : public QWidget
{
    Q_OBJECT

public:
    explicit add_project_before(QWidget *parent = nullptr);
    ~add_project_before();

private:
    Ui::add_project_before *ui;
};

#endif // ADD_PROJECT_BEFORE_H
