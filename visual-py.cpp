#include <iostream>
#include <QApplication>
//#include <gui.h>
int main (int arg , char *argv[])
{
    QApplication app(arg , argv);
  //  QMainWindow* window;
    //mainWindow windowShow(window); 
    //windowShow->window->show();
    std::cout << "is running" << std::endl;
    
    return app.exec();
}
