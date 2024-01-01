#ifndef DARVAAZEYE_SAAZMAAN_H
#define DARVAAZEYE_SAAZMAAN_H

#include <QWidget>

namespace Ui {
class darvaazeye_saazmaan;
}

class darvaazeye_saazmaan : public QWidget
{
    Q_OBJECT

public:
    explicit darvaazeye_saazmaan(QWidget *parent = nullptr);
    ~darvaazeye_saazmaan();

private:
    Ui::darvaazeye_saazmaan *ui;
};

#endif // DARVAAZEYE_SAAZMAAN_H
