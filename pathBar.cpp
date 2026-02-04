#include "pathBar.h"

void Pathbar::initCompleter(QFileSystemModel *model) {
  if (fsModel == nullptr) {
      throw std::runtime_error("PathBar.h: Model is not defined");
  }
  fsModel = model;
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
