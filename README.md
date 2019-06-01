# Essay-Qt-CMake_QtQuick

CMake with Qt Quick :: (NAIVE!!!) helloworld

只是默写了一下 Qt Quick 的基本程序结构而已，对 Quick QML 非常有好感，而且我之前也（受到 Androlua 的 Java 反射布局表启发，但主要是独立灵感，因为我自己有这种面向语言编程的习惯）

这个应用程序只是作为正在上高二没时间的我，没有任何的实用价值，没有事件监听、没有 IO、没有异步操作、没有外部接入、没有列表视图、没有动画和复杂点的布局、没有图形组件、没有设计模式、没有可复用的库

虽然没有价值，但这些文件皆系纯手工没有抄任何代码，自己从 truncated 文件插入字符而来，整个项目都是这样。

## 最简单的初始化

这部分也是默写的

只需要这些文件，使用 CMake 来管理 C++ 项目

+ 根项目的 __CMakeLists.txt__
+ 应用的 __CMakeLists.txt__ 主要是为了方便配置管理
+ 应用的代码和头文件，头文件用于定义接口（比如 `class`、`namespace`）来在不同的模块之间包含交互（非 `static` C++ 过程）
+ 应用的资源文件，如果有的话

### CMake

> Root project CMakeLists.txt

```cmake
cmake_minimum_required(VERSION 3.0)

project(ExampleQtQ5uick)

find_package(Qt REQUIRED COMPONENTS Gui Quick)
#find_package(Qt5Widgets CONFIG REQUIRED)

# 其中，moc / uic / rcc 都是 Qt 对应用程序编程问题中常见需求（Qt 的自省元编程、signal / slots 和 UI 布局（基于 fixed size）、应用资源嵌入）的解决方案
# 属于开发工具集成
set (CMAKE_AUTOMOC ON)
set (CMAKE_AUTOUIC ON)
set (CMAKE_AUTORCC ON)

add_subdirectory (app)
```

> App CMakeLists.txt

```cmake
set (sApp src/main.c++)
qt5_add_resources(rApp resources.qrc)

set (CMAKE_INCLUDE_CURRENT_DIR ON)
#include_directories (.)

add_executable(main ${sApp} ${rApp})

target_link_libraries(main Qt5::Gui Qt5::Qml)

install(TARGETS main DESTINATION bin)
```

这样的话如果用 Archlinux 系的 fakeroot 安装也比较好收拾，只要写好 PKGBuild 就可以了


### C++ / QML

这里只是快速开始示范而已，甚至没有包含 C++ 类定义

```c++
// main.c++
#include <GuiApplication>
#include <QmlApplicationEngine>

int main(int argc, char *argv[]) {
  QGuiApplication app(argc, argv);
  QQmlApplicationEngine engin(QUrl("qrc:qml/main.qml"));
  return app.exec();
}
```

> qml/main.qml

```qml
import QtQuick 2.0
import QtQuick.Window 2.0

Window {
  visible: true
  width: 400
  height: 300
  
  Rectangle {
    anchors.fill: parent
    color: "steelblue"
    
    Text {
      anchors.centerIn: parent

      font: {
        weight: FontWeight.Thin
        pixelSize: 30
      }

      color: "white"
      text: "Hello world!"
    }
  }
}
```

> resources.qrc

```xml
<!DOCTYPE RCC><RCC version="1.0">
  <qresource>
    <file>qml/main.qml</file>
  </qresource>
</RCC>
```

Qt Gui & Qt Quick 真的比 Qt Widgets 好很多，因为它支持进行简单地响应式设计！

## C++ 继承 `QMainWindow` 类（Qt5 Widgets）的做法

```c++
// header app.h++
#pragma once

#include <QMainWindow>

namespace Ui {
  class ForApp;
}

class FooApp : public QMainWindow {
  Q_OBJECT

public:
  explicit FooApp(QWidget *parent = nullptr);
  ~FooApp() override;
  
private:
  QScopedPointer<Ui::ForApp> my_ui;
};
```

> Implementation

```c++
FooApp::FooApp(QWidget *parent): QMainWindow(parent), my_ui(new Ui::FooApp) {
   my_ui->setupUi(this);
}

FooApp::~FooApp() = default;
```

