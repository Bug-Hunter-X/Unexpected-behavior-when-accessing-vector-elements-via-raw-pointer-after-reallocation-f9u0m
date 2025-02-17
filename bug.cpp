std::vector<int> vec; 
vec.push_back(10); 
vec.push_back(20); 
vec.push_back(30);
int* ptr = &vec[0];
int val = *ptr; //val = 10 
vec.push_back(40); // Reallocation may happen
val = *ptr; //val may be different after reallocation, leading to unexpected behavior