#include <iostream>
#include <vector>
using namespace std ;
int main()
{
     int size,t;
    cout<<"Enter Array size :" <<endl;
    cin>> size ;
    int arr[ size] ;
    cout<<"Enter elements :"<<endl ;
    for(int i=0;i<size;i++)
        cin>>arr[i] ;
    cout<<"Enter Target"<<endl ;
    cin>>t ;

    // Find pairs that sum to the target
    vector<int> result ;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]+arr[j]==t)
            {
                result.push_back(i); // Push index i to result
                result.push_back(j); // Push index j to result
                cout << "Pair found at indices: " << result[0] << " " << result[1] << endl;
                return 0;
            }
        }
    }
     // If no pair is found
    cout << "No pairs found with the given target." << endl;
    return 0;
}
