// Random Rectangle

#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
int main()
{
  //planted a string and put an interger max at 40 so that it wouldn't exceeed that
  // And the seed made it so that it was continuously Random
  unsigned seed = time(0);
  srand(seed);
  std::string numsign;
  int max = 40;
  int num;
  num = rand() % max + 1;

  numsign.assign(num,'#');
// this is where I repeated the same line 3 times so that it would be 3 high
  std::cout << numsign << std::endl;
  std::cout << numsign << std::endl;
  std::cout << numsign << std::endl;

return 0;

}
