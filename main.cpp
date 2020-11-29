//Dr_T Unit 2 COSC-1437 Starter 
/* Task -

Top level solution folder: C_STL_Library_Chavous

create a single main.cpp that contains code samples and implementations of each of the following topics */

#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
#include <cassert>
#include <stack>
#include <set>

using namespace std; 

//Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/ clarifications added
class MyClassVector1 
{ 
  private:  
      vector<int> vec; 
  public: 
      MyClassVector1 (vector<int> v)  //parameterized constructor
      { 
        vec = v; 
      } 
      void print() 
      { 
          /// print the value of vector 
          for (int i = 0; i < vec.size(); i++) 
          {
              cout << vec[i] << " "; 
          }    
      } 
};
//Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/ clarifications added
class MyClassVector2 { 
    vector<int> vec2; 
  
public: 
    MyClassVector2(vector<int> v) : vec2(v) 
    { 
    } 
    void print() 
    { 
        /// print the value of vector 
        for (int i = 0; i < vec2.size(); i++) 
            cout << vec2[i] << " "; 
    } 
}; 
//Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/ clarifications added
class MyClassVector3 { 
    vector<int>& vec3; 
  
public: 
    // this is the right way to assign 
    // the reference of stl container 
    MyClassVector3(vector<int>& arr) 
        : vec3(arr) 
    { 
    } 
    void print() 
    { 
        /// print the value of vector 
        for (int i = 0; i < vec3.size(); i++) 
            cout << vec3[i] << " "; 
    } 
}; 

int main(int argc, char* argv []) 
{
    /****Section_Name***Vectors*/ 
    //Write the base code for: 5. std::vector example
    vector<double> vd; //vd elments are floating point numbers
    vector<int> vi; //vi elements are integer numbers 
    vector<string> vs; //vs elements are string objects 
    string a;
    string b;
    string c;

    a = 'a';
    b = 'b';
    c = 'c';
    //Expand this code to:

    //add 3 elements to the vd vector
    vd.push_back(1);
    vd.push_back(2);
    vd.push_back(3);

    //add 3 elements to the vi vector
    vi.push_back(1);
    vi.push_back(2);
    vi.push_back(3);

   // add 3 elements to the vs vector
    vs.push_back(a);
    vs.push_back(b);
    vs.push_back(c);

   // display the 3 elements in the vd vector
   cout << "\nValues in vd: \n"; 
   for(double vals : vd)
   {
     cout << vals << endl; 
   }
   cout << "\nAnother way to print vector: " << endl; 
   for(int i = 0; i < vd.size(); i++)
   {
     cout << vd[i] << endl; 
   }

    //display the 3 elements in the vi vector
      cout << "\nValues in vi: \n"; 
   for(int vals : vi)
   {
     cout << vals << endl; 
   }

   // display the 3 elements in the vs vector
     cout << "\nValues in vs: \n"; 
   for(string vals : vs)
   {
     cout << vals << endl; 
   }

    /****Section_Name***Vector_as_Class_Member*/ 
    //Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/

   cout << "\nVector_as_Class_Member" << endl; 
    vector<int> vec; 
        for (int i = 1; i <= 5; i++) 
            vec.push_back(i); 
        MyClassVector1 obj(vec); 
        obj.print(); 
      
      //Continue with MyClassVector2 and MyClassVector3
      cout << "\n" << endl; 
    vector<int> vec2; 
    for (int i = 1; i <= 5; i++) 
        vec.push_back(i); 
    MyClassVector2 obj2(vec2); 
    obj.print(); 

    cout << "\n" << endl;
    vector<int> vec3; 
    for (int i = 1; i <= 5; i++) 
        vec.push_back(i); 
    MyClassVector3 obj3(vec3); 
    obj.print();

    /****Section_Name***STL_Iterators*/ 
    vector<int> vint(3); // vector with 3 integer numbers
    vint[0] = 10;
    vint[1] = 20;
    vint[2] = 30;

    // Display elements of the vector:
    cout << "\n" << endl;
    vector<int>::iterator it;
    for (it = vint.begin(); it != vint.end(); ++it) {
      // Like pointer, iterator is dereferenced to
      // access the value of the element pointed by it:
      cout << " " << *it;
    }

    /****Section_Name*** Stack*/
    stack<int> st;
    st.push(100); //push number on the stack
    assert(st.size() == 1); // verify one element is on the stack
    assert(st.top() == 100); // verify element value

    st.top() = 456; // assign new value
    assert(st.top() == 456);

    st.pop(); // remove element
    assert(st.empty() == true);
    //Write comments that help one better understand what the code is doing.

    /****Section_Name**** Set*/
    //Write the code as presented in: 3. std::set
    set<int> iset; // set of unique integer numbers

    iset.insert (11); // populate set with some values
    iset.insert (-11);
    iset.insert (55);
    iset.insert (22);
    iset.insert (22);

    if (iset.find(55) != iset.end() ){ // is value already stored?
      iset.insert(55);
    }
    assert(iset.size() == 4);//check size
    set<int>::iterator it;
    for (it = iset.begin(); it != iset.end(); ++it){
      cout << " " << *it;
    }

    //Write comments that help one better understand what the code is doing.

    /****Section_Name****Pair_Structure*/
    //Write the code as presented in: 4. std::pair structure

    //Write comments that help one better understand what the code is doing.

    /****Section_Name**** Map_Insert*/
    //Write the code as presented in: 14. std::map::insert

    //Write comments that help one better understand what the code is doing.

    /****Section_Name****Map_Summary*/
    //Write the code as presented in: 16. Map summary

    //Write comments that help one better understand what the code is doing.

    /****Section_Name**** Sort_Algorithm*/
    //Write the code as presented in: 23. sort example

    //Write comments that help one better understand what the code is doing.

    /****Section_Name****Predicate_Algorithm*/
    //Write the code as presented in: 25. count_if and predicate function

    //Write comments that help one better understand what the code is doing. 

      return 0; 
 }