#include<iostream>
int main(){
   auto pair1 = std::make_pair(1,3);
   std::cout<<pair1.first<<","<<pair1.second<<std::endl;
   std::swap(pair1.first,pair1.second);
   std::cout<<pair1.first<<","<<pair1.second<<std::endl;

}