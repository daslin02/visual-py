#include <mainWindow.h>
#include <qmainwindow.h>
#include <qwidget.h>
#include <topPanel.h>


class mainWindow 
{
public:

    Ui::MW_MainWindow* window;

    explicit mainWindow(QMainWindow* parent = nullptr);
    void init();
};
