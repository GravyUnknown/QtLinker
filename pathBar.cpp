#include "pathBar.h"

void Pathbar::initCompleter(QFileSystemModel *model) {
  fsModel = model;
  if (fsModel == NULL) {
    return;
  }
  fsModel->setRootPath("");

  editorCompleter->setModel(fsModel);
  editorCompleter->setCompletionMode(QCompleter::PopupCompletion);
}

Pathbar::Pathbar(QWidget *parent) : QLineEdit(parent) {
  this->editorCompleter = new QCompleter(this);

  this->setCompleter(editorCompleter);
}
