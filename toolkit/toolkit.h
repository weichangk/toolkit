#pragma once

#include <QtWidgets/QWidget>
#include "ui_Toolkit.h"
#include "TkWidget.h"

class Toolkit : public TkWidget
{
    Q_OBJECT

public:
    Toolkit(QWidget *parent = nullptr);
    ~Toolkit();

private:
    Ui::ToolkitClass ui;
    void setNavigationListWidget();

private slots:
    void showMaximizedOrNormal();
};
