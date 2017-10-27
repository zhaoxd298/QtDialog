#ifndef INPUTDIALOG_H
#define INPUTDIALOG_H

#include <QDialog>
#include "ui_inputdialog.h"

namespace Ui {
class inputDialog;
}

class inputDialog : public QDialog, public Ui::inputDialog
{
    Q_OBJECT

public:
    explicit inputDialog(QWidget *parent = 0);
    ~inputDialog();

private slots:
    void on_changeNameButton_clicked();

    void on_changeSexButton_clicked();

    void on_changeAgeButton_clicked();

    void on_changeScoreButton_clicked();

private:
};

#endif // INPUTDIALOG_H
