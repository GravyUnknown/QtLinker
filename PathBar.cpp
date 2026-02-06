#include "PathBar.h"

void PathBar::initCompleter(QFileSystemModel *model) {
    fsModel = model;
    if (fsModel == nullptr) {
        throw std::runtime_error("PathBar.h: model is not defined");
    }
    fsModel->setRootPath("");

    editorCompleter->setModel(fsModel);
    editorCompleter->setCompletionMode(QCompleter::PopupCompletion);
}

PathBar::PathBar(QWidget *parent) : QLineEdit(parent) {
    if (parent == nullptr)
    {
        throw std::runtime_error("PathBar.cpp: Parent is not defined");
    }
    this->editorCompleter = new QCompleter(this);

    this->setCompleter(editorCompleter);


}


