#include <mainWindow.h>
#include <qgraphicsscene.h>
#include <qgraphicsview.h>
#include <qmainwindow.h>
#include <qwidget.h>
#include <topPanel.h>

class Graph 
{
public:
    QGraphicsView* view;
    QGraphicsScene* scene;
    Graph(QGraphicsView* view, QGraphicsScene* scene);
    void add();

};

class mainWindow 
{
public:
    Graph* graphic;
    explicit mainWindow( QMainWindow* parent = nullptr );
    Ui::MW_MainWindow* window = new Ui::MW_MainWindow();
    void init(QGraphicsView* view , QGraphicsScene* scene);
};
