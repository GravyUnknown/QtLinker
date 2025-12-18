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
private:
    QCompleter *editorCompleter;
};

#endif // PATHBAR_H
