#include "Kyoto.h"
#include <iostream>

namespace KyotoX
{
    void Initialize()
    {
        std::cout << "KyotoX Engine Initialized\n";
    }

    void Run()
    {
        std::cout << "Running KyotoX...\n";
    }
}

int main()
{
    KyotoX::Initialize();
    KyotoX::Run();
    return 0;
}