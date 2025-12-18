#include "pathBar.h"

Pathbar::Pathbar(QWidget *parent)
    :QLineEdit(parent)
{
    this->editorCompleter = new QCompleter(this);
    this->fsModel = new QFileSystemModel(editorCompleter);

    fsModel->setRootPath("C:/");

    editorCompleter->setModel(fsModel);
    editorCompleter->setCompletionMode(QCompleter::PopupCompletion);

    this->setCompleter(editorCompleter);

}
