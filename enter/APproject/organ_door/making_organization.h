#ifndef MAKING_ORGANIZATION_H
#define MAKING_ORGANIZATION_H

#include <QWidget>

namespace Ui {
class making_organization;
}

class making_organization : public QWidget
{
    Q_OBJECT

public:
    explicit making_organization(QWidget *parent = nullptr);
    ~making_organization();

private:
    Ui::making_organization *ui;
};

#endif // MAKING_ORGANIZATION_H
