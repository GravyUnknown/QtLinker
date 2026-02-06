#ifndef PATHBAR_H
#define PATHBAR_H
#include <QLineEdit>
#include <QCompleter>
#include <QFileSystemModel>
#include <QDebug>
#include <QDir>

class PathBar: public QLineEdit
{
    Q_OBJECT

public:
    PathBar(QWidget *parent=nullptr);
    void initCompleter(QFileSystemModel* model);
private:
    QCompleter *editorCompleter;
    QFileSystemModel *fsModel=nullptr;
};

#endif // PATHBAR_H
