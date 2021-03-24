#include <iostream>
#include <string>

struct node {

  int id_number;

  float salary;

  node *p_next;
};

using namespace std;

int main() {
  string name;

  cout << "자신의 이름을 입력해주세요 : ";
  getline(cin, name);

  cout << name << "님";

  string id_number;

  cout << " 자신의 번호를 입력해주세요 : ";
  getline(cin, id_number);

  string salary;

  cout << "자신의 용돈을 입력해주세요 : ";
  getline(cin, salary);
  return 0;

  node *root;       // This won't change, or we would lose the list in memory
  node *conductor;  // This will point to each node as it traverses the list

  root = new node;  // Sets it to actually point to something
  root->p_next = 0;   //  Otherwise it would not work well
  root->id_number = 10;
  conductor = root;  // The conductor points to the first node
  if (conductor != 0) {
    while (conductor->p_next != 0) conductor = conductor->p_next;
  }
  conductor->p_next = new node;   // Creates a node at the end of the list
  conductor = conductor->p_next;  // Points to that node
  conductor->p_next = 0;          // Prevents it from going any further
  conductor->id_number = 40;
}