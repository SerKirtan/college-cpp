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
/*begin() – Returns an iterator to the first element in the map.
end() – Returns an iterator to the theoretical element that follows the last element in the map.
size() – Returns the number of elements in the map.
max_size() – Returns the maximum number of elements that the map can hold.
empty() – Returns whether the map is empty.
pair insert(keyvalue, mapvalue) – Adds a new element to the map.
erase(iterator position) – Removes the element at the position pointed by the iterator.
erase(const g)– Removes the key-value ‘g’ from the map.
clear() – Removes all the elements from the map.*/
