/* Problem ID: 2090
 * Author: YQ_Beyond
 * Run ID: 12101676
 * Exe Time: 0MS
 * Exe Memory: 376K
 * Code Len: 313 B
 * Language: G++
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string name;
    double number, price;
    double money = 0.0;
    while (cin >> name >> number >> price) 
        money += number * price;
    cout << setprecision(1) << fixed << showpoint << money << endl;
    return 0;
}