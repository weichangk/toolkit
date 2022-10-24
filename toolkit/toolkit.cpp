#include "Toolkit.h"
#include <QGraphicsDropShadowEffect>

Toolkit::Toolkit(QWidget *parent)
    : TkWidget(parent)
{
    ui.setupUi(this);

    connect(ui.MinimizeBtn, SIGNAL(clicked(void)), this, SLOT(showMinimized()));
    connect(ui.MaximizeBtn, SIGNAL(clicked(void)), this, SLOT(showMaximizedOrNormal()));
    connect(ui.CloseBtn, SIGNAL(clicked(void)), this, SLOT(close()));

    setNavigationListWidget();
}

Toolkit::~Toolkit()
{}

void Toolkit::setNavigationListWidget()
{
    ui.NavigationListWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui.NavigationListWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    QListWidgetItem* videoTools = new QListWidgetItem(ui.NavigationListWidget);
    videoTools->setIcon(QIcon("./resource/image/videotool30.png"));
    videoTools->setText(tr("视频工具"));
    QListWidgetItem* audioTools = new QListWidgetItem(ui.NavigationListWidget);
    audioTools->setIcon(QIcon("./resource/image/audiotool30.png"));
    audioTools->setText(tr("音频工具"));
    QListWidgetItem* pictureTools = new QListWidgetItem(ui.NavigationListWidget);
    pictureTools->setIcon(QIcon("./resource/image/picturetool30.png"));
    pictureTools->setText(tr("图片工具"));
    QListWidgetItem* myFiles = new QListWidgetItem(ui.NavigationListWidget);
    myFiles->setIcon(QIcon("./resource/image/myfiles30.png"));
    myFiles->setText(tr("我的文件"));
}

void Toolkit::showMaximizedOrNormal()
{
    if (this->isMaximized())
    {
        this->showNormal();
    }
    else
    {
        this->showMaximized();
    }
}