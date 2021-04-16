
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector <int> v[5];
int visited[5];

void bfs(int source);
int main(){
	int n,m,x,y;
	cin>>n>>m;

	for(int i=1;i<=n;i++){
		cin>>x>>y;
		v[x].push_back(y);
	}
for(int i = 0; i<n;i++){
	if(visited[i]==0){
	bfs(i);
}
}

	
}
void bfs(int source){
	queue<int>q;

	q.push(source);
	visited[source]=1;

	while(!q.empty()){
		int current = q.front();
		q.pop();
		cout<<current<<" ";

		for(int i = 0; i<v[current].size();i++){
			int child = v[current][i];

			if(visited[child]==0){
				q.push(child);
				visited[child]=1;
			}
		}



	}
cout<<endl;
}