//Shivangi Singh
//24070123148
//B3

#include <iostream>
#include <vector>
class SearchAlgorithms
{
    public:
    void linearSearch(std::vector<int>& temp, int key)
    {
      for(size_t i = 0; i<temp.size();i++)
      {
          if(temp[i]==key)
          {
              std::cout<<"Element found at index"<<i<<std::endl;
              return;
          }
      }
      std::cout<<"Element not found"<< std::endl;
    }
};
int main()
{
    std::vector<int> myVector = {1,52,6,3,9,0};
    SearchAlgorithms object1;
    object1.linearSearch(myVector,5);
    return 0;
}

//Output:
//Element not found
