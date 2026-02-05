#include "QtLinker.h"
#include "./ui_QtLinker.h"
#include "PathBar.h"
#include "FileListing.h"

qtLinker::qtLinker(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::qtLinker) {
  ui->setupUi(this);

  centralWidget = new QWidget(this);
  centralLayout = new QVBoxLayout(centralWidget);

  this->setCentralWidget(centralWidget);
  this->m_fsmodel = new QFileSystemModel(this);

  centralWidget->setLayout(centralLayout);

  pathbar = new PathBar(centralWidget);
  pathbar->initCompleter(m_fsmodel);
  centralLayout->addWidget(pathbar);

  filelisting = new FileListing(centralWidget, m_fsmodel);
//  connect(m_fsmodel, &QFileSystemModel::directoryLoaded, this, &qtLinker::onDirectoryLoaded);


  centralLayout->addWidget(filelisting);

  connect(pathbar, &QLineEdit::returnPressed, filelisting, &FileListing::onTextEdit);

}


/*
void qtLinker::onDirectoryLoaded(const QString &path){

    if(path == "C:\\" || path=="C:/"){
        QModelIndex idx = m_fsmodel->index(path);
        if (idx.isValid())
        {
            filelisting->setRootIndex(idx);
        }
    }

}*/

qtLinker::~qtLinker() { delete ui; }

