#ifndef PATHBAR_H
#define PATHBAR_H
#include <QLineEdit>
#include <QCompleter>
#include <QFileSystemModel>
#include <QWidget>
#include <QDebug>
#include <QDir>

class Pathbar: public QLineEdit
{
    Q_OBJECT

public:
    Pathbar(QWidget *parent=nullptr);
    void initCompleter(QFileSystemModel* model);
private:
    QCompleter *editorCompleter;
    QFileSystemModel *fsModel=nullptr;

public slots:
    void onTextEdit();
};

#endif // PATHBAR_H
