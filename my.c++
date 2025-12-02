#include <iostream>
using namespace std;
class node{
    public:
    node*next;
    int deliver;
};
class Queue_Delivery{
    public:
    node*f;
    node*t;
    Queue_Delivery(){
        f=nullptr;
        t=nullptr;
    }
    bool isempty(){
        return f==nullptr;
    }
    void enqueue(int v){
        node*node1=new node();
        node1->deliver=v;
        if(isempty()){
            f=node1;
            t=node1;
            return;
        }
        t->next=node1;
        t=node1;
        node1->next=nullptr;
        return;

    }
    int  dequeue(){
        if(isempty()){
            cout<<" we don't have delivery "<<endl;
            return 0;
        }
        node *temp=f;
        int val=f->deliver;
        f=f->next;
        delete temp;
        return val;
    }
         
};
// #include <iostream>
// using namespace std;
// bool binarysum(int arr[],int i,int n){
//     if (arr[n]+arr[n+1]==i){
//         return true;
//     }
//     else if(arr[n]+arr[n+1]<i){
//         return binarysum(arr,i,n+1);
//     }
//     else{
//         return false;
        
//     }
// }
// int main(){
//     int array[5] ={6,8,9,10,15};
//     int k=14;
//     int array2[5]={5,12,20,25,30} ;
//     int m=38;
//     int p=0;
//     cout<<binarysum(array,k,p)<<endl;
//     cout<<binarysum(array2,m,p)<<endl;
//     return -1;
// }
// #include <iostream>
// using namespace std;
// class node{
//     public:
//     node*next ;
//     int val;

// };
// class queue{
//     public:
//     node*f;
//     node*t;
//     queue(){
//         f=nullptr;
//         t=nullptr;
//     }
//     bool empty(){
//         return f==nullptr;

//     }
//     void enqu(int v){
//         node*mazen=new node();
//         mazen->val=v;
//         if(empty()){
//             f=mazen;
//             t=mazen;
//             return;
//         }
        
//         t->next=mazen;
//         t=mazen;
//         return;

//     }
//     void dequ(){
//         if(empty()){
//            cout << "the queue is empty"<<endl;
//             return;
//         }
//         node*temp=f;
//         f=f->next;
//         delete temp;

//     }
//     void dis(){
//         node*temp=f;
//          if(empty()){
//            cout << "the queue is empty"<<endl;
//             return;
//         }
//         while(temp!=nullptr){
//             cout<<temp->val<<" ";
//             temp=temp->next;
//         }
//         cout<<endl;
//     }
//     void addaf(int k,int v)
// };
// int main(){
//     queue o;
//     o.enqu(10);
//      o.enqu(20);
//       o.enqu(30);
//       o.dis();
//       o.dequ();
//       o.dequ();
//       o.dis();
// return 0;
// }
// #include <iostream>
// using namespace std;
// class node {
//     public:
//     node *next ;
//     int val;
// };
// class stack{
//     public:
//     node *head;
//     stack(){
//         head =nullptr;
//     }
//     bool empty(){
//         return head ==nullptr;
//     }
//     void push(int vl){
//         node* momen=new node();
//         momen->val=vl;
//         if(empty()){
//             head=momen;
//         }
//         else{
//             momen->next=head;
//             head=momen;
//         }
//     }
//     int pop(){
//         int v;
        
//          if(empty()){
//             cout<<"the stack is empty"<<endl;
//                 return 0;
//         }
//         else{
//             node*temp=head;
//             v =head->val;
//             head=head->next;
//             delete temp;
//             return v;
//         }
//     }
//     void dis(){
//         node*temp =head;
//          if(empty()){
//             cout<<"the stack is empty"<<endl;
//                 return ;
//         }
//         while(temp!=nullptr){
//             cout<<temp->val<<" ";
//             temp=temp->next;
//         }
//         cout<<endl;
//     }
//     void top(){
//          if(empty()){
//             cout<<"the stack is empty"<<endl;
//                 return ;
//         }
//         cout<<head->val<<endl;
//     }

