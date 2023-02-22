// ModernC.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <memory>
#include <vector>
#include <algorithm>    // std::sort
#include <map>
#include <cctype>
#include <cstring>
#include <iostream>// the header iostream, which supports the C++ I/O system
#include <cstdlib> //c++ standard library header
#include <cstddef>
#include <sstream>
#include <string>
#include <queue>
using namespace std;

//int towerBreakers(int n, int m) {
//    vector <int> towers(n, m);
//    int currentPlayer = 1;
//
//    while (towers.back() >= 1)
//    {
//        if (n == 2)
//        {
//            int move = towers[0];
//            for (int i = towers[0] - 1; i > 0; i--)
//            {
//                cout << "tutaj " << i << endl;
//                cout << towers[0] << endl;
//                if (towers[1] % i == 0 && towers[0] - i > towers[0] - move && move > 0)
//                {
//                    move = i;
//                }
//            }
//            towers[0] -= move;
//            if (currentPlayer == 1)
//            {
//                currentPlayer = 2;
//            }
//            else
//            {
//                currentPlayer = 1;
//            }
//            move = towers[1];
//            for (int i = towers[1] - 1; i > 0; i--)
//            {
//                cout << "tutaj " << i << endl;
//                cout << towers[1] << endl;
//                if (towers[0] % i == 0 && towers[1] - i > towers[1] - move && move > 0)
//                {
//                    move = i;
//                }
//            }
//            if (currentPlayer == 1)
//            {
//                currentPlayer = 2;
//            }
//            else
//            {
//                currentPlayer = 1;
//            }
//            towers[1] -= move;
//
//            cout << "tower 0: " << towers[0] << endl;
//            cout << "tower 1: " << towers[1] << endl;
//        }
//        else
//        {
//            for (auto ptr = towers.begin(); ptr != towers.end() - 1; ptr++)
//            {
//                int move = *ptr;
//                for (int i = *ptr - 1; i > 0; i--)
//                {
//                    cout << "tutaj " << i << endl;
//                    cout << *ptr << endl;
//                    if (*(ptr + 1) % i == 0 && *ptr - i < *ptr - move)
//                    {
//                        move = i;
//                    }
//                }
//                *ptr -= move;
//
//                if (currentPlayer == 1)
//                {
//                    currentPlayer = 2;
//                }
//                else
//                {
//                    currentPlayer = 1;
//                }
//            }
//        }
//    }
//    return currentPlayer;
//}

//class OneWayPtrArray
//{
//public:
//    OneWayPtrArray(string _val, OneWayPtrArray *ptr)
//    {
//        this->value = _val;
//        this->next_ptr = ptr;
//    }
//    OneWayPtrArray(string _val)
//    {
//        this->value = _val;
//    }
//
//    void setNextPtr(OneWayPtrArray* ptr)
//    {
//        this->next_ptr = ptr;
//    }
//    OneWayPtrArray* getNextPtr()
//    {
//        return this->next_ptr;
//    }
//    string getValue()
//    {
//        return this->value;
//    }
//private:
//    string value = "";
//    OneWayPtrArray* next_ptr = nullptr;
//};
//
//void AddNewValueToEnd(OneWayPtrArray *ptr, const string& value)
//{
//    while (ptr->getNextPtr() != nullptr)
//    {
//        ptr = ptr->getNextPtr();
//    }
//    ptr->setNextPtr(new OneWayPtrArray(value));
//}
//
//string GetElementFromIndex(OneWayPtrArray* ptr, const int& index)
//{
//    if (ptr->getNextPtr() == nullptr)
//    {
//        return ptr->getValue();
//    }
//
//    for (int i = index; i > 0; i--)
//    {
//        if (ptr->getNextPtr() == nullptr)
//        {
//            cout << "Out of index" << endl;
//            break;
//        }
//        ptr = ptr->getNextPtr();
//    }
//    return ptr->getValue();
//}
//
//void PrintAllElements(OneWayPtrArray* ptr)
//{
//    while (ptr->getNextPtr() != nullptr)
//    {
//        cout << "Pointer value: " << ptr->getValue() << endl;
//        ptr = ptr->getNextPtr();
//    }
//    cout << "Pointer value: " << ptr->getValue() << endl;
//}
//
//void DeleteObjectAtIndex(OneWayPtrArray* ptr, const int& index)
//{
//    for (int i = 0; i < index-1; i++)
//    {
//        if (ptr->getNextPtr() == nullptr)
//        {
//            cout << "Out of index" << endl;
//            break;
//        }
//        ptr = ptr->getNextPtr();
//    }
//    OneWayPtrArray* temp = ptr->getNextPtr();
//    ptr->setNextPtr(temp->getNextPtr());
//    delete temp;
//}

