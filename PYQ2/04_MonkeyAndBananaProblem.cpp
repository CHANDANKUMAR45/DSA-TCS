#include <iostream>
using namespace std;

int main()
{
    int N,K,J,M,P;

    cin >> N >> K >> J >> M >> P;

    int bananaEat = M / K;
    int peanutEat = P / J;

    int remainingBanana = M % K;
    int remainingPeanut = P % J;

    int eaten = bananaEat + peanutEat;

    if(remainingBanana != 0 || remainingPeanut != 0)
        eaten++;

    int result = N - eaten;

    cout << result;

    return 0;
}