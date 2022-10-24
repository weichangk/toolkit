#include "LoadFileQss.h"

void LoadFileQss::setStyle(const QString& fileName)
{
    QFile fileQss(fileName);
    fileQss.open(QFile::ReadOnly);
    qApp->setStyleSheet(fileQss.readAll());
    fileQss.close();
}