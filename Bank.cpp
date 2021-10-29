#include <iostream>

using namespace std;

int main()
{
    int N, m, n_c[7];
    cin>>N;
    m=N;


    n_c[0] = m/100;
    m = m-(n_c[0]*100);

    n_c[1] = m/50;
    m = m-(n_c[1]*50);

    n_c[2] = m/20;
    m = m-(n_c[2]*20);

    n_c[3] = m/10;
    m = m-(n_c[3]*10);

    n_c[4] = m/5;
    m = m-(n_c[4]*5);

    n_c[5] = m/2;
    m = m-(n_c[5]*2);

    n_c[6]=m;

    cout<<N<<endl;
    cout<<n_c[0]<<" nota(s) de R$ 100,00"<<endl;
    cout<<n_c[1]<<" nota(s) de R$ 50,00"<<endl;
    cout<<n_c[2]<<" nota(s) de R$ 20,00"<<endl;
    cout<<n_c[3]<<" nota(s) de R$ 10,00"<<endl;
    cout<<n_c[4]<<" nota(s) de R$ 5,00"<<endl;
    cout<<n_c[5]<<" nota(s) de R$ 2,00"<<endl;
    cout<<n_c[6]<<" nota(s) de R$ 1,00"<<endl;
    return 0;
}