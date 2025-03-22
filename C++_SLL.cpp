#include <iostream>

    using namespace std;
    template<typename etype>
   
    class DCLL_NODE{
    private:
    etype DATA;
    DCLL_NODE<etype>* prevnode;
    DCLL_NODE<etype>* nextnode;
    friend DCLL;
    }
    
    template<typename etype>
    class DCLL{
    public:
    DCLL();
    
    ~DCLL();
    
    void setup(){head = NULL; tail =NULL;};
  
    void printnode(DCLL_NODE<etype>* printnode){cout<<printnode->data;}
   
    void push(etype data){
    newnode = new DCLL_NODE(etype data);
    if(head == NULL)
    {
     head = newnode;   
     tail = newnode;
    }
    else
    {
        tail->nextnode = newnode;
        newnode->prvnode = tail;
        newnode->nextnode = head;
        head->prevnode = newnode;
        tail = newnode;
    }
    }; // from create to push 
    
    int popasking(){
    cout<<"choose how pop the node"<<"\n1:pop by node number 2:pop by node data \n 3: pop head 4: pop tail"<<end1;
    cin>>int number;
    return number;
    }
    
    DCLL_NODE* pop(){
    DCLL_NODE& findnode;
    switch (popasking()) {
        case 1: cout<<"enter node number"<<end1;
                cin>>int node_number;
                findnode = head;
                while(--node_number)
                     findnode = findnode->nextnode;
                break;
        case 2: cout<<"enter node data"<<end1;
                cin>>int node_data;
                findnode = find(node_data);
                break;
        case 3: findnode = head;
                break;
        case 4: findnode = tail;
                break;
        default: cout<<"this number is wrong plz using 1~4"
                 break;
    }
    printnode(findnode);
    popnode(findnode); 
    };
    
    void popnode(DCLL_NODE* delete_node){
    delete_node->prvnode->nextnode = delete_node->nextnode;
    delete_node->nextnode->prvnode = delete_node->prevnode;
    delete_node = NULL;
    delete delete_node
    }
   
    DCLL_NODE* find(const etype data,DCLL_NODE* head){
    DCLL_NODE* findnode = head 
    while(findnode->DATA != data )
        findnode = findnode->nextnode;
    return findnode;}    
   
    private:
    DCLL_NODE* head;
    DCLL_NODE* tail;
    };
} //class DCLL end
int main()
DCLL a;
a.setup;
a.push(10);
a.push(20);
a.pop();
a.pop();
return 0;
}
