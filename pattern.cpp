#include <iostream>
using namespace std;

int main()
{
    int i,j,t,c;
    cout<<"Enter the type of Pattern you want"<<endl;
    cout<<" 1. Star Pattern \n 2. Number Pattern \n 3. Continuous Number Pattern"<<endl;
    cin>>t;
    if(t==1)
    {
        cout<<"Enter the shape of Pattern you want"<<endl;
        cout<<" 1. Square \n 2. Triangle \n 3. Left Triangle \n 4. Right Triangle"<<endl;
        cin>>c;
        if(c==1)
        {
            for(i=1;i<=5;i++)
            {
                for(j=1;j<=5;j++)
                {
                    cout<<"* ";
                }
                cout<<endl;
            }
        }
        if(c==2)
        {
            for(i=5;i>=1;i--)
            {
                for(j=1;j<=5;j++)
                {
                    if(j>=i)
                    cout<<"* "; 
                    else
                    cout<<" ";
                }
                cout<<endl;
            }
        }
        if(c==3)
        {
            for (i=1;i<=5;i++) 
            {
                for (j=1; j<=i;j++)
                {
                    cout << "* ";
                }
                cout<<endl;
            }
        }
        if(c==4)
        {
            for (i=1;i<=5;i++) 
            {
                for (int k=5-i;k>0;k--)
                    cout << " ";
                for(j=1;j<=i;j++)
                {
                    cout<<"*";
                }
                cout<<endl;
            }
        }
    }
    if(t==2)
    {
        cout<<"Enter the shape of Pattern you want"<<endl;
        cout<<" 1. Square \n 2. Triangle \n 3. Left Triangle \n 4. Right Triangle "<<endl;
        cin>>c;
        if(c==1)
        {
            for(i=1;i<=5;i++)           
            {
                for(j=1;j<=5;j++)
                {
                    cout<<i<<" ";
                }
                cout<<endl;
            }
        }
        if(c==2)
        {
            for (i=1;i<=5;i++) 
            {
                for (j=1;j<=5-i;j++) 
                {
                cout << " ";
                }
                for (j=1;j<=i;j++) 
                {
                cout << i << " "; 
                }
            cout << endl;
            }

        }
        if(c==3)
        {
            for (i=1;i<=5;i++) 
            {
                for (j=1; j<=i;j++)
                {
                    cout << i;
                }
                cout<<endl;
            }
        }
        if(c==4)
        {
            for (i=1;i<=5;i++) 
            {
                for (int k=5-i;k>0;k--)
                    cout << " ";
                for(j=1;j<=i;j++)
                {
                    cout<<i;
                }
                cout<<endl;
            }
        }
    }
    if(t==3)
    {
        cout<<"Enter the shape of Pattern you want"<<endl;
        cout<<" 1. Square \n 2. Triangle \n 3. Left Triangle \n 4. Right Triangle"<<endl;
        cin>>c;
        if(c==1)
        {
            int num = 1;
            for(i=1;i<=5;i++)
            {
                for(j=1;j<=5;j++)
                {
                    cout<<num<<" ";
                    num++;
                }
                cout<<endl;
            }
        }
        if(c==2)
        {
            int num=1;
            for (i=1;i<=3;++i) 
            {
                for (int k= 1; k<=3 - i; ++k) 
                {
                    cout <<" ";
                }
                for (int j = 1; j <= (2 * i - 1); ++j) 
                {
                    cout<< num++; 
                }
                cout << endl;
            }
        }
        if(c==3)
        {
            int num=1;
            for (i=1;i<=5;i++) 
            {
                for(j=1;j<=i;j++) 
                {
                    cout<<num<< " "; 
                    num++;                   
                }
                cout << endl;
            }
        }
    
        if(c==4)
        {
            int num=1;
            for (i=1;i<=4;i++) 
            {
                for (int k=4-i;k>0;k--)
                    cout << " ";
                for(j=1;j<=i;j++)
                {
                    cout<<num;
                    num++;
                }
                cout<<endl;
            }
        }
    }
} 