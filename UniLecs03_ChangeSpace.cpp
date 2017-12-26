// Task 3. Заменить все пробелы в строке символами '%20'
// Пример: 
// Ввод: "Mr John Smith "
// Вывод: "Mr%20John%20Smith%20"

#include<iostream>
using namespace std;

void ChangeSpace(string* inputString)
{
    string forChange = "%20";
    int stringSize = inputString->size();

    for (int i = 0; i < stringSize ; i++)
    {
        char testChar = inputString->at(i);
        if (testChar == ' ')
        {
            inputString->replace(i,1, forChange);
            stringSize = inputString->size();
        }
    }
}


main() 
{
    string phrase = "Mr John Smith ";
    ChangeSpace(&phrase);

    cout << phrase;
}