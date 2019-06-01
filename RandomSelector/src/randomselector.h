#ifndef RANDOMSELECTOR_H
#define RANDOMSELECTOR_H

#include <QMainWindow>
#include <QScopedPointer>

namespace Ui {
class RandomSelector;
}

class RandomSelector : public QMainWindow {
    Q_OBJECT
    
public:
    explicit RandomSelector(QWidget *parent = nullptr);
    ~RandomSelector() override;
    
private:
    QScopedPointer<Ui::RandomSelector> m_ui;
};

#endif // RANDOMSELECTOR_H
