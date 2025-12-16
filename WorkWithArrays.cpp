#include <iostream>
#include <valarray>
#include <tchar.h>

int _tmain(int argc, _TCHAR* argv[])
{
    int nElems;
    std::cout << "Input a count of elements in array\r\n";
    std::cin >> nElems;
    std::valarray<int> iArray(nElems);
    for (int i = 0; i < nElems; i++)
    {
        std::cout << "Input an element N " << i + 1 << "\r\n";
        std::cin >> iArray[i];
    }
    std::cout << "Inputed array : ";
    for (int i = 0; i < nElems; i++)
        std::cout << iArray[i] << " ";
    std::cin.ignore();
    std::cin.get();
}
