#include "messagedialog.h"
#include <QMessageBox>

messageDialog::messageDialog(QWidget *parent) :
    QDialog(parent)
{
   setupUi(this);
}

messageDialog::~messageDialog()
{
}

void messageDialog::on_QuestionButton_clicked()
{
    label_dis->setText("Question Message Box");
    switch (QMessageBox::question(this, "Question dialog",
        "Do you want quite?", QMessageBox::Ok | QMessageBox::Cancel, QMessageBox::Ok)) {
    case QMessageBox::Ok:
        label_dis->setText("Question button/OK");
        break;
    case QMessageBox::Cancel:
        label_dis->setText("Question button/Cancel");
        break;
    default:
        break;
    }
}

void messageDialog::on_InformationButton_clicked()
{
    label_dis->setText("Information Message Box");
    QMessageBox::information(this, "Information Dialog",
        "This is information test dialog,welcome!");
}

void messageDialog::on_WarningButton_clicked()
{
    label_dis->setText("Warning Message Box");
    switch (QMessageBox::warning(this, "Warning dialog",
        "Your change is not save,do you want save?",
        QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel)) {
    case QMessageBox::Save:
        label_dis->setText("Warning button/Save");
        break;
    case QMessageBox::Discard:
        label_dis->setText("Warning button/Discard");
        break;
    case QMessageBox::Cancel:
        label_dis->setText("Warning button/Cancel");
        break;
    default:
        break;
    }
}

void messageDialog::on_CriticalButton_clicked()
{
    label_dis->setText("Critical Message Box");
    QMessageBox::critical(this, "Critical dialog", "This is Critical test dialog!");
}

void messageDialog::on_AboutButton_clicked()
{
    label_dis->setText("About Message Box");
    QMessageBox::about(this, "About Dialog", "This is an about dialog test!");
}

void messageDialog::on_AboutQtButton_clicked()
{
     label_dis->setText("About Qt Message Box");
     QMessageBox::aboutQt(this, "About Qt dialog");
}
