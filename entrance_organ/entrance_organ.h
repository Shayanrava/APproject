#ifndef ENTRANCE_ORGAN_H
#define ENTRANCE_ORGAN_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class entrance_organ;
}
QT_END_NAMESPACE

class entrance_organ : public QMainWindow
{
    Q_OBJECT

public:
    entrance_organ(QWidget *parent = nullptr);
    ~entrance_organ();

private:
    Ui::entrance_organ *ui;
};
#endif // ENTRANCE_ORGAN_H
