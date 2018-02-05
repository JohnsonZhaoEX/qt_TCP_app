#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtNetwork/QTcpSocket>
#include <QtNetwork/QTcpServer>
#include <QTimer>


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
    void init(); //

private slots:
    void on_send_clicked();
    void newListen();
    void acceptConnection();
    void displayError(QAbstractSocket::SocketError);

private:
    Ui::MainWindow *ui;
    QTcpSocket *tcpSocket;
    QTcpServer *tcpServer;
};

#endif // MAINWINDOW_H
