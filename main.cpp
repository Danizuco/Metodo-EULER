#include "euler.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    euler w;
    w.show();

    return a.exec();
}
