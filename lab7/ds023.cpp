#include <iostream>
using namespace std;

class Product
{
public:
    string name;
    int price;
    int sale;
    string company;
    string gram;
    void add()
    {
        cin.ignore();
        getline(cin, name);
        cin >> price >> sale >> gram >> company;
    }
    void print()
    {
        cout << calsale() << "(-" << sale << "%)    " << name << " " << gram << " " << company << endl;
    }
    int calsale()
    {
        return price - (price * 0.01 * sale);
    }
};

int main()
{
    Product *product = new Product[10];
    int num = 0;
    int menu = 0;

    while (menu != 3)
    {
        cout << "1. Add  2. List  3. Quit > ";
        cin >> menu;
        if (menu == 1)
        {
            product[num].add();
            num++;
        }
        else if (menu == 2)
        {
            for (int i = 0; i < num; i++)
                product[i].print();
        }
    }
    delete[] product;
    return 0;
}
