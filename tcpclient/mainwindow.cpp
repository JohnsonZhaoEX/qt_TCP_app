#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    init();
}

void MainWindow::init()
{
    this->tcpSocket = new QTcpSocket(this);

    newTCPConnect();
    connect(tcpSocket,SIGNAL(readyRead()),this,SLOT(revData()));
    connect(tcpSocket,SIGNAL(error(QAbstractSocket::SocketError)),
            this,SLOT(displayError(QAbstarctSocket::SocketError)));
}

void MainWindow::revData()
{
            QString datas = tcpSocket->readAll();
            ui->lineEdit1->setText(datas);
/*            QString ip = tcpSocket->connectToHost();
            ui->lineEdit->
*/        }
void MainWindow::newTCPConnect()
{
            tcpSocket->abort();
            tcpSocket->connectToHost("192.168.1.105",6666);
        }

void MainWindow::displayError(QAbstractSocket::SocketError)
{
            qDebug()<<tcpSocket->errorString();
            tcpSocket->close();
        }

MainWindow::~MainWindow()
{
    delete ui;
}
