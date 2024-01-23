#ifndef ADMINS_H
#define ADMINS_H
#include<QString>
#include<QVector>
class admins
{
    QVector<QString>admins_name;
public:

    admins();


    void new_admin(QString);

    QString get_name(int);

    QString remove(QString);
};

#endif // ADMINS_H
