#ifndef SETTINGS_H
#define SETTINGS_H

#include <QDialog>
#include "trbackend.h"

namespace Ui {
class Settings;
}

class TrDialog;

class Settings : public QDialog
{
    Q_OBJECT

public:
    explicit Settings(QWidget *parent = 0);
    ~Settings();

    TrBackend defaultBackend();
    QList<TrBackend> backends();
    int defaultAction();

private slots:
    void on_buttonBox2_accepted();

    void on_addBtn_clicked();

    void on_removeBtn_clicked();

    void on_defaultBtn_clicked();

    void on_editBtn_clicked();

private:
    void setBackends(QList<TrBackend> backends);

    Ui::Settings *ui;
    TrDialog *m_trDlg;
};

#endif // SETTINGS_H
