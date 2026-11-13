
#include <iostream>
#include <vector>
using namespace std;

class Product
{
private:
    string name;
    float price;
    float discountPercentage;

public:
    void getData()
    {
        cout << "Enter product name: ";
        cin >> name;

        cout << "Enter original price: ";
        cin >> price;

        cout << "Enter discount percentage: ";
        cin >> discountPercentage;
    }

    void showInfo() const
    {
        cout << "Product: \n" << name
             << " Original Price: \n" << price
             << " Discount: " << discountPercentage << "%" << endl;
    }

    friend float applyDiscount(Product p);
};

float applyDiscount(Product p)
{
    float discountAmount = (p.price * p.discountPercentage) / 100.0f;
    return p.price - discountAmount;
}

int main()
{
    int n;
    cout << "Enter Number of Product: ";
    cin >> n;

    vector<Product> products(n);

    for (int i = 0; i < n; i++)
    {
        cout << "\n Enter details for Product " << i + 1 << "\n";
        products[i].getData();
    }

    cout << " Product Summary\n";
    for (int i = 0; i < n; i++)
    {
        products[i].showInfo();
        float finalPrice = applyDiscount(products[i]);
        cout << "Final Price after Discount: " << finalPrice << "\n\n";
    }

    return 0;
}
