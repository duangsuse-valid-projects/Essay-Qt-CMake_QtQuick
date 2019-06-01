#include "randomselector.h"
#include <QApplication>

#include "float.hpp"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    RandomSelector w;
    w.show();
    
    FloatWindow flo(nullptr, "foo");
    flo.show();

    return app.exec();
}

