#include <bits/stdc++.h>

using namespace std;

class node
{
public:
    int value;
    node *left;
    node *right;
};

class BST
{
public:
    node *root;

    BST()
    {
        root = NULL;
    }

    node *create_node(int value)
    {
        node *newnode = new node;
        newnode->value = value;
        newnode->left = NULL;
        newnode->right = NULL;
        return newnode;
    }

    void Insert(int value)
    {
        node *newnode = create_node(value);
        if (root == NULL)
        {
            root = newnode;
            return;
        }
        node *prv = NULL;
        node *crnt = root;
        while (crnt != NULL)
        {
            if (newnode->value < crnt->value)
            {
                prv = crnt;
                crnt = crnt->left;
            }

            else
            {
                prv = crnt;
                crnt = crnt->right;
            }
        }

        if (newnode->value < prv->value)
        {
            prv->left = newnode;
        }
        else
        {
            prv->right = newnode;
        }
    }

    bool Search(int value)
    {
        node *cnt = root;
        while (cnt != NULL)
        {
            if (value > cnt->value)
            {
                cnt = cnt->right;
            }
            else if (value < cnt->value)
            {
                cnt = cnt->left;
            }
            else
            {
                return true;
            }
        }
        return false;
    }

    void Delete(int value)
    {
        node *cnt = root;
        node *prv = NULL;

        while (cnt != NULL)
        {
            if (value < cnt->value)
            {
                prv = cnt;
                cnt = cnt->left;
            }

            else if (value > cnt->value)
            {
                prv = cnt;
                cnt = cnt->right;
            }
            else
            {
                break;
            }
        }

        if (cnt == NULL)
        {
            cout << "value is not present" << endl;
            return;
        }
        // case 1:node has no children
        if (cnt->left == NULL && cnt->right == NULL)
        {
            if (prv->left != NULL && cnt->value == value)
            {
                prv->left -= NULL;
            }
            else
            {
                prv->right = NULL;
            }
            delete cnt;
            return;
        }

        // //case 2:node has one child
        if (cnt->left != NULL && cnt->right == NULL)
        {
            if (prv->left != NULL && prv->left->value == cnt->value)
            {
                prv->left = cnt->left;
            }
            else
            {
                prv->right = cnt->left;
            }
            delete cnt;
            return;
        }

        if (cnt->right != NULL && cnt->left == NULL)
        {
            if (prv->left != NULL && prv->left->value == cnt->value)
            {
                prv->left = cnt->right;
            }
            else
            {
                prv->right = cnt->right;
            }
            delete cnt;
            return;
        }
        // case 3: node has two children
        // inorder succesor->min value in right subtree
        if (cnt->left != NULL && cnt->right != NULL)
        {
            node *tmp = cnt->right;
            while (tmp->left != NULL)
            {
                tmp = tmp->left;
            }
            int saved = tmp->value;
            Delete(saved);
            cnt->value = saved;
        }
    }

    int min_value()
    {
        node *cnt = root;
        node *tmp = cnt->left;
        while (tmp->left != NULL)
        {
            tmp = tmp->left;
        }
        return tmp->value;
    }

    int max_value()
    {
        node *cnt = root;
        node *tmp = cnt->right;
        while (tmp->right != NULL)
        {
            tmp = tmp->right;
        }
        return tmp->value;
    }

    bool Check_BST(node *root, node *max, node *min)
    {
        if(root==NULL){
            return true;
        }
        if (min != NULL && root->value <= min->value)
        {
            return false;
        }
        if (max != NULL && root->value >= max->value)
        {
            return false;
        }

        bool leftValid = Check_BST(root->left, root, min);
        bool rightValid = Check_BST(root->right, max, root);
        return leftValid && rightValid;
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
            int l = -1, r = -1;
            if (a->left != NULL)
            {
                l = a->left->value;
                q.push(a->left);
            }
            if (a->right != NULL)
            {
                r = a->right->value;
                q.push(a->right);
            }
            cout << "Node id = " << a->value << " left Child = " << l;
            cout << " right Child = " << r << "\n";
        }
    }
};

int main()
{
    BST bst;
    // bst.Insert(6);
    // bst.Insert(4);
    // bst.Insert(3);
    // bst.Insert(5);
    // bst.Insert(7);
    // bst.Insert(8);

    bst.Insert(6);
    bst.Insert(4);
    bst.Insert(3);
    bst.Insert(5);
    bst.Insert(7);
    bst.Insert(8);
    bst.Insert(5);
    bst.BFS();
    cout << bst.Check_BST(bst.root, NULL, NULL);
}