// };
// int main(){
//     stack o;
//     o.push(10);
//     o.push(20);
//     o.push(30);
//     o.dis();
//     o.pop();
//     o.pop();
//     o.dis();
//     o.top();

//     return 0;
// }
// #include <iostream>
// using namespace std;
// class cqarray{
//     public:
//         int*arr;
//         int front;
//         int rear;
//         int maxum;
//         int count;
//         cqarray(){
//             maxum=100;
//             arr =new int [maxum];
//             front =0;
//             rear =-1;
//             count =0;
//         }
//         cqarray(int size){
//             maxum =size;
//             arr =new int [maxum];
//             front =0;
//             rear =-1;
//              count =0;

//         }
//         bool isempty(){
//             return count ==0;

//         }
//         bool isfull (){
//             return count == maxum ;
//         }
//         void enqueue(int a){
//             if(isfull()){
//                 cout<<"the queue is full!"<<endl;
//                 return;
//             }
//             rear=(rear+1)%maxum;
//             arr[rear]=a;
//             count ++;
            
//         }
//         int dequeue(){
//             int val;
//             if (isempty()){
//                 cout<<"the queue is empty!";
//                 return 0;
//             }
//             else{
//                 count--;
//                 val =arr[front];
//                 front=(front+1)%maxum;
//                 return val;
//             }
//         }
//         int peekrear(){
//             int val;
//             if (isempty()){
//                 cout<<"the queue is empty!";
//                 return 0;
//             }
//             else{
//                 val =arr[rear];
//                 return val;
//             }
//         }
//         int peekfront(){
//             int val;
//             if (isempty()){
//                 cout<<"the queue is empty!";
//                 return 0;
//             }
//             else{
//                 val =arr[front];
//                 return val;
//             }
//         }
// };
// int main(){
//      cout<<"enter the stack size"<<endl;
//     int size;
//     cin>>size;
//     cqarray asmaa(size);
//     asmaa.enqueue(4);
//     asmaa.enqueue(5);
//     asmaa.enqueue(6);
//     cout<<asmaa.peekrear()<< " ";
//     cout<<asmaa.peekfront()<<endl;
//     cout<<asmaa.dequeue()<<endl;
//     cout<<asmaa.peekfront()<<endl;
    
    
    
    
//     return 0;
// }


// #include <iostream>
// using namespace std;
// class queuearray{
//     public:
//         int*arr;
//         int front;
//         int rear;
//         int maxum;
//         queuearray(){
//             maxum=100;
//             arr =new int [maxum];
//             front =0;
//             rear =-1;
//         }
//         queuearray(int size){
//             maxum =size;
//             arr =new int [maxum];
//             front =0;
//             rear =-1;

//         }
//         bool isempty(){
//             return front >rear;

//         }
//         bool isfull (){
//             return rear == maxum-1 ;
//         }
//         void push(int a){
//             if(isfull()){
//                 cout<<"the queue is full!"<<endl;
//                 return;
//             }
         
//                 rear++;

//                 arr[rear]=a;
            
//         }
//         int pop(){
//             int val;
//             if (isempty()){
//                 cout<<"the queue is empty!";
//                 return 0;
//             }
//             else{
//                 val =arr[front++];
//                 return val;
//             }
//         }
//         int peekrear(){
//             int val;
//             if (isempty()){
//                 cout<<"the queue is empty!";
//                 return 0;
//             }
//             else{
//                 val =arr[rear];
//                 return val;
//             }
//         }
//         int peekfront(){
//             int val;
//             if (isempty()){
//                 cout<<"the queue is empty!";
//                 return 0;
//             }
//             else{
//                 val =arr[front];
//                 return val;
//             }
//         }
// };
// int main(){
//      cout<<"enter the stack size"<<endl;
//     int size;
//     cin>>size;
//     queuearray asmaa(size);
//     asmaa.push(4);
//     asmaa.push(5);
//     asmaa.push(6);
//     cout<<asmaa.peekrear()<< " ";
//     cout<<asmaa.peekfront()<<endl;
//     cout<<asmaa.pop()<<endl;
    
