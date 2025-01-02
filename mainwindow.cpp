#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Set window title
    setWindowTitle("Virtual Whiteboard");

    // Set button icons
    ui->brushButton->setIcon(QIcon(":/icons/icons/brush.png"));
    ui->pencilButton->setIcon(QIcon(":/icons/icons/pencil.png"));
    ui->eraserButton->setIcon(QIcon(":/icons/icons/eraser.png"));
    ui->clearBoardButton->setIcon(QIcon(":/icons/icons/clearBoard.png"));
    ui->colorPaletteButton->setIcon(QIcon(":/icons/icons/colorPalette.png"));

    // Connect button signals to slots
    //connect(ui->brushButton, &QToolButton::clicked, this, &MainWindow::selectBrush);
    //connect(ui->eraserButton, &QToolButton::clicked, this, &MainWindow::selectEraser);
}

MainWindow::~MainWindow()
{
    delete ui;
}
