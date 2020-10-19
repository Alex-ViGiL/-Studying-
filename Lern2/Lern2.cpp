

#include <iostream>
#include <string>

using namespace std;
/*
string check_pass(string password)
{

    string valid_pass = "pomidor2003";
    string error_message;

    if (password == valid_pass) {

        error_message = "Доступ разрешен.";
    }
    else {

        error_message = "Неверный пароль!";
    }

    return error_message;
}


int main()
{
    setlocale(LC_ALL, "rus");


    string user_pass;
    cout << "Введите пароль: ";
    getline(cin, user_pass);
    string error_msg = check_pass(user_pass);
    cout << error_msg << endl;
    */

bool password_is_valid(string password)
{
    string valid_pass = "qwerty123";
    if (valid_pass == password)
        return true;
    else
        return false;
}

void get_pass()
{
    string user_pass;
    cout << "Введите пароль: ";
    getline(cin, user_pass);
    if (!password_is_valid(user_pass)) {
        cout << "Неверный пароль!" << endl;
        get_pass(); // Здесь делаем рекурсию
    }
    else {
        cout << "Доступ разрешен." << endl;
    }
}

int main()
{
    setlocale(LC_ALL, "rus");
    get_pass();
    return 0;
};







   /* string students[10] = {
    "Ваня","Саня","Паша","Катя","Вика","Марина","Даша","Арина","Маня","Федя"
    };
    for (int i = 0; i < 10;i++) {
        cout << students[i];
    }*/
    /*
  int arr[10];

    for (int i = 0; i < 10;i++) {
        cout << "[" << i + 1 << "]" << ": " ;
        cin >> arr[i];
    }

    cout << "\nВаш массив: ";

    for (int i = 0; i < 9;i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    */
    /*
    string valid_pass = "pomidor2003";
    string user_pass;
    cout << "Введите пароль : ";
   
    getline(cin, user_pass);

    if (user_pass == valid_pass) {
        cout << "Доступ разрешен";
    }
    else {
        cout << "Доступ воспрещен";
    }
    */

   

