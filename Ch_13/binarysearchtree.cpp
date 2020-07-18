/*Binary Search Tree program*/
#include <iostream>
#include <string>
using namespace std;
typedef string ItemType;
struct TreeNodeType{
    ItemType Data;
    TreeNodeType *Left;
    TreeNodeType *Right;
};
class TreeClass{
    public:
        TreeClass();
        ~TreeClass();
        bool InTree(const ItemType &Item);
        void Insert(const ItemType &Item);
        void Display(ostream &Output) const;
        int Length();
    private:
        TreeNodeType *Root;
        void MyDestruct(TreeNodeType *&T);
        bool MyInTree(TreeNodeType *T, const ItemType &Item);
        void MyInsert(TreeNodeType *&T, const ItemType &Item);
        void MyDisplay(TreeNodeType *T, ostream &Output) const;
        int MyLength();
        TreeClass(const TreeClass &L); //copy constructor
        operator = (const TreeClass &L); //assignment operator
};
//------------------------------
TreeClass::TreeClass()
    :Root(NULL)
{
}
//------------------------------
void TreeClass::MyDestruct(TreeNodeType *&T)
{
    if (T!=NULL){
        MyDestruct((*T).Left);
        MyDestruct((*T).Right);
        delete T;
    }
}
//------------------------------
TreeClass::~TreeClass()
{
    MyDestruct(Root);
}
//--------------------------
bool TreeClass::MyInTree(TreeNodeType *T, const ItemType &Item)
{
    if (T==NULL){
        return false;
    }
    else if (Item == (*T).Data){
        return true;
    }
    else if(Item <(*T).Data){
        return MyInTree((*T).Left, Item);
    }
    else
    {
        return MyInTree((*T).Right, Item);
    } 
}
//------------------------------
bool TreeClass::InTree(const ItemType &Item)
{
    return MyInTree(Root, Item);
}
//------------------------------
void TreeClass::MyInsert(TreeNodeType*&T, const ItemType &Item)
{
    if(T==NULL){
        T = new TreeNodeType;
        (*T).Data = Item;
        (*T).Left = NULL;
        (*T).Right=NULL;
    }
    else if(Item <(*T).Data){
        MyInsert((*T).Left, Item);
    }
    else{
        MyInsert((*T).Right, Item);
    }
}
//-------------------------------------
void TreeClass::Insert( const ItemType &Item)
{
    MyInsert(Root,Item);
}
//------------------------------------
void TreeClass::MyDisplay(TreeNodeType*T, ostream &Output) const{
    if(T!= NULL){
        MyDisplay((*T).Left, Output);
        Output << (*T).Data << endl;
        MyDisplay((*T).Right, Output);
    }
}
//------------------------------------
void TreeClass::Display(ostream &Output) const{
    MyDisplay(Root, Output);
}
//-----------------------------------
int Length(){
    MyLength();
}
int main()
{
    TreeClass T;
    T.Insert("Sandburg");
    T.Insert("Strand");
    T.Insert("Angelou");
    T.Display(cout);
    return 0;
}
