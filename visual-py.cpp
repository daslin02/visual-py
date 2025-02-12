
#include <gui.h>
#include <QApplication>
#include <QMainWindow>
#include <qgraphicsscene.h>
#include <qgraphicsview.h>
#include <qline.h>
#include <qlogging.h>
#include <qnamespace.h>
#include <qpen.h>
#include <QGraphicsLineItem>
//#include <gui.h>
int main (int arg , char *argv[])
{
    QApplication app(arg , argv);
    QMainWindow window;

    mainWindow uiWin(&window);
    QGraphicsLineItem* line = uiWin.graphic->scene->addLine(100,100,-100,-100 , QPen(Qt::green));
    if (line)
    {
        QLineF pos(2000 , 3000 , -1000 , - 4000);
        line->setLine(pos);
    } 
    window.show(); 

    return app.exec();
}
