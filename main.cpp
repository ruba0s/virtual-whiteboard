<<<<<<< HEAD

=======
#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setMinimumSize(600, 480); // Min window size
    w.setWindowIcon(QIcon(":/icons/icons/appLogo.png")); // set window/app logo

    w.show();
    return a.exec();
}
>>>>>>> b9c94abe14461709980ebd09e99edc718355f5e7
