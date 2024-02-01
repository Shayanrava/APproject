#ifndef DELETE_PROJECT_BEFORE_H
#define DELETE_PROJECT_BEFORE_H

#include <QWidget>

namespace Ui {
class delete_project_before;
}

class delete_project_before : public QWidget
{
    Q_OBJECT

public:
    explicit delete_project_before(QWidget *parent = nullptr);
    ~delete_project_before();

private:
    Ui::delete_project_before *ui;
};

#endif // DELETE_PROJECT_BEFORE_H
