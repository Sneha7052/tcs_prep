#include <iostream>
#include<vector>
#include<queue>
using namespace std;
int main() {
	int n;
	int ans;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	priority_queue<int>pq;
	for(int num: arr){
	    pq.push(num);
	}
	int lar=pq.top();
	while(!pq.empty() && pq.top()==lar){
	    pq.pop();
	}

	ans=pq.empty()?-1:pq.top();
	cout<<ans;
	return 0;
}
