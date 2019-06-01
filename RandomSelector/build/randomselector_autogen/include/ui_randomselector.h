/********************************************************************************
** Form generated from reading UI file 'randomselector.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RANDOMSELECTOR_H
#define UI_RANDOMSELECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RandomSelector
{
public:
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *RandomSelector)
    {
        if (RandomSelector->objectName().isEmpty())
            RandomSelector->setObjectName(QStringLiteral("RandomSelector"));
        RandomSelector->resize(400, 300);
        centralWidget = new QWidget(RandomSelector);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        RandomSelector->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(RandomSelector);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        RandomSelector->setMenuBar(menuBar);
        mainToolBar = new QToolBar(RandomSelector);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        RandomSelector->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(RandomSelector);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        RandomSelector->setStatusBar(statusBar);

        retranslateUi(RandomSelector);

        QMetaObject::connectSlotsByName(RandomSelector);
    } // setupUi

    void retranslateUi(QMainWindow *RandomSelector)
    {
        RandomSelector->setWindowTitle(QApplication::translate("RandomSelector", "RandomSelector", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RandomSelector: public Ui_RandomSelector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RANDOMSELECTOR_H
