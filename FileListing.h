#ifndef FILELISTING_H
#define FILELISTING_H

#include <QListView>
#include <QFileSystemModel>
#include <QMessageBox>

class FileListing: public QListView
{
public:
    FileListing(QWidget* parent=nullptr, QFileSystemModel* model=nullptr);
private:
    QListView* m_listview;
    QFileSystemModel* m_fsModel;
    QMessageBox* m_messageBox;

public slots:
    void onTextEdit();
    void onSelectionChanged(const QItemSelection& selected, const QItemSelection& deselected);
};

#endif // FILELISTING_H