//string caesarCipher(string s, int k) {
//    /*vector<string> alpha{"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};*/
//    string alpha = "abcdefghijklmnopqrstuvwxyz"; //26
//    string result;
//
//    k = k % 26;
//    for (auto x : s)
//    {
//        if (alpha.find(x) == string::npos && alpha.find(tolower(x)) == string::npos)
//        {
//            result.push_back(x);
//            continue;
//        }
//        else if (alpha.find(tolower(x)) + k > alpha.size() - 1)
//        {
//            result.push_back(alpha.at(alpha.find(tolower(x)) + k - alpha.size())); //29
//            if (isupper(x))
//            {
//                result.back() = toupper(result.back());
//            }
//        }
//        else
//        {
//            result.push_back(alpha.at(alpha.find(tolower(x)) + k)); //29
//            if (isupper(x))
//            {
//                result.back() = toupper(result.back());
//            }
//        }
//    }
//    return result;
//}

//class ReserveSpace
//{
//    vector<int*> bytee;
//
//    ReserveSpace(int bytes)
//    {
//        for (int i = 0; i < bytes / 4; i++)
//        {
//            bytee.push_back(new int(i));
//        }
//    }
//
//};

//int palindromeIndex(string s) {
//    int len = s.length();
//    string rev = s;
//    int d = 0;
//    bool ok = false;
//    for (int i = 0; i < len / 2; i++)
//    {
//        swap(rev[i], rev[len - i - 1]);
//    }
//    if (rev == s) return -1;
//
//    cout << rev << endl;
//
//    for (auto x : s)
//    {
//        string temp = s;
//        d = temp.find(x);
//        temp = temp.erase(d , d+1);
//
//        for (int i = 0; i < temp.length() / 2; i++)
//        {
//            cout << temp[temp.length() - i - 1] << endl;
//            cout << temp[i] << endl;
//            if (temp[temp.length() - i - 1] == temp[i])
//            {
//                cout << "true" << endl;
//                ok = true;
//            }
//            else
//            {
//                cout << "false" << endl;
//                ok = false;
//            }
//        }
//
//        if (ok)
//        {
//            break;
//        }
//    }
//    cout << "Wychodzimy" << endl;
//    return d;
//}

//uint16_t color565(uint8_t r, uint8_t g, uint8_t b) { return ((r & 0xF8) << 8) | ((g & 0xFC) << 3) | ((b & 0xF8) >> 3); }

//string timeConversion(string s) {
//    vector<string> subs;
//    stringstream res;
//    int start{0};
//    subs.push_back(s.substr(s.find("M") - 1, s.length() - (s.find("M") - 1)));
//
//    for (int i = 0; i < 9; i+=3)
//    {
//        subs.emplace_back(s.substr(i, 2));
//    }
//
//    if (subs[0] == "AM" && subs[1] == "12") {
//        res << "00" << ":";
//    }
//    else if (subs[0] == "PM" && subs[1] != "12") {
//        res << stoi(subs[1])+12 << ":" ;
//    }
//    else {
//        res << subs[1] << ":";
//    }
//
//    res << subs[2] << ":" << subs[3] << '\n';
//
//    return res.str();
//}

