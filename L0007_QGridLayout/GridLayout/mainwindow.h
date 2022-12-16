#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGridLayout>//1
#include <QPushButton>//2
#include <array>//3

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public:
    QGridLayout* m_pGridLayout;//4
    std::array<QPushButton*,9> m_arrayBtn;//5
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
