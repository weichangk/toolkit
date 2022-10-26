#pragma once

#include <QtWidgets/QWidget>
#include "ui_Toolkit.h"
#include "TkWidget.h"
#include "Enum.h"
#include <QMetaEnum>

class Toolkit : public TkWidget
{
    Q_OBJECT

public:
    Toolkit(QWidget *parent = nullptr);
    ~Toolkit();

private:
    Ui::ToolkitClass ui;
    void SetNavigationListWidget();
    void NavigationToView(QListWidgetItem* item);

private slots:
    void ShowMaximizedOrNormal();
};
