//help implimenting  maximum
/*linked list program*/
#include <iostream>
#include <string>
using namespace std;
typedef int ItemType;
// Nodetype is used by listClass
struct NodeType{
    ItemType Data;
    NodeType *Next;
};
class ListClass{
    public:
        ListClass(); //instanctiates an empty list
        ~ListClass(); // Deallocateds memory used by list
        void AddAtFront(const ItemType &Item); //adds new node to fromt of list
        void Write(ostream &Output) const; //writes list data in order
        int Length(); //returns the number of elements on the list
        ItemType LastOnList(); //retuns the data value stored on the list last
        int Sum(); // returns the sum of the data fields of all nodes in the list
        int Maximum(); // returns the maximum of the data field in the list
    private:
        NodeType *First;
};
//-------------------------
ListClass::ListClass()
    : First(NULL) //sets list to empty
    {
    }
//------------------------
ListClass::~ListClass()
/*Post: Memory used by list deallocated */
{
    NodeType *Curr = First;
    NodeType *Previous;
    while (Curr != NULL){
        Previous = Curr;
        Curr = (*Curr).Next;
        delete Previous;
    }
}
//--------------------
void ListClass::AddAtFront(const ItemType &Item)
/*Post: New node containing Item added at front of list*/
{
    NodeType *Temp;
    Temp = new NodeType;
    (*Temp).Data = Item;
    (*Temp).Next = First;
    First = Temp;
}
//----------------------------
void ListClass::Write(ostream &Output) const
/*post: write the data of nodes to output*/
{
    NodeType * Curr = First;
    while(Curr!= NULL){
        Output << (*Curr).Data << endl;
        Curr = (*Curr).Next;
    }
}
//-----------------------
int ListClass::Length()
/*Post: returns the length of the list*/
{
    NodeType * Total = First;
    int TheLength = 0;
    while(Total!= NULL){ 
      Total = (*Total).Next;
      TheLength ++; 
    }
    cout << "The total length is : " << TheLength << endl;
    return(TheLength);
}
ItemType ListClass::LastOnList()
/*returns the last data value on list*/
{
    NodeType *Current = First; //points at header 
    while((*Current).Next!=NULL){ //checks next node is there
        Current = (*Current).Next; // update pointer to the next node
    }
    cout << "The last value is: " << (*Current).Data << endl;
    return((*Current).Data);

}
ItemType ListClass::Sum()
/*Post: returns the sum of the values*/
{
     NodeType * Curr = First;
     ItemType Sum=0;
    while(Curr!= NULL){
        Sum = Sum + (*Curr).Data; // data is a field of nody type
        Curr = (*Curr).Next; //this is a pointer
    }
    cout<< "The sum is: " << Sum << endl;
    return(Sum);
}
ItemType ListClass::Maximum()
/*Post : returns the maximum of the values*/
{
    NodeType *Curr = First;
    ItemType maximum = 0;
    while(Curr!=NULL){
        if((*Curr).Data > maximum){
            maximum = (*Curr).Data;
        }  
        Curr = (*Curr).Next;
    }
    cout<< "The maximum is: " << maximum << endl;
    return(maximum);
}
int main()
{
    ListClass L;
    // L.AddAtFront("Sandburg");
    // L.AddAtFront("Strand");
    // L.AddAtFront("Angelou");
    L.AddAtFront(1);
    L.AddAtFront(2);
    L.AddAtFront(3);
    L.Write(cout);
    L.Length();
    L.LastOnList();
    L.Sum();
    L.Maximum();
    return(0);
}
