#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/logo.ico"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{   int num1; // 阳离子随机数
    int num2; // 阴离子随机数

    const char*cationic[10] = {"H", "Na", "Mg", "Ca", "Fe", "Al", "K", "NH4", "Cu", "Zn"}; // 阳离子数组
    const char*anionic[9] = {"CI", "O", "S", "SO4", "CO3", "NO3", "SO3", "PO4", "OH"}; // 阴离子数组

    num1 = rand() % 10;

    ui->label->setText(cationic[num1]); // 设定lable值
    ui->label->setStyleSheet("QLabel{background-color:rgb(0,128,0);}"); // 设定lable颜色

    num2 = rand() % 9;
    ui->label_2->setText(anionic[num2]);
    ui->label_2->setStyleSheet("QLabel{background-color:rgb(255,255,0);}");

    // 刷新界面
    ui->label->repaint();
    ui->label_2->repaint();
}
