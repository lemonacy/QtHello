#ifndef TRANSPARENTMAINWINDOW_H
#define TRANSPARENTMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class TransparentMainWindow;
}

class TransparentMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit TransparentMainWindow(QWidget *parent = 0);
    ~TransparentMainWindow();
    void paintEvent(QPaintEvent *);
private:
    Ui::TransparentMainWindow *ui;
};

#endif // TRANSPARENTMAINWINDOW_H
