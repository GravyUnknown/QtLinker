#include "filelisting.h"

FileListing::FileListing(QWidget* parent, QFileSystemModel* model):QListView(parent), m_fsModel(model) {
    if (m_fsModel != nullptr)
    {
        this->setModel(m_fsModel);

        QModelIndex rootIndex = m_fsModel->setRootPath("C:\\");
        this->setRootIndex(rootIndex);

        this->setSelectionMode(QAbstractItemView::ContiguousSelection);

    }
    else{
        std::cout << "Model not set";
    }
}
