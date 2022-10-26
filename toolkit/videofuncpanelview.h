#pragma once

#include <QWidget>
#include "ui_videofuncpanelview.h"

class VideoFuncPanelView : public QWidget
{
	Q_OBJECT

public:
	VideoFuncPanelView(QWidget *parent = nullptr);
	~VideoFuncPanelView();

private:
	Ui::VideoFuncPanelViewClass ui;
};
