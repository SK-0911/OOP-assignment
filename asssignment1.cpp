#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
using namespace std;

struct books
{
    char book[100];
    char author[100];
    //string book;
    //string author;
    int price;
    int copies;
};

int main()
{
    int op, i, k , j;
    int flag=0;
    
    
    struct books b1[5] = {{"Sherlock_Holmes", "Arthur Conan Doyle", 400, 12},{"Harry_Potter", "J.K. Rowling", 500, 20}, {"IT", "Stephen_King", 300, 15}, {"IT_Chapter_2", "Stephen_King", 350, 17} };
    cout<<"*****Library*****\n\n";
    

  do
  { cout<<"\nChoose: \n1.Enter Book Details\n2.Display\n3.Search By Book Name\n4.Search by Author name\nSort the books in alphabetical order\n\n-->";
    cin>>op;
    
    switch(op)
    {
        case 1:
        cout<<"\nName of the book: ";
        cin>>b1[4].book;
        cout<<"\nAuthor: ";
        cin>>b1[4].author;
        cout<<"\nPrice of the book: ";
        cin>>b1[4].price;
        cout<<"\nNo. of copies available: ";
        cin>>b1[4].copies;
        break;

        case 2:
        for(i=0; i<5;i++)
        {
          cout<<"\nName of the book: "<<b1[i].book;
          cout<<"\nAuthor: "<<b1[i].author;
          cout<<"\nPrice of the book: "<<b1[i].price;
          cout<<"\nNo. of copies available: "<<b1[i].copies;
        }
        break;
        case 3:
        char bsearch[100];
        
        cout<<"Search Books: ";
        //cin.getline(bsearch,100);
        //gets(bsearch);
        cin>>bsearch;
        //cout<<bsearch;
        for(i=0;i<5;i++)
        {
          int res = strcmp(bsearch,b1[i].book);
          if(res==0)
          {
            flag=1;
            cout<<b1[i].copies<<" copies are available.";
            break;
          }
          
        }
        if(flag==0)
          {
            cout<<"No such book available";
          }
        break;
        
        case 4:
        char asearch[100];

        cout<<"Author: ";
        cin>>asearch;
        cout<<"Here are all his books: \n";
        for(i=0;i<5;i++)
        {
          int res = strcmp(asearch,b1[i].author);
          if(res==0)
          {
            cout<<b1[i].book<<":- "<<b1[i].copies<<" copies are available\n";
          }
          
        }
        break;
        case 5:
        char temp[100];
        for(k=0;k<4;k++)
        {
          for(j=k+1;j<5;j++)
          {
            if(strcmp(b1[k].book,b1[j].book)>0)
            {
                strcpy(temp, b1[k].book);
                strcpy(b1[k].book, b1[j].book);
                strcpy( b1[j].book, temp);
            }
          }
        }
        cout<<"\nBooks in Alphabetical Order: \n";
        for(i=0;i<5;i++)
        {
          cout<<b1[i].book<<endl;
        }
        break;
        case 6:
        cout<<"Program Terminated";
        break;
        
    }
  }
  while(op!=6);
}
