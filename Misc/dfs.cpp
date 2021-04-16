/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector <int> v[5];
int visited[5];

void dfs(int current);
int main(){
	int n,m,x,y;
	cin>>n>>m;

	for(int i=1;i<=n;i++){
		cin>>x>>y;
		v[x].push_back(y);
	}
for(int i = 0; i<n;i++){
	if(visited[i]==0){
	dfs(i);
}
}

	
}
void dfs(int current){
	
	cout<<current<<" ";
	visited[current]=1;

	for(int i = 0; i<v[current].size();i++){
		int child = v[current][i];

			if(visited[child]==0){
				
				dfs(child);
			}
		


	}
cout<<endl;
}
