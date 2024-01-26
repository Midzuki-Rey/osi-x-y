#include <iostream>
using namespace std;
double isPointlnSquard (double s, double z)
{
    if((s>=-1&&s<=1)&&(z>=-1&&z<=1))
    {
        cout << true;
    }
    else
    {
        cout << false;
    }
}
int main()
{
    double x;
    double y;
    cin >> x;
    cin >> y;

    cout << isPointlnSquard (x,y) ;
}
