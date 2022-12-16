#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    int iNum;//6

    ui->setupUi(this);
    iNum = 0;//7
    m_pGridLayout = new QGridLayout(ui->centralWidget);//8
    for(int i=0; i<3; i++)//9
    {//10
        for(int j=0; j<3; j++)//11
        {//12
            m_arrayBtn[iNum] = new QPushButton(QString("row:%1-column:%2--index=%3").arg(i).arg(j).arg(i*3+j),ui->centralWidget);//13
            m_pGridLayout->addWidget(m_arrayBtn[iNum],i,j,1,1);//14
            iNum++;//15
        }//16
    }//17
    m_pGridLayout->setSpacing(0);//18
}

MainWindow::~MainWindow()
{
    delete ui;
}
