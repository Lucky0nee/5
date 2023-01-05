#include <iostream>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "ukr");
    const double верста = 1.067;
    int кiлькiстьВерст;
    printf("%25s", "Введiть кiлькiсть верст: ");
    cin >> кiлькiстьВерст;
    printf("%11s", "Кiлометри: ");
    printf("%.3f \n", верста*кiлькiстьВерст);
}
