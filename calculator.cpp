#include"calculator.h"
Calculator::Calculator()
{
operateEdit = new QLineEdit(this);
operateEdit->setReadOnly(true); //设置显示框为只读
operateEdit->setText(tr("designed by wlb")); //此处显示
zeroButton = new QPushButton;
zeroButton->setText(tr("0"));
oneButton = new QPushButton;
oneButton->setText(tr("1"));
twoButton = new QPushButton;
twoButton->setText(tr("2"));
threeButton = new QPushButton;
threeButton->setText(tr("3"));
fourButton = new QPushButton;
fourButton->setText(tr("4"));
fiveButton = new QPushButton;
fiveButton->setText(tr("5"));
sixButton = new QPushButton;
sixButton->setText(tr("6"));
sevenButton = new QPushButton;
sevenButton->setText(tr("7"));
eightButton = new QPushButton;
eightButton->setText(tr("8"));
nineButton = new QPushButton;
nineButton->setText(tr("9"));
clearButton = new QPushButton;
clearButton->setText(tr("清除"));
addButton = new QPushButton;
addButton->setText(tr("+"));
subButton = new QPushButton;
subButton->setText(tr("-"));
mulButton = new QPushButton;
mulButton->setText(tr("*"));
divButton = new QPushButton;
divButton->setText(tr("/"));
equButton = new QPushButton;
equButton->setText(tr("="));
firstLayout = new QHBoxLayout;//初始化水平布局器firstLayout
firstLayout->addWidget(zeroButton);
firstLayout->addWidget(oneButton);
firstLayout->addWidget(twoButton);
firstLayout->addWidget(addButton);
secondLayout = new QHBoxLayout;
secondLayout->addWidget(threeButton);
secondLayout->addWidget(fourButton);
secondLayout->addWidget(fiveButton);
secondLayout->addWidget(subButton);
thirdLayout = new QHBoxLayout;
thirdLayout->addWidget(sixButton);
thirdLayout->addWidget(sevenButton);
thirdLayout->addWidget(eightButton);
thirdLayout->addWidget(mulButton);
fourthLayout = new QHBoxLayout;
fourthLayout->addWidget(nineButton);
fourthLayout->addWidget(clearButton);
fourthLayout->addWidget(equButton);
fourthLayout->addWidget(divButton);
mainLayout = new QVBoxLayout(this);
mainLayout->addWidget(operateEdit);
mainLayout->addLayout(firstLayout);
mainLayout->addLayout(secondLayout);
mainLayout->addLayout(thirdLayout);
mainLayout->addLayout(fourthLayout);
connect(zeroButton,SIGNAL(clicked()),this,SLOT(zeroButtonPress()));
connect(oneButton,SIGNAL(clicked()),this,SLOT(oneButtonPress()));
connect(twoButton,SIGNAL(clicked()),this,SLOT(twoButtonPress()));
connect(threeButton,SIGNAL(clicked()),this,SLOT(threeButtonPress()));
connect(fourButton,SIGNAL(clicked()),this,SLOT(fourButtonPress()));
connect(fiveButton,SIGNAL(clicked()),this,SLOT(fiveButtonPress()));
connect(sixButton,SIGNAL(clicked()),this,SLOT(sixButtonPress()));
connect(sevenButton,SIGNAL(clicked()),this,SLOT(sevenButtonPress()));
connect(eightButton,SIGNAL(clicked()),this,SLOT(eightButtonPress()));
connect(nineButton,SIGNAL(clicked()),this,SLOT(nineButtonPress()));
connect(addButton,SIGNAL(clicked()),this,SLOT(addButtonPress()));
connect(subButton,SIGNAL(clicked()),this,SLOT(subButtonPress()));
connect(mulButton,SIGNAL(clicked()),this,SLOT(mulButtonPress()));
connect(divButton,SIGNAL(clicked()),this,SLOT(divButtonPress()));
connect(equButton,SIGNAL(clicked()),this,SLOT(addButtonPress()));
connect(clearButton,SIGNAL(clicked()),this,SLOT(clearButtonPress()));
this->setWindowTitle(tr("计算器"));//设置窗体标题
    input2= "0";//初始化运算操作数2为0
    input1 = "0";//初始化运算操作数1为0
    operate = '0';//初始化运算符为’0’
}
Calculator::~Calculator(){}
void Calculator::zeroButtonPress()//定义槽函数
{
if(input2=="0")//如果当前显示框为0
{
        input2="0";//变0为1
}
else//如果当前显示框不为0
{
        input2= operateEdit->text();
        input2.append(tr("0"));//在显示的数据后面追加0
}
operateEdit->setText(input2);//更新显示框中的显示信息
}
void Calculator::oneButtonPress()//定义槽函数
{
if(input2=="0")//如果当前显示框为0
{
        input2="1";//变0为1
}
else//如果当前显示框不为0
{
        input2= operateEdit->text();
        input2.append(tr("1"));//在显示的数据后面追加1
}
operateEdit->setText(input2);//更新显示框中的显示信息
}
void Calculator::twoButtonPress()//定义槽函数
{
if(input2=="0")//如果当前显示框为0
{
        input2="2";//变0为2
}
else//如果当前显示框不为0
{
        input2= operateEdit->text();
        input2.append(tr("2"));//在显示的数据后面追加2
}
operateEdit->setText(input2);//更新显示框中的显示信息
}
void Calculator::threeButtonPress()//定义槽函数
{
if(input2=="0")//如果当前显示框为0
{
        input2="3";//变0为3
}
else//如果当前显示框不为0
{
        input2= operateEdit->text();
        input2.append(tr("3"));//在显示的数据后面追加3
}
operateEdit->setText(input2);//更新显示框中的显示信息
}
void Calculator::fourButtonPress()//定义槽函数
{
if(input2=="0")//如果当前显示框为0
{
        input2="4";//变0为4
}
else//如果当前显示框不为0
{
        input2= operateEdit->text();
        input2.append(tr("4"));//在显示的数据后面追加4
}
operateEdit->setText(input2);//更新显示框中的显示信息
}
void Calculator::fiveButtonPress()
{
if(input2=="0")//如果当前显示框为0
{
        input2="5";
}
else//如果当前显示框不为0
{
        input2= operateEdit->text();
        input2.append(tr("5"));
}
operateEdit->setText(input2);//更新显示框中的显示信息
}
void Calculator::sixButtonPress()
{
if(input2=="0")//如果当前显示框为0
{
        input2="6";
}
else//如果当前显示框不为0
{
        input2= operateEdit->text();
        input2.append(tr("6"));
}
operateEdit->setText(input2);//更新显示框中的显示信息
}
void Calculator::sevenButtonPress()
{
if(input2=="0")//如果当前显示框为0
{
        input2="7";
}
else//如果当前显示框不为0
{
        input2= operateEdit->text();
        input2.append(tr("7"));
}
operateEdit->setText(input2);//更新显示框中的显示信息
}
void Calculator::eightButtonPress()
{
if(input2=="0")//如果当前显示框为0
{
        input2="8";
}
else//如果当前显示框不为0
{
        input2= operateEdit->text();
        input2.append(tr("8"));
}
operateEdit->setText(input2);//更新显示框中的显示信息
}
void Calculator::nineButtonPress()
{
if(input2=="0")//如果当前显示框为0
{
        input2="9";
}
else//如果当前显示框不为0
{
        input2= operateEdit->text();
        input2.append(tr("9"));
}
operateEdit->setText(input2);//更新显示框中的显示信息
}
void Calculator::addButtonPress()
{
float first,second;
input2= operateEdit->text();//把当前显示的数据保存到运算操作数2中
if(operate == '0')//如果是第一次按下运算符键
{
        input1 = input2;//把运算操作数2中的数据保存到运算操作数1中
input2= "0";//清除运算操作数2中的数据
operate = '+';//把运算符键置’+’
}
else//如果是第二次按下运算符键
{
        second=input2.toFloat();//把运算操作数2中的数据转化为浮点类型
first=input1.toFloat();//把运算操作数1中的数据转化为浮点类型
switch(operate)//根据当前的运算符判断做何操作
 {
case'+':
first = first+second;break;
case'-':
first = first-second;break;
case'*':
first = first*second;break;
case'/':
first = first/second;break;
}

input1 = QString::number(first,'f',2);//把运算的结果转化成为可以在显示框显示的类型
input2 = "0";//清除运算操作数2中的数据
operate = '0';//把运算符键置“0”
operateEdit->setText(input1);//更新显示框中的显示内容
}
}
void Calculator::subButtonPress()
{
float first,second;
input2= operateEdit->text();//把当前显示的数据保存到运算操作数2中
if(operate == '0')//如果是第一次按下运算符键
{
input1 = input2;//把运算操作数2中的数据保存到运算操作数1中
input2= "0";//清除运算操作数2中的数据
operate = '-';//把运算符键置’+’
  }
else//如果是第二次按下运算符键
{
        second=input2.toFloat();//把运算操作数2中的数据转化为浮点类型
first=input1.toFloat();//把运算操作数1中的数据转化为浮点类型
switch(operate)//根据当前的运算符判断做何操作
 {
case'+':
first = first+second;break;
case'-':
first = first-second;break;
case'*':
first = first*second;break;
case'/':
first = first/second;break;
}

input1 = QString::number(first,'f',2);//把运算的结果转化成为可以在显示框显示的类型
input2 = "0";//清除运算操作数2中的数据
operate = '0';//把运算符键置“0”
operateEdit->setText(input1);//更新显示框中的显示内容
}
}
void Calculator::mulButtonPress()
{
float first,second;
input2= operateEdit->text();//把当前显示的数据保存到运算操作数2中
if(operate == '0')//如果是第一次按下运算符键
{
        input1 = input2;//把运算操作数2中的数据保存到运算操作数1中
input2= "0";//清除运算操作数2中的数据
operate = '*';//把运算符键置’+’

  }
else//如果是第二次按下运算符键
{
        second=input2.toFloat();//把运算操作数2中的数据转化为浮点类型
first=input1.toFloat();//把运算操作数1中的数据转化为浮点类型
switch(operate)//根据当前的运算符判断做何操作
 {
case'+':
first = first+second;break;
case'-':
first = first-second;break;
case'*':
first = first*second;break;
case'/':
first = first/second;break;
}

input1 = QString::number(first,'f',2);//把运算的结果转化成为可以在显示框显示的类型
input2 = "0";//清除运算操作数2中的数据
operate = '0';//把运算符键置“0”
operateEdit->setText(input1);//更新显示框中的显示内容
}
}
void Calculator::divButtonPress()
{
float first,second;
input2= operateEdit->text();//把当前显示的数据保存到运算操作数2中
if(operate == '0')//如果是第一次按下运算符键
{
        input1 = input2;//把运算操作数2中的数据保存到运算操作数1中
input2= "0";//清除运算操作数2中的数据
operate = '/';
  }
else //如果是第二次按下运算符键
{
 second=input2.toFloat();//把运算操作数2中的数据转化为浮点类型
first=input1.toFloat();//把运算操作数1中的数据转化为浮点类型
switch(operate)//根据当前的运算符判断做何操作
 {
case'+':
first = first+second;break;
case'-':
first = first-second;break;
case'*':
first = first*second;break;
case'/':
first = first/second;break;
}

input1 = QString::number(first,'f',2);//把运算的结果转化成为可以在显示框显示的类型
input2 = "0";//清除运算操作数2中的数据
operate = '0';//把运算符键置“0”
operateEdit->setText(input1);//更新显示框中的显示内容
}
}

void Calculator::clearButtonPress()
{
 input2="0";
 input1="0";
operateEdit->setText(input2);
}