//     return 0;
// }






// #include <iostream>
// using namespace std;
// class stakarray{
//     public:
//         int*arr;
//         int top;
//         int maxum;
//         stakarray(){
//             maxum=100;
//             arr=new int[maxum];
//             top=-1;
            
//         }
//         stakarray(int size ){
//              maxum=size;
//             arr=new int[maxum];
//             top=-1;
            
//         }
//         bool isempty(){
//             return (top == -1);
//         }
//         bool isfull(){
//             return (top == maxum -1);
//         }
//         void push(int val){
//             if (isfull()){
//                 cout << "stack overflow "<<endl;
//             }
//             else{
//                 top++;
//                 arr[top]=val;

//             }

//         }
//         int  pop(){
//             int val;
//             if (isempty()){
//                 cout<<"stack underflow "<<endl;
//                 return 0;

//             }
            
//             else{

//                  val =arr[top--];
//             }
//             return val;

//         }
//         int peek(){
//             int val;
//             if (isempty()){
//                 cout<<"stack underflow "<<endl;
//                 return 0;

//             }
            
//             else{

//                  val =arr[top];
//             }
//             return val;
//         }
        
// };
// int main(){
//     cout<<"enter the stack size"<<endl;
//     int size;
//     cin>>size;
//     stakarray asmaa(size);
//     asmaa.push(4);
//     asmaa.push(5);
//     asmaa.push(6);
//     cout<<asmaa.pop()<<endl;
//     cout<<asmaa.peek()<<endl;
//     return 0;
// }
















// #include <iostream>
// using namespace std;
// class node{
//     public:
//         node* n;
//         int v;
// };
// class cll{
//     public:

//         node* head;
//         node* tail;
//         cll(){
//             head=nullptr;
//             tail =nullptr;
//         }
//         bool isempty(){
//             return (head == nullptr);
//         }
//         void appfir(int val){
//             node* momen =new node();
           
//             momen->v =val;
//             if (isempty()){
//                 head =momen;
//                 tail =momen;
//                 momen->n =head;
                

//             }
//             else{
//                 tail->n =momen;
//                 momen->n=head;
//                 head=momen;
                
//             }
           
//         }
//         void append(int val){
//             node* momen =new node();
           
//             momen->v =val;
//             if (isempty()){
//                 head =momen;
//                 tail =momen;
//                 momen->n =head;
                

//             }
//             else{
//                 tail->n =momen;
//                 tail =momen;
//                 momen->n=head;
                
//             }
//         }
//         void disfr(){
//             if (isempty()){
//                 cout<< "the list is empty "<<endl;
//                 return;
//             }
//             node* temp =head;
//             do{
//                 cout<<temp->v<<"->";
//                 temp =temp->n;
//             }
//             while(temp != head);
//             cout<<endl;
//         }
//         bool resersh(int val){
//             if (isempty()){
//                 cout<<"the list is empty "<<endl;
//                 return false;
//             }
//             node* temp =head;
//             do{
//                 if (temp->v ==val){
//                     return true;
//                 }
//                 temp =temp->n;
//             }while(temp != head);
//             return false;
//         }
//         void delv(int val){
//             if (isempty()){
//                 cout<<"the list is empty "<<endl;
//                 return;
//             }
//             if (!resersh(val)){
//                 cout<<"value not found "<<endl;
//                 return;
//             }
//             node* temp =head;
            
//             do{
//                 if (temp->n->v ==val){
//                     if (temp->n == head){
//                         node* del =head;
//                         head=head ->n;
//                         tail->n =head;
                       
//                         delete del;
//                          head = nullptr;
//                         tail = nullptr;
//                         return;
//                     }
//                     else if (temp->n == tail){
//                         node* del =tail;
//                         tail =temp;
//                         tail->n =head;
//                         delete del;
//                         return;
//                     }
//                     else{
//                         node* del=temp->n;
//                         temp->n =temp->n->n;

