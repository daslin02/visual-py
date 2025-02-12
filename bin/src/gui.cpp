#include <gui.h>
#include <qdebug.h>
#include <qgraphicsscene.h>
#include <qgraphicsview.h>
#include <qline.h>
#include <qlogging.h>
#include <qmainwindow.h>
#include <qnamespace.h>
#include <qpen.h>
#include <qwidget.h>


Graph::Graph(QGraphicsView* view , QGraphicsScene* scene)
{ 
    this->view = view;
    this->scene = scene;
}
void Graph::add()
{
    scene->addText("penis");
}


mainWindow::mainWindow( QMainWindow* parent)
{
    window->setupUi(parent);
    init(window->GV_view, window->GS_scene);
}
void mainWindow::init(QGraphicsView* view , QGraphicsScene* scene)
{
    graphic = new Graph(view , scene);
}
