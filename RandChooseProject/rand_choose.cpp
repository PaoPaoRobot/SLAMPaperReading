#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <list>
using namespace std;


int main()
{
  //input apply offline students id  
  int arr_id_offline[] = {23,3,5,6,7,9,10,11,13,16,18,20,22,25,26,27,30,32,33,34,36,37,39,42,43,45,46,50};
  
  list<int> l_apply_id (arr_id_offline, arr_id_offline + sizeof(arr_id_offline) / sizeof(int));
  
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
    int n_rand_num = rand() % (l_apply_id.size());
    
    auto ite_id = l_apply_id.begin();
    advance(ite_id,n_rand_num);

    int n_id = *ite_id;  
    cout << i << " rand_num: " << n_rand_num << " id: " << n_id << endl;
    l_apply_id.remove(n_id);
  }
  cout << "rest id nums is : " << l_apply_id.size() << " (should be " << (n_apply_size - n_max_num) << ")." << endl; 
  cout << endl;
   
  return 0;
};

