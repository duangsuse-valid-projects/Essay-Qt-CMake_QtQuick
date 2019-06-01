#pragma once

#include <QWidget>
#include <QPoint>
#include <QMouseEvent>

class FloatWindow: public QWidget {
    Q_OBJECT

public:
    explicit FloatWindow(QWidget *parent = nullptr, QString name = "");
    ~FloatWindow();

private:
    QPoint relativePos;
    long lastPressed;
    
    void mouseMoveEvent(QMouseEvent * event) override;
    void mousePressEvent(QMouseEvent * event) override;
    void mouseReleaseEvent(QMouseEvent * event) override;

signals:
    void rightClick();
};

