#include "FileListing.h"
#include <qlineedit.h>

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

    this->setSelectionMode(QAbstractItemView::ContiguousSelection);

}


void FileListing::onTextEdit()
{
    QLineEdit *edit = qobject_cast<QLineEdit*>(sender());

    if (edit == nullptr)
    {
        return;
    }


    QModelIndex idx = m_fsModel->index(edit->text());

    if (!idx.isValid())
    {
        qDebug() << "enter a valid path using the completer";
    }

    this->setRootIndex(idx);


}
