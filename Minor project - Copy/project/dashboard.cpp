#include "dashboard.h"
#include "ui_dashboard.h"
#include "ui_retrieve.h"
#include <QApplication>


Dashboard::Dashboard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dashboard)

{
    ui->setupUi(this);

}

Dashboard::~Dashboard()
{
    delete ui;
}

void Dashboard::on_update_clicked()
{
    updaterec =new Update(this);
    updaterec->show();

}


void Dashboard::on_view_clicked()
{

    retrieverec =new Retrieve(this);
    retrieverec->show();
}


void Dashboard::on_symptom_clicked()
{
    symptom= new Symptom (this);
    symptom->show();
}

void Dashboard::on_assistant_clicked()
{
    dialog=new ChatDialog(this);

//    ChatDialog dialog; //dashboard on assitant click
    dialog->show(); //on assitant click
}
