// { Driver Code Starts
// C++ program to find union of 
// two sorted arrays 
#include <bits/stdc++.h> 
using namespace std; 

vector<int> printIntersection(int arr1[], int arr2[], int N, int M);  
  
/* Driver program to test above function */
int main() 
{ 
    int T;
    cin >> T;
 
    while(T--){
        
        int N, M;
        cin >> N >> M;
        int arr1[N];
        int arr2[M];
        for(int i = 0;i<N;i++){
            cin >> arr1[i];
        }
        
        for(int i = 0;i<M;i++){
            cin >> arr2[i];
        }
        
        // Function calling 
        vector<int> v;
        v = printIntersection(arr1, arr2, N, M); 
        
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";

        cout << endl;
    }
    
  return 0; 
} 

vector<int> printIntersection(int arr1[], int arr2[], int N, int M) 
{ 
    int i=0,j=0;
    vector<int> res;
    while(i<N && j<M)
    {
        if(arr1[i]<arr2[j])
            i++;
        else if(arr1[i]>arr2[j])
            j++;
        else if(arr1[i]==arr2[j])
        {
            if(res.empty())
                res.push_back(arr1[i]);
            else if(res.back()!=arr1[i])
                res.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    if(res.empty())
        res.push_back(-1);
    return res;
}
// 4 5
// 1 2 3 4
// 2 4 6 7 8
