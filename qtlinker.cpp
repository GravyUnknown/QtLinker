#include "qtlinker.h"
#include "./ui_qtlinker.h"

qtLinker::qtLinker(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::qtLinker)
{
    ui->setupUi(this);

    centralWidget = new QWidget(this);
    centralLayout = new QVBoxLayout(centralWidget);


    this->setCentralWidget(centralWidget);

    centralWidget->setLayout(centralLayout);

    pathbar = new Pathbar(centralWidget);
    centralLayout->addWidget(pathbar);

}

qtLinker::~qtLinker()
{
    delete ui;
}
