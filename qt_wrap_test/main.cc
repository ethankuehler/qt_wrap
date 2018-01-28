
#include <QtWidgets/QApplication>
#include "qt_wrap.h"

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);

    qtw::Window window;

    window.show();

    return app.exec();
}
