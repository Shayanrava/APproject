#ifndef REMOVING_ORGANIZATION_H
#define REMOVING_ORGANIZATION_H

#include <QWidget>

namespace Ui {
class removing_organization;
}

class removing_organization : public QWidget
{
    Q_OBJECT

public:
    explicit removing_organization(QWidget *parent = nullptr);
    ~removing_organization();

private:
    Ui::removing_organization *ui;
};

#endif // REMOVING_ORGANIZATION_H
