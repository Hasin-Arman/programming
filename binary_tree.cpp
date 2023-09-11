#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int id;
    node *left;
    node *right;
    node *parent;
};

class Binary_tree
{
public:
    node *root;
    node *allNode[7];

    Binary_tree()
    {
        root = NULL;
    }

    node *create_node(int value)
    {
        node *newNode = new node;
        newNode->id = value;
        newNode->left = NULL;
        newNode->right = NULL;
        newNode->parent = NULL;
        return newNode;
    }

    int height()
    {
        node *cnt = root;
        int count = 0;
        while (cnt != NULL)
        {
            if (cnt->left != NULL){
                cnt = cnt->left;
                count++;
            }
            else{
                cnt = cnt->right;
                count++;
            }
        }
        return count;
    }

    void build_binary_tree()
    {
        for (int i = 0; i < 7; i++)
        {
            allNode[i] = create_node(i);
        }
        allNode[0]->left = allNode[1];
        allNode[0]->right = allNode[2];

        allNode[1]->left = allNode[5];
        allNode[1]->parent = allNode[0];

        allNode[2]->left = allNode[3];
        allNode[2]->right = allNode[4];
        allNode[2]->parent = allNode[0];
        allNode[4]->right=allNode[6];
        allNode[5]->parent = allNode[1];
        allNode[3]->parent = allNode[2];
        allNode[4]->parent = allNode[2];
        root = allNode[0];
    }

    void print()
    {
        for (int i = 0; i < 6; i++)
        {
            int p = -1;
            int l = -1;
            int r = -1;
            if (allNode[i]->parent != NULL)
            {
                p = allNode[i]->parent->id;
            }
            if (allNode[i]->left != NULL)
            {
                l = allNode[i]->left->id;
            }
            if (allNode[i]->right != NULL)
            {
                r = allNode[i]->right->id;
            }
            cout << "Node-> " << i << " "
                 << "parent: " << p << " "
                 << "left: " << l << " "
                 << "right: " << r << endl;
        }
    }
};
int main()
{
    Binary_tree bt;
    bt.build_binary_tree();
    bt.print();
    cout<<bt.height();
}