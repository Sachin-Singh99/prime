
//PRIME NO USING C++ CLASSES//

#include<iostream>
using namespace std;
class prime{
    private:
        int n,i,flag;
    public:
       void primee(){
           flag=0;
        cout<<"Enter a positive number: ";
        cin>>n;
        for(i=2;i<n/2;++i)
        {
            if(n%i==0)
            {
                flag=1;
                break;
            }
        }
        if(n==1)
        {
            cout<<"1 is neither a prime nor a composite number: ";
        }
        else{
            if(flag==0){
                cout<<n<<" is a prime number.";
            }
            else{
                cout<<n<<" is not a prime number.";
            }
        }
        }
};
class crime{
    private:
        int x,k,count;
    public:
        void crimee(){
            count=0;
            cout<<"Enter any number: ";
            cin>>x;
            for(int k=1;k<=x;k++)
            {
                if(x%k==0)
                {
                    count++;
                }
            }
            if(count==2)
            {
                cout<<x<<" is a prime number.";
            }
            else if(count==1){
                cout<<x<<" is not a prime number nor composite number: ";
            }
            else{
                cout<<x<<" is not a prime number.";
            }
            
        }
};
int main(){
        crime obj;
        obj.crimee();

    /*  We can also use prime class as - 

        prime obj;
        obj.primee(); */
        
}
