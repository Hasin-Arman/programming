#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int id;
    int value;
    node *left;
    node *right;
    node *parent;
};

class Binary_tree
{
public:
    node *root;
    Binary_tree()
    {
        root = NULL;
    }

    node *create_node(int id, int value)
    {
        node *newNode = new node;
        newNode->id = id;
        newNode->value = value;
        newNode->left = NULL;
        newNode->right = NULL;
        newNode->parent = NULL;
        return newNode;
    }


    bool check_perfect(node* root)
    {
        if(root==NULL){
            return true;
        }
        if(root->left!=NULL && root->right!=NULL){
            return true;
        }
        bool l_check=check_perfect(root->left);
        bool r_check=check_perfect(root->right);
        if(l_check && r_check){
            return true;
        }
        else{
            return false;
        } 
    }



    void Insertion(int id, int value)
    {
        node *newNode = create_node(id, value);
        if (root == NULL)
        {
            root = newNode;
            return;
        }
        queue<node *> q;
        q.push(root);

        while (!q.empty())
        {
            node *a = q.front();
            q.pop();

            if (a->left != NULL)
            {
                q.push(a->left);
            }
            else
            {
                a->left = newNode;
                newNode->parent = a;
                return;
            }

            if (a->right != NULL)
            {
                q.push(a->right);
            }

            else
            {
                a->right = newNode;
                newNode->parent = a;
                return;
            }
        }
    }

    int height(node* root)
    {
        if(root==NULL){
            return 0;
        }
        return max(height(root->right), height(root->left))+1;
    }

    void BFS()
    {
        if (root == NULL)
        {
            return;
        }
        queue<node *> q;
        q.push(root);

        while (!q.empty())
        {
            node *a = q.front();
            q.pop();
            int p = -1, l = -1, r = -1;
            if (a->left != NULL)
            {
                l = a->left->id;
                q.push(a->left);
            }

            if (a->right != NULL)
            {
                r = a->right->id;
                q.push(a->right);
            }

            if (a->parent != NULL)
            {
                p = a->parent->id;
            }
            cout << "Node id = " << a->value << " left Child = " << l;
            cout << " right Child = " << r << " Parent id = " << p << "\n";
        }
    }

    void DFS(node *a)
    {
        if (a == NULL)
        {
            return;
        }
        cout << a->id << " ";
        DFS(a->left);
        DFS(a->right);
    }

    void Inorder(node *a)
    {
        if (a == NULL)
        {
            return;
        }
        Inorder(a->left);
        cout << a->id << " ";
        Inorder(a->right);
    }

    void preorder(node *a)
    {
        if (a == NULL)
        {
            return;
        }
        cout << a->id << " ";
        preorder(a->left);
        preorder(a->right);
    }

    void postorder(node *a)
    {
        if (a == NULL)
        {
            return;
        }
        postorder(a->left);
        postorder(a->right);
        cout << a->id << " ";
    }

    void search(node *a, int value)
    {
        if (a == NULL)
        {
            return;
        }
        if (a->value == value)
        {
            cout << a->id << " ";
        }
        search(a->left, value);
        search(a->right, value);
    }
};
int main()
{
    Binary_tree bt;
    bt.Insertion(0, 5);
    bt.Insertion(1, 10);
    bt.Insertion(2, 10);
    bt.Insertion(3, 9);
    bt.Insertion(4, 8);
    bt.Insertion(5, 5);
    bt.BFS();
    cout<<bt.check_perfect(bt.root)<<"\n";
    cout << bt.height(bt.root)<<"\n";
}