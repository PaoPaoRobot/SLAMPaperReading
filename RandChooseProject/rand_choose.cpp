#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <vector>
using namespace std;


int main()
{
  //input apply offline students id
  vector<int> l_apply_id = {23,3,5,6,7,9,10,11,13,16,18,20,22,25,26,27,30,32,33,34,36,37,39,42,43,45,46,50};

  //print
  int n_apply_size = l_apply_id.size();
  cout << "apply size is " << n_apply_size << endl;
  cout << "id is " << endl;
  for(auto ite = l_apply_id.begin(); ite != l_apply_id.end(); ++ite)
  {
    cout << *ite << " ";
  }
  cout << endl;

  //rest space
  int n_max_num = 20 - 7;
  cout << "but the rest space is only " << n_max_num << endl;

  srand(time(NULL));
  cout << "rand choose result: " << endl;
  for(int i = 0; i < n_max_num; ++i)
  {
    int n_rand_num = rand() % (l_apply_id.size() - i);
    swap(l_apply_id[n_rand_num], l_apply_id[l_apply_id.size() - i - 1]);
    cout << i << " rand_num: " << n_rand_num << " id: " << l_apply_id[l_apply_id.size() - i - 1] << endl;
  }
  cout << endl;

  return 0;
};
