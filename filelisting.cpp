#include "filelisting.h"

FileListing::FileListing(QWidget* parent, QFileSystemModel* model):QListView(parent), m_fsModel(model) {
    if (parent == nullptr)
    {
        throw std::runtime_error("FileListing.h: parent is not defined");
    }
    if (model == nullptr)
    {
        throw std::runtime_error("FileListing.h: model is not defined");
    }


    this->setModel(m_fsModel);

    QModelIndex rootIndex = m_fsModel->setRootPath("C:\\");
    this->setRootIndex(rootIndex);

    this->setSelectionMode(QAbstractItemView::ContiguousSelection);

}