//                         delete del;
//                         return;
//                     }

//                 }

//                 temp =temp->n;
//         }
//         while (temp != head);
//         }
//         void insertaf(int af,int val){
//             if (isempty()){
//                 cout<<"the list is empty "<<endl;
//                 return;
//             }
//             if (!resersh(af)){
//                 cout<<"value not found "<<endl;
//                 return;
//             }
//             node* temp =head;
//             node* momen =new node();
//             momen->v =val;
            
//             do{
//                 if (temp->v ==af){
//                     if (temp == head){
//                         momen->n =temp->n;

//                         head->n=momen;
                        
                       
                       
                       
                        
//                         return;
//                     }
//                     else if (temp == tail){
//                         momen->n =head;
//                         tail->n =momen;
//                         tail =momen;
                        

                       
//                         return;
//                     }
//                     else{
                       
//                         momen->n =temp->n;
//                         temp->n =momen;

                       
//                         return;
//                     }

//                 }

//                 temp =temp->n;
//         }
//         while (temp != head);
//         }
//         void insertbf(int bf,int val){
//              if (isempty()){
//                 cout<<"the list is empty "<<endl;
//                 return;
//             }
//             if (!resersh(bf)){
//                 cout<<"value not found "<<endl;
//                 return;
//             }
//             node* temp =head;
//             node* prev =nullptr;
//             node* momen =new node();
//             momen->v =val;
            
//             do{
//                 if (temp->v ==bf){
//                     if (temp == head){
//                         momen->n =temp;
//                         tail->n=momen;
//                         head=momen;

                        
                       
                       
                       
                        
//                         return;
//                     }
//                     else if (temp == tail){
//                         momen->n =temp;
//                         tail->n =head;
//                         prev->n=momen;

                        

                       
//                         return;
//                     }
//                     else{
                       
//                         momen->n =temp;
                       
//                         prev->n=momen;
                       
//                         return;
//                     }

//                 }
//                 prev= temp;
//                 temp =temp->n;
//         }
//         while (temp != head);
//         }


// };
// int main(){
//     // cll asmaa;
//     // asmaa.appfir(4);
//     // asmaa.appfir(5);
//     // asmaa.appfir(6);
//     // asmaa.disfr();
//     // asmaa.delv(4);
//     // asmaa.disfr();
//     // asmaa.insertaf(5,4);
//     // asmaa.disfr();
//     // asmaa.insertbf(6,7);
//     // asmaa.disfr();
//     // asmaa.insertbf(4,8);
//     // asmaa.disfr();
//     // asmaa.insertbf(5,6);
//     // asmaa.disfr();
//     return 0;
// }


















// #include <iostream>
// using namespace std;
// class node {
//     public:
//         node* next;
//         int value;
//         node*prev;
// };
// class list {
//     public:
//         node* head;
//         node* tail;
//         list(){
//             head = nullptr;
//             tail = nullptr;
            
//         }
        
//         bool isempty(){
//             return (head ==nullptr);
//         }
//         void appfir(int val){
//             node* momen =new node();
//             momen->value= val;
//              momen->prev =nullptr;
//             if(isempty()){
//                 head =momen;
//                 momen->next =nullptr;
//                 tail =momen;
               

//             }
//             else{
//                 momen->next = head;
//                 head->prev =momen;
//                 head =momen;
               

//             }

            
//         }
//         void append(int val){
//             node* momen =new node();
//             momen->value= val;
//             momen->next = nullptr;
//             if(isempty()){
//                 head =momen;
//                 tail =momen;
//                 momen->prev =nullptr;

//             }
//             else{
               
//                 tail->next =momen;
//                 momen->prev =tail;
//                 tail =momen;
                

//             }

//         }
//         void disfir(){
//             node* temp =head;
//             while(temp != nullptr){
//                 cout<<temp->value<< "->";
//                 temp =temp->next;

//             }
//             cout<<endl;
//             return;

