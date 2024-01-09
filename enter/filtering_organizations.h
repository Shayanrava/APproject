#ifndef FILTERING_ORGANIZATIONS_H
#define FILTERING_ORGANIZATIONS_H

#include <QWidget>

namespace Ui {
class filtering_organizations;
}

class filtering_organizations : public QWidget
{
    Q_OBJECT

public:
    explicit filtering_organizations(QWidget *parent = nullptr);
    ~filtering_organizations();

private:
    Ui::filtering_organizations *ui;
};

#endif // FILTERING_ORGANIZATIONS_H
