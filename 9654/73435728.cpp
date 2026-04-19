// 2024년 2월 14일 23:29:41
// 출력 형식이 잘못되었습니다
// KB
// ms
#include <iomanip>
#include <iostream>
using namespace std;
int main() {
  cout << left;
  cout << setw(15) << "SHIP NAME" << setw(15) << "CLASS"
            << setw(15) << "DEPLOYMENT" << setw(10) << "IN SERVICE" << endl
            << setw(15) << "N2 Bomber" << setw(15) << "Heavy Fighter"
            << setw(15) << "Limited" << setw(10) << "21" << endl
            << setw(15) << "J-Type 327" << setw(15) << "Light Combat"
            << setw(15) << "Unlimited" << setw(10) << "1" << endl
            << setw(15) << "NX Cruiser" << setw(15) << "Medium Fighter"
            << setw(15) << "Limited" << setw(10) << "18" << endl
            << setw(15) << "N1 Starfighter" << setw(15) << "Medium Fighter"
            << setw(15) << "Unlimited" << setw(10) << "25" << endl
            << setw(15) << "Royal Cruiser" << setw(15) << "Light Combat"
            << setw(15) << "Limited" << setw(10) << "4";
}