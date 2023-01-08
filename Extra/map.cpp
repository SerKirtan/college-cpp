#include <iostream>
#include <map>

int main()
{

  // Create a map of strings to integers
  std::map<std::string, int> map;

  // Insert some values into the map randomly
  map["one"] = 1;
  map["two"] = 2;
  map["three"] = 3;
  map["four"] = 4;
  map["five"] = 5;
  map["six"] = 6;
  // map.insert({"One", 1});
  // map.insert({"Two", 2});
  // map.insert({"Three", 3});
  // map.insert({"Four", 4});
  // map.insert({"Five", 5});

  // Get an iterator pointing to the first element in the map
  std::map<std::string, int>::iterator it = map.begin();

  // Iterate through the map and print the elements
  while (it != map.end())

  {

    std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;

    ++it;
  }

  return 0;
}
