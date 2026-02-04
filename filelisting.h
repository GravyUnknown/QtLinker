#ifndef FILELISTING_H
#define FILELISTING_H

#include <QListView>
#include <QFileSystemModel>

class FileListing: public QListView
{
public:
    FileListing(QWidget* parent=nullptr, QFileSystemModel* model=nullptr);
private:
    QListView* m_listview;
    QFileSystemModel* m_fsModel;

public slots:
    void onTextEdit();
};

#endif // FILELISTING_H
