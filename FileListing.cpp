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

        m_messageBox =  new QMessageBox();
        m_messageBox->setDefaultButton(QMessageBox::Ok);
        m_messageBox->setText(QString("Provide a valid path using the completer. \nPath is invalid %1").arg(edit->text()));
        m_messageBox->setIcon(QMessageBox::Critical);
        m_messageBox->exec();
    }

    this->setRootIndex(idx);


}



void FileListing::onSelectionChanged(const QItemSelection& s, const QItemSelection& d)
{
    QModelIndexList items = s.indexes();

    for (const QModelIndex& idx: std::as_const(items))
    {

        QString text  = idx.data(QFileSystemModel::FilePathRole).toString();

        qDebug() << text;
    }
}
