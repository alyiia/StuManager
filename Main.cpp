#include <iostream>
#include "List.h"
#include "UI.h"


using namespace std;

int main(int argc, char const *argv[])
{
    Node *list = new Node("0", 0, "0",nullptr);
    bool isQuit = false;
    while(!isQuit)
    {
        bool yes = false;
        printf("\n\n");
        mainUI();
        int option = 0;
        cin>>option;
        switch (option)
        {
        case 1:
            addUI(list);
            break;
        case 2:
            delUI(list);
            break;
        case 3:
            modUI(list);
            break;
        case 4:
            printf("\n");
            printNode(list);
            break;
        case 0:
            sureUI(yes);
            if(yes)
            {
                isQuit = true;
            }
            else
            {
                isQuit = false;
            }

            break;
        default:
            break;
        }
    }

    return 0;
}
