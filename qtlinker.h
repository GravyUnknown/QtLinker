#ifndef QTLINKER_H
#define QTLINKER_H

#include <QMainWindow>

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
};
#endif // QTLINKER_H
