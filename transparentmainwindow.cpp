#include "transparentmainwindow.h"
#include "ui_transparentmainwindow.h"
#include <QtGui>

TransparentMainWindow::TransparentMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TransparentMainWindow)
{
    ui->setupUi(this);
    setWindowTitle(tr("透明窗口"));
    setWindowFlags(Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground);
    setFixedSize(637, 746);
}

TransparentMainWindow::~TransparentMainWindow()
{
    delete ui;
}

void TransparentMainWindow::paintEvent(QPaintEvent *) {
    QPainter p(this);
    QPixmap pixmap = QPixmap(":/images/changge");
    p.drawPixmap(0, 0, 637, 746, pixmap);
}
