#include "UI.h"
#include <iostream>

void mainUI()
{
    printf("1.添加信息                    2.删除信息\n");
    printf("3.修改信息                    4.打印全部\n");
    printf("0.退出\n");
    printf("请输入您的操作(0~4)： ");
}

void sureUI(bool& yes)
{
    char repeat;
    printf("您确定吗？(y/n) : ");
    std::cin>>repeat;
    if (repeat == 'y')
    {
        yes = true;
    }
    else
    {
        yes = false;
    }
    
}

void addUI(Node* list)
{
    printf("请输入姓名： ");
    std::string name;
    std::cin>>name;
    printf("请输入性别(B/G 1/0)： ");
    bool sex;
    std::cin>>sex;
    printf("请输入ID： ");
    std::string id;
    std::cin>>id;

    printf("请确认以下信息是否无误(y/n): \n");
    std::cout<<"姓名： "<<name<<"\n";
    std::cout<<"性别： "<<(sex ? " Boy \n" : " Girl \n");
    std::cout<<"ID: "<<id<<"\n";
    char repeat;
    std::cin>>repeat;
    if(repeat == 'y')
    {
        Node* tmp = new Node(name, sex, id);
        addNode(list, tmp);
        printf("已添加成功！\n");
    }
    else
    {
        return;
    }
}

void delUI(Node* list)
{
    std::cout<<"请输入要删除的学生序号(0~"<<list->m_size<<"): \n";
    int pos;
    std::cin>>pos;
    bool yes = false;
    sureUI(yes);
    if(yes){
        delNode(list, pos);
    }else{
        return;
    }
}

void modUI(Node* list)
{
    std::cout<<"请输入要修改的学生序号(0~"<<list->m_size<<"): \n";
    int pos;
    std::cin>>pos;
}