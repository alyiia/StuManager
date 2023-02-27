#include "List.h"
#include <iostream>

bool initialList(Node* list)
{
    return true;
}

void addNode(Node* list, Node* node)
{
    Node * head = list;
    while((*list).m_next != nullptr){
        list = (*list).m_next;
    }
    (*list).m_next = node;
    head->m_size++;
}

bool delNode(Node* list, int pos)
{
    Node* tmp = findNode(list, pos - 1);
    if(tmp == nullptr)
        return false;
    Node* next = tmp->m_next;
    tmp->m_next = next->m_next;
    delete next;
    return true;
}

Node* findNode(Node* list, int pos)
{
    if(pos <= 0)
        return nullptr;
    for (int i = 0; i < pos; i++)
    {
        if((*list).m_next != nullptr)
            list = (*list).m_next;
        else 
            return 0;
    }
    return list;
}

void printNode(Node* list)
{
    if (list->m_next == nullptr)
        return;
    
    list = list->m_next;
    while (list->m_next != nullptr)
    {
        if(list->m_sex)
            std::cout<<list->m_ID<<" "<<list->m_name<<" Boy \n";
        else
            std::cout<<list->m_ID<<" "<<list->m_name<<" Girl \n";
        list = list->m_next;
    }
    if(list->m_sex)
        std::cout<<list->m_ID<<" "<<list->m_name<<" Boy \n";
    else
        std::cout<<list->m_ID<<" "<<list->m_name<<" Girl \n";
}