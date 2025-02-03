#include <mainWindow.h>
#include <qmainwindow.h>
#include <qwidget.h>
#include <topPanel.h>


class mainWindow 
{
public:
    explicit mainWindow(QMainWindow* parent = nullptr);
    Ui::MW_MainWindow* window;
    void init();
};
