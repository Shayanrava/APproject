#ifndef ADDMIN_PAGE_H
#define ADDMIN_PAGE_H

#include <QWidget>

namespace Ui {
class addmin_page;
}

class addmin_page : public QWidget
{
    Q_OBJECT

public:
    explicit addmin_page(QWidget *parent = nullptr);
    ~addmin_page();

private:
    Ui::addmin_page *ui;
};

#endif // ADDMIN_PAGE_H
