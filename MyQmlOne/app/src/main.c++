#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include <app.h++>
#include <iostream>

int Main::main(int argc, const char *argv[]) {
    QGuiApplication app(argc, const_cast<char **>(argv));
    QQmlApplicationEngine engine(QUrl("qrc:res/main.qml"));
    
    QObject::connect(engine.children().at(0), SIGNAL(clicked), this, SLOT(onClick));

    return app.exec();
}

void Main::onClick()
{
    std::cout << "click" << std::endl;
}

int main() {
    Main mai(0, (char **) {});
    return mai.main(0, (const char **) {});
}

