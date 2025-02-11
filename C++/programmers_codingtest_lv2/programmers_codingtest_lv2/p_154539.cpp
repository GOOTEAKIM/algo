#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

vector<int> solution(vector<int> numbers) {
    int n = numbers.size();

    vector<int> ans(n, -1); 
    
    stack<int> st; 

    for (int i = 0; i < n; i++) {
        
        while (!st.empty() && numbers[st.top()] < numbers[i]) {

            ans[st.top()] = numbers[i]; 
        
            st.pop(); 
        
        }

        st.push(i); 
    }

    return ans;
}
