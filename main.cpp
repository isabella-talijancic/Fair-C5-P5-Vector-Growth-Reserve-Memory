// Vector Growth & Reserve Memory
// Demonstrates Vector Capacity & Size

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cout << "~ ~ ~ Vector Growth & Reserve Memory Demonstration ~ ~ ~ ~\n\n";
    
    cout << "Created a 10 element vector and initialized all to 1\n"; 
    
    vector<int> scores(10);   //initialize all 10 elements to 1
    
    cout << "    Vector size is : " << scores.size() ;
    cout << "\nVector capacity is : " << scores.capacity() ;

    cout << "\n-  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  - ";
    cout << "\n\nAdded five additional scores to vector ";	
    scores.push_back(10);        //memory is reallocated to accommodate growth   
    scores.push_back(11);
    scores.push_back(20);
    scores.push_back(21);
    scores.push_back(30);

    cout << "\n    New Vector size is : " << scores.size() ;
    cout << "\nNew Vector capacity is : " << scores.capacity() ;
    
    cout << "\n-  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  - ";
    cout << "\n\nReserved more vector memory for growth \n";	
    scores.reserve(10);         //reserve memory for 10 additional elements   
    
    cout << "\nAdded six additional scores to vector ";	
    scores.push_back(31);           
    scores.push_back(40);
    scores.push_back(41);
    scores.push_back(50);         
    scores.push_back(51);
    scores.push_back(60);
    
    cout << "\n    New Vector size is : " << scores.size() ;
    cout << "\nNew Vector capacity is : " << scores.capacity() ;

    cout << "\n\nThe End \n" ;
	
    return 0;
}