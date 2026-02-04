#include "pathBar.h"

void Pathbar::initCompleter(QFileSystemModel *model) {
    fsModel = model;
    if (fsModel == nullptr) {
        throw std::runtime_error("PathBar.h: model is not defined");
    }
    fsModel->setRootPath("");

    editorCompleter->setModel(fsModel);
    editorCompleter->setCompletionMode(QCompleter::PopupCompletion);
}

Pathbar::Pathbar(QWidget *parent) : QLineEdit(parent) {
    if (parent == nullptr)
    {
        throw std::runtime_error("PathBar.cpp: Parent is not defined");
    }
    this->editorCompleter = new QCompleter(this);

    this->setCompleter(editorCompleter);


}


void Pathbar::onTextEdit()
{
    QDir pathGiven = this->text();
    if(!pathGiven.exists())
    {
        qDebug() << "Use the completer for a valid path";
    }
}
