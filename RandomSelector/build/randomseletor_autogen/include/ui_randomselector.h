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
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RandomSelector
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLCDNumber *lcdNumber;
    QPushButton *pushButton;

    void setupUi(QMainWindow *RandomSelector)
    {
        if (RandomSelector->objectName().isEmpty())
            RandomSelector->setObjectName(QStringLiteral("RandomSelector"));
        RandomSelector->resize(400, 300);
        centralWidget = new QWidget(RandomSelector);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 60, 291, 181));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lcdNumber = new QLCDNumber(verticalLayoutWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));

        verticalLayout->addWidget(lcdNumber);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        RandomSelector->setCentralWidget(centralWidget);

        retranslateUi(RandomSelector);

        QMetaObject::connectSlotsByName(RandomSelector);
    } // setupUi

    void retranslateUi(QMainWindow *RandomSelector)
    {
        RandomSelector->setWindowTitle(QApplication::translate("RandomSelector", "RandomSelector", nullptr));
        pushButton->setText(QApplication::translate("RandomSelector", "Increment", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RandomSelector: public Ui_RandomSelector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RANDOMSELECTOR_H
