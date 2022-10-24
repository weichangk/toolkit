#include "Toolkit.h"
#include <QtWidgets/QApplication>
#include "loadfileqss.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoadFileQss::setStyle("./resource/qss/Allthe.qss");
    Toolkit w;
    w.show();
    return a.exec();
}

void Max()
{

}