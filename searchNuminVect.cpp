#include<iostream>
using namespace std;

bool fl=false;
int k=1;
int n;
int m[5];

int main()
{
    for(k=1;k<=4;k++)
        {
        cout<<"inserisci il " <<k<< " numero:  ";
        cin>>m[k];
        }
        cout<<"inserisci il numero da cercare  ";
        cin>>n;

    for(k=1;k<=4;k++)
          {
                      if(m[k]==n)
                      fl=true;
          }
          if(fl==true)
          cout<<"Trovato"<<endl;
          else
          cout<<"Non trovato"<<endl;
system("pause");
}