//unique_ptr<int> binary_search(unique_ptr<int> mem, const int& to_found, const vector<int>& arr) {
//    int start{ 0 }, mid{ int(arr.size() / 2) }, end{ int(arr.size()) };
//    vector<int> temp(arr);
//    sort(temp.begin(), temp.end());
//    for (auto& a : temp) {
//        cout << a << ", ";
//    }
//    cout << '\n';
//    while (start != end) {
//        cout << temp[mid] << '\n';
//        if (temp[mid] == to_found)
//        {
//            mem = make_unique<int>(mid);
//            break;
//        }
//        else if (temp[mid] > to_found) {
//            end = mid;
//            mid = (start + end) / 2;
//        }
//        else if (temp[mid] < to_found) {
//            start = mid + 1;
//            mid = (start + end) / 2;
//        }
//    }
//    return mem;
//}

//// Enum of things to buy
// Contains things to buy

//// Person
// Should have a basket
// login
// logout
// actions to add something
// delete something
// show basket
// ship something

//// Personal basket
// List of things in basket
// Koszyk should have possibility to add things if something was bought
// Delete someting
// Show someting

//// Queue with processed object
// Implement with some kind of a thread and work with it
// wait for 5 sec and relese object
// write to scrn information that producct has been shiped
// only one thing at the time no multiple threads
// block item from modifing during this 20 secs

//// GlobalAction
// Global queue
// Global shipment
// Infi loop
// Can leave program with esc or something

enum class ThingsToBuy {
    toy,
    car,
    bread,
    apple,
    cup,
    e_cig,
    phone,
    PC,
    console,
};

constexpr const char* ThingsToBuyToString(ThingsToBuy e)
{
    switch (e)
    {
    case ThingsToBuy::toy: return "toy";
    case ThingsToBuy::car: return "car";
    case ThingsToBuy::bread: return "bread";
    case ThingsToBuy::apple: return "apple";
    case ThingsToBuy::e_cig: return "e_cig";
    case ThingsToBuy::phone: return "phone";
    case ThingsToBuy::PC: return "PC";
    case ThingsToBuy::console: return "console";
    default: throw std::invalid_argument("Unimplemented item");
    }
}

class GlobalQueue {
    // mutex? to block future process?
    queue<unique_ptr<ThingsToBuy>> processed_items;

public:
    GlobalQueue() = default;
    void AddItemToProcess(unique_ptr<ThingsToBuy> ptr) {
        processed_items.push(move(ptr));
    }

    void ProcessItems() {
        // Block item for 20 sec
        // Use thread
    }

};

class PersonalBasket {
    vector<unique_ptr<pair<ThingsToBuy,int>>> Basket;

public:
    PersonalBasket() = default;

    void AddNewItem(ThingsToBuy item) {
        auto it = find_if(Basket.begin(), Basket.end(), [&item](unique_ptr<pair<ThingsToBuy, int>>& element) {return item == element.get()->first; });
        if (it != Basket.end()) {
            it->get()->second += 1;
        }
        else {
            Basket.push_back(make_unique<pair<ThingsToBuy, int>>(item,1));
        }

    }

    void DeleteItem(const int& index) {
        if (Basket.at(index)->second <= 1) {
            Basket.erase(Basket.begin()+index);
        }
        else {
            Basket.at(index)->second -= 1;
        }
    }

    void ShowItem(const int& index) {
        try{
            cout << "Item: " << ThingsToBuyToString(Basket.at(index)->first) << "   ///   In Basket: " << Basket.at(index)->second << '\n';
        }
        catch (const std::out_of_range&){
            cout << "No such item" << '\n';
        }
    }

    void ShotAllItems() {
        for (auto &item:Basket) {
            cout << "Item: " << ThingsToBuyToString(item->first) << "   ///   In Basket: " << item->second << '\n';
        }
    }

    vector<unique_ptr<pair<ThingsToBuy, int>>>& ReturnBasket() {
        return Basket;
    }

};

