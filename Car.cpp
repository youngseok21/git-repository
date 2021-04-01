// Car.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
using namespace std;
class Car {
  const string model;
  bool power;
  double speed;

 public:
  Car(string m, bool p = false, double s = 0.0)
      : model(m), power(p), speed(s){};
  void set_power();
  void set_speed(bool);
  double get_speed() const;
};
void Car::set_power() {
  power = !power;
  return;
}
void Car::set_speed(bool a) {
  if (!power) return;
  if (a)
    speed += 0.1;
  else
    speed -= 0.1;
  return;
}
double Car::get_speed() const { return speed; }
int main() {
  Car car1("아반떼");
  car1.set_power();
  car1.set_speed(true);
  cout << car1.get_speed() << endl;
  Car car2("쏘나타");
  car2.set_power();
  car2.set_speed(true);
  cout << car2.get_speed() << endl;
  Car car3("그랜져");
  car3.set_power();
  car3.set_speed(true);
  cout << car3.get_speed() << endl;
  Car car4("제네시스");
  car4.set_power();
  car4.set_speed(true);
  cout << car4.get_speed() << endl;
  return 0;
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
