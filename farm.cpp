#include <iostream> 
using namespace std;
class farmer
{
    public:
    int challange()
    {
        int chicken,cow,pigs;
        cout<<"enter the number of chicken"<<endl;
        cin>>chicken;
        cout<<"enter the numbers of cows"<<endl;
        cin>>cow;
        cout<<"enter the number of pigs"<<endl;
        cin>>pigs;

        chicken=chicken*2;
        cow=cow*4;
        pigs=pigs*4;

        cout<<"the legs of chicken is="<<chicken<<endl;
        cout<<"the legs of cow is="<<cow<<endl;
        cout<<"the legs of pigs is="<<pigs<<endl;

        return 0;
    }
};
int main()
{
    farmer f;
    f.challange();
    return 0;
}
