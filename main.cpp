#include <QApplication>
#include <QLabel>
#include <QDoubleSpinBox>
#include <QDebug>
#include "transparentmainwindow.h"
#include "mainwindow.h"
#include "logindialog.h"
//#include <QtWebKitWidgets/QWebView>
//#pragma comment(lib, "Qt5Widgetsd.lib")
//#pragma comment(lib, "Qt5WebKitWidgetsd.lib")

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // ========================================
    //    MainWindow mainWin;
    //    LoginDialog loginDialog;
    //    if (loginDialog.exec() == QDialog::Accepted)
    //    {
    //        mainWin.show();
    //        return a.exec();
    //    }
    //    else
    //        return 0;

    // ========================================

    TransparentMainWindow w;
    w.show();
    // ========================================

    //    QDoubleSpinBox box;
    //    box.show();
    // ========================================

    //    QWebView view;
    //    view.setWindowFlags(Qt::FramelessWindowHint);
    //    view.setFixedSize(637, 746);
    //    view.setStyleSheet("background:transparent");
    //    view.setWindowOpacity(1);
    //    view.load(QUrl("http://www.xgsdk.com"));
    //    view.load(QUrl::fromLocalFile("E:/workspace/qt/helloqt/helloqt/changge.png"));
    //    view.show();

    return a.exec();
}
