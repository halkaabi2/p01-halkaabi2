#include<cstdlib>
#include<ctime>
#include<iostream>

using namespace std;

int main() 
{
   srand( time(0) );
   int activity;
   int writing;
   writing=rand() % 10 + 1;

   cout<<"Guess a random number between 1 and 10"<<endl;
   cin>>activity;

   if(activity==writing)
   {
   cout<<"you, playing correctly! you win"<<endl;
   }
   else if(activity>writing)
   {
   int BI;
   BI= activity - writing;
   cout<<"you were off by" <<BI<<". sorry , ypu lose."<<endl;
   }
   else if (activity<writing)
   {
   int BI;
   BI= writing - activity ;
   cout<<"you were off by" <<BI<<". sorry, you lose,"<<endl;
   }
   
   return 0 ;
}