//         }
//         void disend(){
//                node* temp =tail;
//             while(temp != nullptr){
//                 cout<<temp->value<< "->";
//                 temp =temp->prev;

//             }
//             cout<<endl;
//             return;
//         }
//         void delfir(){
//             if(isempty()){
//                 cout<<"the list is empty "<<endl;
//                 return;
//             }
//             node* temp =head;
//             head =head->next;
//             if(head != nullptr){
//                 head->prev=nullptr;

//             }
//             else{
//                 tail =nullptr;
//             }
//             delete temp;
//             return;
//         }
//         void delend(){
//               if(isempty()){
//                 cout<<"the list is empty "<<endl;
//                 return;
//             }
//             node* temp =tail;
//             tail =tail->prev;
//             if(tail != nullptr){
//                 tail->next=nullptr;

//             }
//             else{
//                 head =nullptr;
//             }
//             delete temp;
//             return;
//         }
//         bool  resershfr(int val){
//             node* temp =head;
//             while(temp != nullptr){
//                 if(temp->value ==val){
//                     return true;

//                 }
//                 temp =temp->next;
//             }
//             return false;

            
//         }
//           bool  resershbf(int val){
//             node* temp =tail;
//             while(temp != nullptr){
//                 if(temp->value ==val){
//                     return true;

//                 }
//                 temp =temp->prev;
//             }
//             return false;

            
//         }
//         void delval(int val){
//             if (isempty()){
//                 cout<<"the list is empty"<<endl;
//                 return;
//             }
//             if (!resershfr(val)){
//                 cout<<"value not found"<<endl;
//                 return;
//             }
//             node* temp =head;
//             while(temp != nullptr){
//                 if(temp->value == val){
//                     if (temp == head){
//                         delfir();
//                         return;
//                     }
//                     else if (temp == tail){
//                         delend();
//                         return;
//                     }
//                     else{
//                         temp->prev->next =temp->next;
//                         temp->next->prev=temp->prev;
//                         delete temp;
//                         return;
//                     }
//                 }
//                 temp =temp->next;
//             }
            
//             return;

//         }
//         void insertaf(int af,int val){
//             if (isempty()){
//                 append(val);
//                 return;
//             }
//             if (!resershfr(af)){
//                 cout<<"value not found"<<endl;
//                 return;
//             }
            
//             node* temp =head;
//             while(temp != nullptr){
//                 if(temp->value == af){
//                     if (temp == tail){
//                         append(val);
//                         return;
//                     }
//                     else{
//                         node* momen=new node();
//                         momen->value=val;
//                         momen->next =temp->next;
//                         momen->prev =temp;
//                         temp->next->prev =momen;
//                         temp->next=momen;
                       
//                         return;
//                     }
//                 }
//                 temp =temp->next;
//             }
            

//             return;
//         }
//         void insertbf(int bf,int val){
//             if (isempty()){
//                 appfir(val);
//                 return;
//             }
//             if (!resershbf(bf)){
//                 cout<<"value not found"<<endl;
//                 return;
//             }
            
//             node* temp =tail;
//             while(temp != nullptr){
//                 if(temp->value == bf){
//                     if (temp == head){
//                         appfir(val);
//                         return;
//                     }
//                     else{
//                         node* momen=new node();
//                         momen->value=val;
//                         momen->next =temp;
//                         momen->prev =temp->prev;
//                         temp->prev->next =momen;
//                         temp->prev=momen;
                       
//                         return;
//                     }
//                 }
//                 temp =temp->prev;
//             }
            

//             return;
//         }
        

// };
// int main(){

//     list asmaa ;
//     asmaa.append(4);
//     asmaa.append(5);
//     asmaa.appfir(3);
//     asmaa.disfir();
//     // asmaa.disend();
//     asmaa.delend();
//     asmaa.appfir(2);
//     asmaa.disend();
//     asmaa.delfir();
//     asmaa.append(3.6);
//     asmaa.disfir();


//     return 0;
// }