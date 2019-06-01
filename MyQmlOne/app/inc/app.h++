#pragma once
#include <QGuiApplication>

class Main: public QGuiApplication {
    Q_OBJECT

public:
    Main(int argc, char **argv): QGuiApplication(argc, argv) {};
    int main(int argc, const char* argv[]);
    ~Main() {};
private slots:
    void onClick();
};


