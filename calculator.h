#ifndef CALCULATOR_H
#define CALCULATOR_H
#include<QWidget>
#include<QPushButton>
#include<QLineEdit>
#include<QLayout>
#include<QVBoxLayout>
#include<QHBoxLayout>
class Calculator : public QWidget
{
    Q_OBJECT
public:
    Calculator();
    ~Calculator();
public slots:     //槽函数
void zeroButtonPress();
void oneButtonPress();
void twoButtonPress();
void threeButtonPress();
void fourButtonPress();
void fiveButtonPress();
void sixButtonPress();
void sevenButtonPress();
void eightButtonPress();
void nineButtonPress();
void addButtonPress();
void subButtonPress();
void mulButtonPress();
void divButtonPress();
void clearButtonPress();
private:
QLineEdit *operateEdit;//声明显示框
QPushButton *zeroButton;
QPushButton *oneButton;
QPushButton *twoButton;
QPushButton *threeButton;
QPushButton *fourButton;
QPushButton *fiveButton;
QPushButton *sixButton;
QPushButton *sevenButton;
QPushButton *eightButton;
QPushButton *nineButton;
QPushButton *clearButton;
QPushButton *addButton;
QPushButton *subButton;
QPushButton *divButton;
QPushButton *mulButton;
QPushButton *equButton;
QHBoxLayout *firstLayout;
QHBoxLayout *secondLayout;
QHBoxLayout *thirdLayout;
QHBoxLayout *fourthLayout;
QVBoxLayout *mainLayout;
QString input1;//计算器第一个运算操作数
QString input2;//计算器第二个运算操作数
char operate;//运算符
};
#endif// CALCULATOR_H
