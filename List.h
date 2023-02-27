#ifndef LIST_H
#define LIST_H

#include <string>

struct Node
{

    std::string m_name;
    std::string m_ID;
    bool m_sex;     //1 for boy, 0 for girl
    int m_size = 0;

    Node* m_next;

    Node(std::string name, bool sex, std::string id, Node* next=nullptr)
        : m_name(name), m_sex(sex), m_ID(id), m_next(next) {}
};

bool initialList(Node* list);
void addNode(Node* list, Node* node);
bool delNode(Node* list, int pos);   //
Node* findNode(Node* list, int pos);    //not include 0
void printNode(Node* list);

#endif