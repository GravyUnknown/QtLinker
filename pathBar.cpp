#include "pathBar.h"

Pathbar::Pathbar(QWidget *parent)
    :QLineEdit(parent)
{
    this->editorCompleter = new QCompleter;

    editorCompleter->setModel(new QFileSystemModel(editorCompleter));
    this->setCompleter(this->editorCompleter);
}
