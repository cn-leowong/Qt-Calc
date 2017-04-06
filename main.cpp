#include <QApplication>//包含应用程序类
#include "calculator.h"//包含计算器类
int main(int argc, char *argv[])//main函数的标准写法
{
QApplication app(argc, argv); //创建一个QApplication对象，管理应用程序的资源
Calculator mainwindow; //产生一个计算器对象
mainwindow.showMaximized();//显示计算器窗体(默认以最大化的形式显示)
return app.exec();//让程序进入消息循环，等待可能的菜单、工具条、鼠标等的输入，进行响应。
}
