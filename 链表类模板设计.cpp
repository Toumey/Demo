#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

typedef int elementType;
typedef struct node
{
    elementType data;
    node* next;
} LList, *PList;
template <typename T>
class linkedList
{
public:
    linkedList();
    virtual ~linkedList();
    void insert( int value );
    bool initiate();
    bool isEmpty();
    bool remove( int pos, int& value );
    void print();
    int Length();
private:
    LList *head;
    int len;
};
template <typename T>
linkedList<T>::linkedList()
{
	len=0;
	head=(PList)malloc(sizeof(LList));
	head->next=NULL;
}
template <typename T>
 void linkedList<T>::insert(int value)
 {
	  LList *p=head->next;
 	  LList *node=(PList)malloc(sizeof(LList));
 	  node->data=value;
 	  LList *q=head;
      while(p)
	  {
		q=p;
		p=p->next;
	  }
   node->next=q->next;
   q->next=node;
 }
template <typename T>
bool linkedList<T>::initiate()
 {
 	LList *head=new LList;
 	if(head==NULL)
 	return false;
 	else
 	return true;
 }
template <typename T>
 bool linkedList<T>::isEmpty()
 {
 	if(head->next==NULL)
 	return true;
 	else
 	return false;
 }
template <typename T>
 int linkedList<T>::Length()
 {
 	LList *p=head->next;
 	int count=0;
 	while(p!=NULL)
 	{
 		p=p->next;
 		count++;
	 }
	 if(count==0)
	 return -1;
	 else
	 return count;
 }
template <typename T>
bool linkedList<T>::remove(int pos,int& value)
{
	len=Length();
	if(pos>len)
	{
		cout<<"pos > len, failed"<<endl;
		return false;
	}
	else if(pos<=0)
	{
		cout<<"pos <= 0, failed"<<endl;
		return false;
	}
	LList *p=head->next;
	LList *node=head;
	for(int i=1;i<pos;i++)
	{
		node=p;
		p=p->next;
	}
	value=p->data;
  	node->next=p->next;
	free(p);
	return true;
}
template <typename T>
linkedList<T>::~linkedList()
{
  if(initiate())
  {
	LList *p=head->next;
	LList *node=p;
	free(head);
    while(p)
    {
   	  node=p;
	  p=p->next;
	  free(node);
    }
  }
}
template <typename T>
void linkedList<T>::print()
{
    if( isEmpty() )
    {
        cout << "Empty" << endl;
        return;
    }
    LList* tmp = head->next;
    while(tmp)
    {
        cout <<tmp->data << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main(int argc, char* argv[])
{
    linkedList<int> L1;
    int n;
    int val;
    //初始化链表
    if(!L1.initiate())
        return 0;

    cin>>n;//输入链表中数据个数
    for(int i=0; i<n; i++) //输入n个数，并插入链表
    {
        cin>>val;
        L1.insert(val);
    }
    cout << "Origin Length：" << L1.Length() << endl;//输出链表长度
    cout << "data：" ;
    L1.print();//打印链表

    cin>>n;//输入需要删除的数据的位置
    if (L1.remove(n,val))
    {
        //删除位置n的数据，并将删除的数据值放在val中
        cout<<"Delete the data at position("<<n<<"):"<<val<<endl;
        cout<< "New Length：" << L1.Length()<< endl;//输出链表长度
        cout<< "data：" ;
        L1.print();//打印链表
    }

    return 0;
}













