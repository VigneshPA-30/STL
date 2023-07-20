
#include <iostream>
#include <queue>
using namespace std;

/*
    Implement a C++ program that uses the STL priority_queue to find the Kth smallest
    element in an unsorted array.
    
    creating and pushing an unsorted array in priority_queue(which gets sorted automatically)
    Getting kth position as input
    
    variable place contains the position of ssmallest element in PQ as it has largest element
    at the top.
    
    running loop place times to get the value.
*/


int main()
{
	int arr[6] = {10,23,41,8,61,9,54,78,12};


	priority_queue<int> pq;

	
	cout << endl;

	for (int i = 0; i < 6; i++) {
		pq.push(arr[i]);
	}

	cout<<"Enter element place from 1 to  "<<pq.size()<<endl;
	int k;
	cin>>k;
	int min_element;
	
	int place=pq.size()-k+1;
	
	while (place) {
	min_element=pq.top() ;
		pq.pop();
		place--;
	}
    cout<<min_element<<endl;
	return 0;
}
