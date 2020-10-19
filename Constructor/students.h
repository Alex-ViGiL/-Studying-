#include <string>

using namespace std;

class Students {
public:

    Students(string, string);

    // Установка имени студента
    void set_name(string);

    // Получение имени студента
    string get_name();

    // Установка фамилии студента
    void set_last_name(string);

    // Получение фамилии студента
    string get_last_name();

    // Установка промежуточных оценок
    void set_scores(int[]);

    // Установка среднего балла
    void set_average_ball(float);

    // Получение среднего балла
    float get_average_ball();

private:
    // Промежуточные оценки
    int scores[5];
    // Средний балл
    float average_ball;
    // Имя
    string name;
    // Фамилия
    string last_name;
};