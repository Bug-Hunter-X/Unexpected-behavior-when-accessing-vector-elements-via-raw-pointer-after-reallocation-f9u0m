std::vector<int> vec; 
vec.push_back(10); 
vec.push_back(20); 
vec.push_back(30);
for (int& val : vec) { //Using range based for loop
    // Process each element safely
}
//Alternative with iterators
for (auto it = vec.begin(); it != vec.end(); it++) {
   int val = *it; //Safe access
}
vec.push_back(40); 
// Accessing elements is safe, even after the reallocation