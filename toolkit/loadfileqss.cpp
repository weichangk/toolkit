#include "LoadFileQss.h"

void LoadFileQss::SetStyle(const QString& fileName)
{
    QFile fileQss(fileName);
    fileQss.open(QFile::ReadOnly);
    qApp->setStyleSheet(fileQss.readAll());
    fileQss.close();
}