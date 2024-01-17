#ifndef ORGANIZATION_VOROODI_H
#define ORGANIZATION_VOROODI_H

#include <QWidget>

namespace Ui {
class orfanization_voroodi;
}

class orfanization_voroodi : public QWidget
{
    Q_OBJECT

public:
    explicit orfanization_voroodi(QWidget *parent = nullptr);
    ~orfanization_voroodi();

private:
    Ui::orfanization_voroodi *ui;
};

#endif // ORGANIZATION_VOROODI_H
