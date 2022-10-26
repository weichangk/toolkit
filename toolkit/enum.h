#pragma once
#include <QObject>
class Enum : public QObject
{
    Q_OBJECT
public:
    enum NavigationEnum
    {
        videofuncpanelview,
        audiofuncpanelview,
        picturefuncpanelview,

    };
    Q_ENUM(NavigationEnum)
};
