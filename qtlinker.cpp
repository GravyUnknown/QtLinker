#include "qtlinker.h"
#include "./ui_qtlinker.h"
#include "pathBar.h"

qtLinker::qtLinker(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::qtLinker)
{
    ui->setupUi(this);

    centralWidget = new QWidget(this);
    centralLayout = new QVBoxLayout(centralWidget);


    this->setCentralWidget(centralWidget);
    this->m_fsmodel = new QFileSystemModel();


    centralWidget->setLayout(centralLayout);

    pathbar = new Pathbar(centralWidget);
    pathbar->initCompleter(m_fsmodel);
    centralLayout->addWidget(pathbar);

}

qtLinker::~qtLinker()
{
    delete ui;
}
