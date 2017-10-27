#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "ui_dialog.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog, public Ui::Dialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void on_fileButton_clicked();

    void on_inputButton_clicked();

    void on_colorButton_clicked();

    void on_fontButton_clicked();

    void on_udfButton_clicked();

    void on_messageButton_clicked();

private:
};

#endif // DIALOG_H
