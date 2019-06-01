#include "float.hpp"


FloatWindow::FloatWindow(QWidget *parent, QString name): QWidget(parent, Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint) {}

void FloatWindow::mousePressEvent(QMouseEvent* event)
{
    if (event->button() == Qt::LeftButton) {
        this->relativePos = this->pos() - event->globalPos();
    }
    
    lastPressed = event->timestamp();
}

void FloatWindow::mouseMoveEvent(QMouseEvent* event)
{
    this->move(event->globalPos() + relativePos);
}

void FloatWindow::mouseReleaseEvent(QMouseEvent* event)
{
    if (event->button() == Qt::RightButton && (event->timestamp() - pressedTime) < 100)
    emit rightClick();
}


FloatWindow::~FloatWindow() = default



