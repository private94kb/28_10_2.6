#include <iostream> 
using namespace std; 

int main() { 

  int c0;
  int counter; 

  while (true){ 

    cin >> c0; 

    while (c0!=1){ 

      if (c0%2==0){// якщо число ділене на два видає нуль

        c0=c0/2;//обчислюємо як парне 

      }else if (c0%2!=0){//якщо ні, то як непарне

        c0=3*c0+1;

      } 

      cout << c0 << endl;

      counter++;// збільшуємо лічильник на 1 з кожним виводом числа

    } 

    cout << "Number of steps: ";// виводяться всі кроки, поки не дійде до 1

    cout << counter << endl; 

    counter = 0; 

  } 

} 

 