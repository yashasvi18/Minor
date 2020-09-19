#ifndef SIGNUP_H
#define SIGNUP_H
#include<QtSql>
#include<QSqlDatabase>
#include<QMessageBox>
#include <QSqlError>

#include <QDialog>

namespace Ui {
class Signup;
}

class Signup : public QDialog
{
    Q_OBJECT

public:
    explicit Signup(QWidget *parent = nullptr);
    ~Signup();

private slots:
    void on_signupadd_clicked();

private:
    Ui::Signup *ui;
};

#endif // SIGNUP_H
