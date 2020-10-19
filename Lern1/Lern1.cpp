
#include <iostream>
using namespace std;
//for
/*int main()
{
    setlocale(LC_ALL, "rus");
    cout << "Сколько раз ты хочешь потйти нахуй?";
        int i;
        cin >> i;

        for (int a = 0; a < i; a++) {
            cout << "Пошел нахуй"<<endl;
        };
       
}
*/
//while
/*int main() {

    setlocale(LC_ALL, "rus");
    cout << "Сколько раз ты хочешь потйти нахуй?";
    int i,a(0);
    cin >> i;

    while (a<i)
    {
        a++;
    
        cout << "Пошел нахуй" << endl;
 
    }

   

}*/
//dowhile
int main() {
    setlocale(LC_ALL, "rus");
    cout << "Сколько раз ты хочешь потйти нахуй?";
    int i, a(0);
    cin >> i;

    do {
        a++;
        cout << "Пошел нахуй" << endl;
    } while (a<i);
    

}