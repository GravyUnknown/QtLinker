#include "qtlinker.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qtLinker w;
    w.show();
    return a.exec();
}
