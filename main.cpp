#include "qtlinker.h"
#include <iostream>

#include <QApplication>

int main(int argc, char *argv[]) {
    try{
        QApplication a(argc, argv);
        qtLinker w;
        w.show();
        return a.exec();
    }catch (const std::exception &e){
        std::cerr << e.what() << std::endl;
    }
}
