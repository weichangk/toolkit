#include "Toolkit.h"

Toolkit::Toolkit(QWidget *parent)
    : TkWidget(parent)
{
    ui.setupUi(this);

    connect(ui.minimizeBtn, SIGNAL(clicked(void)), this, SLOT(showMinimized()));
    connect(ui.maximizeBtn, SIGNAL(clicked(void)), this, SLOT(showMaximizedOrNormal()));
    connect(ui.closeBtn, SIGNAL(clicked(void)), this, SLOT(close()));
    connect(ui.tabContent, SIGNAL(itemClicked(QListWidgetItem * item)), this, SLOT(showMinimized()));
    SetNavigationListWidget();
}

Toolkit::~Toolkit()
{}

void Toolkit::SetNavigationListWidget()
{
    ui.navigationListWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui.navigationListWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    QListWidgetItem* videoTools = new QListWidgetItem(ui.navigationListWidget);
    videoTools->setIcon(QIcon("./resource/image/videotool30.png"));
    videoTools->setText(tr("视频工具"));
    QListWidgetItem* audioTools = new QListWidgetItem(ui.navigationListWidget);
    audioTools->setIcon(QIcon("./resource/image/audiotool30.png"));
    audioTools->setText(tr("音频工具"));
    QListWidgetItem* pictureTools = new QListWidgetItem(ui.navigationListWidget);
    pictureTools->setIcon(QIcon("./resource/image/picturetool30.png"));
    pictureTools->setText(tr("图片工具"));
    QListWidgetItem* myFiles = new QListWidgetItem(ui.navigationListWidget);
    myFiles->setIcon(QIcon("./resource/image/myfiles30.png"));
    myFiles->setText(tr("我的文件"));
}

void Toolkit::NavigationToView(QListWidgetItem* item)
{
    QMetaEnum metaNavigation = QMetaEnum::fromType<Enum::NavigationEnum>();
    Enum::NavigationEnum view = (Enum::NavigationEnum)metaNavigation.keyToValue(item->text().toStdString().data());

    switch (view)
    {
    case Enum::videofuncpanelview:
        break;
    case Enum::audiofuncpanelview:
        break;
    case Enum::picturefuncpanelview:
        break;
    default:
        break;
    }
}

void Toolkit::ShowMaximizedOrNormal()
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