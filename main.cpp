#include <iostream>
#include "circulararray.h"

using namespace std;

int main(int argc, char const *argv[]) {
    CircularArray<int>* array = new CircularArray<int>(15);
    int n, val;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        array->push_back(val);
    }

    int option = atoi(argv[1]);
    switch (option)
    {
      case 1:
          cout<< array->is_full() << endl;
          cout<< array->is_empty() << endl;
          cout<< array->is_sorted() << endl;
          break;
      case 2:
          cin>>val;
          array->push_front(val);
          cout<< array->pop_back() << endl;
          cout<< array->pop_front() << endl;
          break;
      case 3:
          CircularArray<int>* array2 = array->reverse();
          array2->display();
          break;
      case 4:
          array->sort();
          array->display();
          break;
    }

    delete array;

    return 0;
}