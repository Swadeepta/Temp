#include <iostream>
#include <vector>
#include <ctime>    // For time()
#include <cstdlib>

 
using namespace std;

void display(vector <int> h)
{
vector <int> :: iterator i;
for (i=h.begin();i<h.end();++i)
    cout<<*i<<"\t";
    cout<<endl;
}
 void insert(vector <int> &h);
void heapify(vector <int> &h,int i);
int main()
{
    srand(time(0));  // Initialize random number generator.
    int r =rand();
    vector <int> g;
vector <int> h;
    //vector <int> :: iterator i;
   h.push_back(1);
    for (int j=0;j<10;j++)
    {insert(g); 
    if((j)%2==0)
     h.push_back(11-j-1);
   else
     h.push_back(11-j+1);}
    display(h);
    heapify(h,0);
     display(h);
    //remove(g);
    display(g);
    cout << "Size : " << g.size();
    cout << "\nCapacity : " << g.capacity();
    cout << "\nMax_Size : " << g.max_size();
 
    return 0;
 
}
void insert(vector <int>  &h)
{int a;
  srand(time(NULL));  // Initialize random number generator.
   a=rand();
 h.push_back(a);
int p,i=h.size()-1;
 while(i!=0)
 {p=(i)/2;
  if(h[p]<h[i])
  {h[p]=h[p]+h[i]; h[i]=h[p]-h[i]; h[p]=h[p]-h[i];}
  i=p;
 }
}
void heapify(vector <int> &h,int i)
{ 
  int p=2*i+1;
 while(i!=h.size()-1)
 { if((h[i]<h[p])&&(h[p]>h[p+1]))
  {h[p]=h[p]+h[i]; h[i]=h[p]-h[i]; h[p]=h[p]-h[i];   heapify(h,p);}
  else if(h[i]<h[++p])
  {h[p]=h[p]+h[i]; h[i]=h[p]-h[i]; h[p]=h[p]-h[i];   heapify(h,p);}
  return;
 }
   
 return;
}
/*void remove(vector <int> &h)
{
 

 
}*/
