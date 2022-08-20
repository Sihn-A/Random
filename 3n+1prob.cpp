#include<iostream>
using namespace std;
int maxii(int,int);
void prob(int);
int best=4;
int main()
{
    int m,i,j,max=4,s;
    cout<<"Enter a number";
    cin>>i>>j;
    m=i; // storing i in m to present output
    /*A do while loop to iterate from i to j */
    do
    {
        prob(i);
        i++;
    } while (i<=j);
    
    
    cout<<m<<" "<<j<<" "<<best+1;
    getc;
}
/*Fuction to print the 3n+1 sequence.
  Count variable gives the total value for each iteration.
  best variable compares the value between current count and previous count
*/
void prob(int n)
{
    int count=0;
    while(n>1)
    {
        cout<<n<<"->";
        if(n%2==0)
        {
            n=n/2;
            count++;
        }
        else
        {
            n=3*n+1;
            count++;
        }
        best=maxii(best,count);
    }
    cout<<"1"<<endl;
}
// Function to give the highest number to best global variable
int maxii(int m,int n)
{
    if(m>=n)
    {
        return m;
    }
    else
    {
        return n;
    }
}