//// Person
// Should have a basket
// login
// logout
// actions to add something
// delete something
// show basket
// ship something

class Person {
    string login{ "" };
    PersonalBasket basket;
    bool state{false};
    GlobalQueue& globalQueue;
public:
    Person(string _login, GlobalQueue& _globalQueue) : login(_login), state(true), globalQueue(_globalQueue){}
    Person() = default;

    void AddNewItemToBasket(const int& number) {
        try {
            basket.AddNewItem(ThingsToBuy(number));
        }
        catch (const exception& ex) {
            throw ex;
        }
    }

    void DeleteItemFromBasket(const int& number) {
        try {
            basket.DeleteItem(number);
        }
        catch (const exception& ex) {
            throw ex;
        }
    }

    // MAX_INT to all
    void ShowItem(const int& number) {
        if (number == INT_MAX) basket.ShotAllItems();
        basket.ShowItem(number);
    }

    void ShipItems() {
        for (auto &item : basket.ReturnBasket()) {
            while (item->second != 0) {
                auto ptr = make_unique<ThingsToBuy>(item->first);
                globalQueue.AddItemToProcess(move(ptr));
            }
        }
    }

    void Logout() {
        state = false;
    }

    void LogIn() {
        state = true;
    }

};

int main()
{
    // Person test
    GlobalQueue globalQueue;
    Person person("Zeev", globalQueue);


    person.AddNewItemToBasket(int(ThingsToBuy::apple));
    person.ShowItem(0);
    person.AddNewItemToBasket(int(ThingsToBuy::apple));
    person.AddNewItemToBasket(int(ThingsToBuy::apple));
    person.ShowItem(0);
    person.AddNewItemToBasket(int(ThingsToBuy::console));
    person.AddNewItemToBasket(int(ThingsToBuy::console));
    person.ShowItem(0);
    person.ShowItem(1);
    person.DeleteItemFromBasket(1);
    person.ShowItem(0);
    person.ShowItem(1);





    // Basket test
    /*PersonalBasket basket;
    basket.AddNewItem(ThingsToBuy::apple);
    basket.AddNewItem(ThingsToBuy::apple);
    basket.AddNewItem(ThingsToBuy::e_cig);
    basket.AddNewItem(ThingsToBuy::e_cig);
    basket.AddNewItem(ThingsToBuy::e_cig);

    basket.ShowItem(0);
    basket.ShowItem(1);

    basket.AddNewItem(ThingsToBuy::car);

    basket.ShowItem(2);

    basket.DeleteItem(2);

    basket.ShowItem(2);*/

    //vector<int> arr {1, 3, 5, 7, 9, 2, 4, 6, 8, 0};
    //unique_ptr<int> mem = make_unique<int>(1000);

    //for (auto& a : arr) {
    //    mem = binary_search(move(mem), a, arr);
    //    cout << "Szukane: " << a << " Wynik: " << *mem << " Memory value: " << mem << '\n';
    //}

    //string aa = "baa";
    ////unique_ptr<string> sample_input = make_unique<string>("www.abc.xy");
    ////int* factor = new int(87);
    //////OneWayPtrArray *arr = new OneWayPtrArray("qwe");
    //////AddNewValueToEnd(arr, "asd");
    //////AddNewValueToEnd(arr, "zxc");
    //////AddNewValueToEnd(arr, "bnm");
    //int result = palindromeIndex(aa);
    //cout << "Result: " << result << endl;
    ////PrintAllElements(arr);

    ////string val = GetElementFromIndex(arr, 3);
    ////cout << "Val: " << val << endl;

    ////DeleteObjectAtIndex(arr, 3);

    ////PrintAllElements(arr);



    //string res = caesarCipher(*sample_input, *factor);
    //cout << "result: " << res << endl;

    //// cin >> test_cases;

    //// should be 6
    //delete factor;
    //uint16_t res = color565(133, 133, 133);
    //cout << hex << res << endl;
    getchar();
    return 0;
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
