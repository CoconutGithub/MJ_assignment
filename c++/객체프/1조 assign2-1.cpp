#include<iostream>
using namespace std;


typedef struct minmax
{
    int mini;
    int maxi;

} minmax_type;



void reference_by_pointers(int* a, int* b)
{
    int temp;

    if (*a > * b)
    {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    //cout << "Using reference by pointers,min=" << *a << "and max=" << *b << endl;
}



void reference_by_alias(int& a, int& b)
{
    int temp;

    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    //cout << "Using reference by alias,min=" << a << "and max=" << b << endl;
}


minmax_type by_return_value(int a, int b)
{
    minmax_type res;
    int temp;

    res.mini = a;
    res.maxi = b;

    if (res.mini > res.maxi)
    {
        temp = res.mini;
        res.mini = res.maxi;
        res.maxi = temp;
    }
    return res;
}




int main()
{
    int min, max;



    cout << "Enter Min and Max" << endl;
    cin >> min >> max;

    // min�� max���� �� ū ���� ���� �� ����.



    reference_by_pointers(&min, &max);

    // �����Ϳ� ���� ����ȣ��, �Լ� ���� ��� �� ���� ���� min����, �� ū ���� max�� ��.

    cout << "Using reference by pointers,min = " << min << " and max = " << max << "." << endl;// ���⼭ min�� max�� ���



    reference_by_alias(min, max);

    // alias(reference)�� ���� ����ȣ��, �Լ� ���� ��� �� ���� ���� min����, �� ū ���� max�� ��.

    cout << "Using reference by alias,min = " << min << " and max = " << max << "." << endl;// ���⼭ min�� max�� ���



    minmax_type combo, new_combo;
    // combo.mini�� min, combo.maxi�� max ����


    new_combo = by_return_value(min, max);   // call by value ȣ��


    cout << "Using reference value,min = " << new_combo.mini << " and max = " << new_combo.maxi << "." << endl;

    return 0;

}