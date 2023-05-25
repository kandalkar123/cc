#include<conio.h>
using namespace std;

int main()
{
    int n, a[n];
    int First=0,Last=n-1 , Mid, Num;

    cout <<"Enter no of elements : ";
    cin>>n;

    cout <<"Enter elements : ";

    for(int i=0; i<n; i++){
        cout<<i+1<<") ";
        cin>>a[i];    
    }

    cout<<" Enter the number to find : ";
    cin >>Num;

    do
    {
        Mid=(First+Last)/2;
        if(a[Mid]==Num){
            cout<<"found at location"<<Mid+1;
            break;
        }
        else if(a[Mid]<Num)
            First = Mid+1;
        else
            Last=Mid-1;


    }
    while (First<=Last);

    if(First>Last)
        cout<<"element not found";

    return 0;
}
