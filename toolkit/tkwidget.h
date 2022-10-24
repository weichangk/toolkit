#pragma once

#include <QtWidgets/QWidget>
#include <QMouseEvent>
#include <QPoint>

class TkWidget : public QWidget
{
    Q_OBJECT

public:
    TkWidget(QWidget* parent = nullptr);
    ~TkWidget();

protected:
    void mousePressEvent(QMouseEvent* e);
    void mouseMoveEvent(QMouseEvent* e);

private:
    QPoint cur_pos;
    QPoint new_pos;
};