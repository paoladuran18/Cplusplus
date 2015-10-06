#include <iostream>
#include <htlist.H>

using namespace Aleph;

int main()
{
  DynList<long> l1, l2, lista;
  long numbers = 0;

  std::cout << "Enter the numbers, -1 for exit " << std::endl;
  while( numbers != -1 )
  {
    std::cin >> numbers;
    if(numbers > -1)
      l1.append(numbers);
  }

  numbers = 0;  
  
  std::cout << "Enter the numbers, -1 for exit " << std::endl;
  while( numbers != -1 )
  {
    std::cin >> numbers;
    if(numbers > -1)
      l2.append(numbers);
  }
  
 DynList<long>::Iterator it2(l2);

  l1.for_each([&] (long x)
              {
                while(it2.has_curr())
                {
                  if(x % it2.get_curr() == 0)
                  {
                    lista.append(x);
                    break;
                  }
                else
                    it2.next();
                    continue;
                }
              });
 for(auto &i: lista)
  std::cout << i << " ";

return 0;
}
