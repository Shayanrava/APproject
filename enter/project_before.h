#ifndef PROJECT_BEFORE_H
#define PROJECT_BEFORE_H

#include <QWidget>

namespace Ui {
class project_before;
}

class project_before : public QWidget
{
    Q_OBJECT

public:
    explicit project_before(QWidget *parent = nullptr);
    ~project_before();

private:
    Ui::project_before *ui;
};

#endif // PROJECT_BEFORE_H
