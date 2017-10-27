#include "inputdialog.h"
#include <QInputDialog>

inputDialog::inputDialog(QWidget *parent) :
    QDialog(parent)
{
    setupUi(this);
}

inputDialog::~inputDialog()
{
}

void inputDialog::on_changeNameButton_clicked()
{
    bool ok;
    QString text = QInputDialog::getText(this, tr("Input"),
        tr("Please input name:"), QLineEdit::Normal, nameEdit->text(), &ok);
    if (ok) {
        nameEdit->setText(text);
    }
}

void inputDialog::on_changeSexButton_clicked()
{
    QStringList SexItems;
    SexItems << tr("Male") << tr("Female");
    bool ok;
    QString SexItem = QInputDialog::getItem(this, tr("Select Dialog"),
        tr("Please select sex:"), SexItems, 0, false, &ok);
    if (ok && !SexItem.isEmpty()) {
        sexEdit->setText(SexItem);
    }
}

void inputDialog::on_changeAgeButton_clicked()
{
    bool ok;
    int age = QInputDialog::getInt(this, tr("int input dialog"),
        "Please input age:", ageEdit->text().toInt(&ok), 0, 100, 1, &ok);
    if (ok) {
        ageEdit->setText(QString("%1").arg(age));
    }
}

void inputDialog::on_changeScoreButton_clicked()
{
    bool ok;
    double score = QInputDialog::getDouble(this, "Double input dialog",
        "Please input score", scoreEdit->text().toDouble(&ok), 0, 100, 1, &ok);
    if (ok) {
        scoreEdit->setText(QString("%1").arg(score));
    }
}
