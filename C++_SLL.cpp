#include <iostream>

int main() {
    using std::;
    template<typename etype>
   
    class DCLL_NODE{
    private:
    etype DATA;
    DCLL_NODE<etype>* prevnode;
    DCLL_NODE<etype>* nextnode;
    friend DCLL;
    }

    class DCLL{
    public:
    DCLL();
    ~DCLL();
    void setup(){head = NULL; tail =NULL;};
    void push(etype data){
    newnode = new DCLL_NODE(etype data);
    if(head == NULL)
    {
     head = newnode;   
    }
    else
    {
        tail->nextnode = newnode;
        newnode->prvnode = tail;
        newnode->nextnode = head;
        tail = newnode;
    }
    }; // from create to push
    DCLL_NODE* pop();
    DCLL_NODE* find(const etype data,DCLL_NODE* head){
    DCLL_NODE* findnode = head 
    while(findnode->DATA != data )
        findnode = findnode->nextnode;
    return findnode;}    
    private:
    DCLL_NODE* head;
    DCLL_NODE* tail;
    };

    



}
    return 0;
}
