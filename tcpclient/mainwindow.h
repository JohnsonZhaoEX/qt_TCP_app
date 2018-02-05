#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtNetwork>
#include <QtNetwork/QTcpSocket>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void init();
    void newTCPConnect();


private:
    Ui::MainWindow *ui;
    QTcpSocket *tcpSocket;

private slots:
    void revData();
    void displayError(QAbstractSocket::SocketError);

};

#endif // MAINWINDOW_H
