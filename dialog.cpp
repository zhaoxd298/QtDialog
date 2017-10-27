#include "dialog.h"
#include "inputdialog.h"
#include "messagedialog.h"
#include <QFileDialog>
#include <QColorDialog>
#include <QPalette>
#include <QFontDialog>
#include <QMessageBox>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent)
{
    setupUi(this);
}

Dialog::~Dialog()
{
}

void Dialog::on_fileButton_clicked()
{
    QString file_name = QFileDialog::getOpenFileName(this, "Open File",
        "./", "(C++ Files *.cpp C Files *.c Head Files *.h *.*)");
    if (file_name.length() > 0) {
        filelineEdit->setText(file_name);
    }
}

void Dialog::on_colorButton_clicked()
{
    QColor c = QColorDialog::getColor();
    if (c.isValid()) {
        //colorFrame->setPalette(QPalette(c));
        colorLabel->setPalette(QPalette(c));
    }
}

void Dialog::on_fontButton_clicked()
{
    bool ok;
    QFont f = QFontDialog::getFont(&ok);
    if (ok) {
        fontlineEdit->setText(tr("Welcome!"));
        fontlineEdit->setFont(f);
    }
}

void Dialog::on_inputButton_clicked()
{
    inputDialog input_dialog;

    input_dialog.exec();
}


void Dialog::on_messageButton_clicked()
{
    messageDialog message_dialog;
    message_dialog.exec();
}

void Dialog::on_udfButton_clicked()
{
    udflineEdit->setText("Custom Message Box");
    QMessageBox udfMsgBox;
    udfMsgBox.setWindowTitle("Custom Message Box");
    QPushButton *yesBtn = udfMsgBox.addButton("Yes", QMessageBox::ActionRole);
    QPushButton *noBtn = udfMsgBox.addButton("No", QMessageBox::ActionRole);
    QPushButton *cancelBtn = udfMsgBox.addButton(QMessageBox::Cancel);

    udfMsgBox.setText("This is a custom message box");
    udfMsgBox.setIconPixmap(QPixmap(":/img/icon.png"));
    udfMsgBox.exec();

    if (udfMsgBox.clickedButton() == yesBtn) {
        udflineEdit->setText("Custom Message Box/Yes");
    } else if (udfMsgBox.clickedButton() == noBtn) {
        udflineEdit->setText("Custom Message Box/No");
    } else if (udfMsgBox.clickedButton() == cancelBtn) {
        udflineEdit->setText("Custom Message Box/Cancel");
    }
}
