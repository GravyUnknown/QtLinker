#ifndef QTLINKER_H
#define QTLINKER_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QWidget>
#include <QFileSystemModel>

class Pathbar;
class FileListing;

QT_BEGIN_NAMESPACE
namespace Ui {
class qtLinker;
}
QT_END_NAMESPACE

class qtLinker : public QMainWindow
{
    Q_OBJECT

public:
    qtLinker(QWidget *parent = nullptr);
    ~qtLinker();

private:
    Ui::qtLinker *ui;
    QWidget *centralWidget;
    QVBoxLayout *centralLayout;
    Pathbar *pathbar;
    FileListing *filelisting;
    QFileSystemModel *m_fsmodel;

};
#endif // QTLINKER_H
