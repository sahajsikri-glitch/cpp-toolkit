//SECTION-13 
//OBJECT ORIENTED PROGRAMMING 

// declaring class and objects
// class player{
//     //attributes
//     string name;
//     int health;
//     int xp;

//     // methods
//     void talk(string);
//     bool is_Dead();
// };

// int main(){
//     player frank;
//     player hero;

//     return 0;
// }
  //section - 20 : STL 
  // # 1/06/26

  // introduction to iterators 
  // #include <set>
  // #include <map>
  // #include <list>

  // //illustration -01 :
  // void test_case1(){
  //   vector<int>vec {1,2,3,4,5};
  //   auto it = vec.begin();
  //    cout<<*it<<endl;

  //    it++;
  //    cout<<*it<<endl;

  //    it+=2;
  //    cout<<*it<<endl;

  //    it=vec.end()-1;
  //    cout<<*it<<endl;
  // }

  // //illustration -02 :
  // void test_case2(){
  //   vector <int> vec2 {1,2,3,4,5};
  //   vector <int>::const_iterator it2 = vec2.begin();
  //   // auto it2 = vec2.cbegin(); //OR

  //   while (it2!=vec2.end())
  //   {
  //     cout<<*it2<<endl;
  //     it2++;
  //   }
  // }

  // //illustration -03 :
  // void test_case3(){
  //   vector <int> vec3 {1,2,3,4,5};
  //   auto it3 = vec3.rbegin();
  //   while(it3!=vec3.rend()){
  //     cout<<*it3<<endl;
  //     it3++;
  //   }

  //   list<string>name {"larry","moe","curly"};
  //   // vector <string>::const_reverse_iterator it4 = name.begin();
  //   auto it4 = name.crbegin();
  //   cout<<*it4<<endl;
    
  //   it4++;
  //   cout<<*it4<<endl;

  //   map<string,string> fav {{"frank","cpp"},{"sahaj","engg"},{"teju","doctor"}};
  //   auto it5 = fav.begin();
  //   while(it5!=fav.end()){
  //     cout<<it5->first<<" "<<it5->second<<endl;
  //     it5++;
  //   }
  // }

  // int main(){
  //   test_case1();
  //   cout<<"-----------------------------------------"<<endl;
  //   test_case2();
  //   cout<<"-----------------------------------------"<<endl;
  //   test_case3();
  // }