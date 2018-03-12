#include <iostream>
using namespace std;

struct node
{
  int data;
  node *next;
};

class list
{
  private:
  node *head, *tail;
  public:
  list()
  {
    head = NULL;
    tail = NULL;
  }


void addnode(int val)
{
  node *temp = new node;
  temp->data = val;
  temp->next = NULL;
  if (head == NULL)
  {
    head = temp;
    tail = temp;
    temp = NULL;
  }
  else
  {
    tail->next = temp;
    tail = temp;

  }
}

void display()
{

  node *temp = new node;
  temp = head;
  cout<<"\n\n\n\n";
  while (temp!= NULL)
  {
    cout << temp->data << "\t";
    temp = temp->next;
  }
}

void insertnode(int pos, int val)
{
  node *pre = new node;
  node *cur = new node;
  node *temp = new node;
  cur = head;
  if (pos == 1){
    temp->data = val;
    temp->next = head;
    head = temp; 
  }
  else{
  for (int i=1;i<pos;i++)
  {
    pre = cur;
    cur = cur->next;
  }
  temp->data = val;
  pre->next = temp;
  temp->next = cur;
  }
}


void reverse1()            //works but more than O(n) maybe
{ 
 node *n1=new node ;
n1=NULL;
node *temp= new node,*t1=new node;
temp=head;
  while(temp->next!=NULL)
  {
    t1=temp;
   temp=temp->next;
    t1->next=n1;
     n1=t1;

  }
    temp->next=n1;
   head=temp;
}

void reverse2()
{
 
}

};

int main()
{
  int L = 0;
  int b = 0;
  list M;
  cout << "enter L: ";
  cin >> L;
  for (int j = 0; j<L;j++)
  {
    b=j+1;
    M.addnode(b);}
  M.display(); 
  M.reverse1();
  M.display();
  return 0;

}




