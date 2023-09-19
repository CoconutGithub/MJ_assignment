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

    // min이 max보다 더 큰 수가 들어올 수 있음.



    reference_by_pointers(&min, &max);

    // 포인터에 의한 참조호출, 함수 실행 결과 더 작은 것이 min으로, 더 큰 것이 max로 감.

    cout << "Using reference by pointers,min = " << min << " and max = " << max << "." << endl;// 여기서 min과 max를 출력



    reference_by_alias(min, max);

    // alias(reference)에 의한 참조호출, 함수 실행 결과 더 작은 것이 min으로, 더 큰 것이 max로 감.

    cout << "Using reference by alias,min = " << min << " and max = " << max << "." << endl;// 여기서 min과 max를 출력



    minmax_type combo, new_combo;
    // combo.mini에 min, combo.maxi에 max 대입


    new_combo = by_return_value(min, max);   // call by value 호출


    cout << "Using reference value,min = " << new_combo.mini << " and max = " << new_combo.maxi << "." << endl;

    return 0;

}