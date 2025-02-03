#include <gui.h>
#include <qmainwindow.h>
#include <qwidget.h>

mainWindow::mainWindow(QMainWindow* parent)
{
    window = new Ui::MW_MainWindow;
    window->setupUi(parent);
}
void mainWindow::init()
{
    
}
