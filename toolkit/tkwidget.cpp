#include "TkWidget.h"

TkWidget::TkWidget(QWidget* parent)
    : QWidget(parent)
{
    this->setWindowFlags(Qt::WindowType::FramelessWindowHint);
}

TkWidget::~TkWidget()
{}

void TkWidget::mousePressEvent(QMouseEvent* e)
{
    cur_pos = e->globalPos();
}

void TkWidget::mouseMoveEvent(QMouseEvent* e)
{
    new_pos = QPoint(e->globalPos() - cur_pos);
    move(x() + new_pos.x(), y() + new_pos.y());
    cur_pos = e->globalPos();
}