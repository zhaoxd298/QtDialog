#ifndef MESSAGEDIALOG_H
#define MESSAGEDIALOG_H

#include <QDialog>
#include "ui_messagedialog.h"

namespace Ui {
class messageDialog;
}

class messageDialog : public QDialog, public Ui::messageDialog
{
    Q_OBJECT

public:
    explicit messageDialog(QWidget *parent = 0);
    ~messageDialog();

private slots:
    void on_QuestionButton_clicked();

    void on_InformationButton_clicked();

    void on_WarningButton_clicked();

    void on_CriticalButton_clicked();

    void on_AboutButton_clicked();

    void on_AboutQtButton_clicked();

private:
};

#endif // MESSAGEDIALOG_H
