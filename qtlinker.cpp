#include "qtlinker.h"
#include "./ui_qtlinker.h"

qtLinker::qtLinker(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::qtLinker)
{
    ui->setupUi(this);
}

qtLinker::~qtLinker()
{
    delete ui;
}
