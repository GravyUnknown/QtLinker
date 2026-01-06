#ifndef PATHBAR_H
#define PATHBAR_H
#include <QLineEdit>
#include <QCompleter>
#include <QFileSystemModel>
#include <QWidget>

class Pathbar: public QLineEdit
{
    Q_OBJECT

public:
    Pathbar(QWidget *parent=nullptr);
    void initCompleter(QFileSystemModel* model);
private:
    QCompleter *editorCompleter;
    QFileSystemModel *fsModel=nullptr;
};

#endif // PATHBAR_H
