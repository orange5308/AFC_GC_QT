#ifndef PCSLINK_PE_H
#define PCSLINK_PE_H

#include <QDialog>

namespace Ui {
class PCSLink_pe;
}

class PCSLink_pe : public QDialog
{
    Q_OBJECT

public:
    explicit PCSLink_pe(QWidget *parent = nullptr);
    void setPCSData(QString, QString, QString, QString);
    ~PCSLink_pe();

private:
    Ui::PCSLink_pe *ui;
signals:
    void send_data(QString pcs_ip, QString pcs_port, QString pcs_id, QString PCS_eid);
    void send_control(double pcs_connect, double pcs_reset, double pcs_control_time_local);
private slots:
    void on_buttonBox_accepted();
    void on_pushButton_pressed();

    void on_pushButton_2_pressed();

    void on_pushButton_3_pressed();

public slots:
    void PCSdataupdate_slots(double *);
};

#endif // PCSLINK_PE_H
