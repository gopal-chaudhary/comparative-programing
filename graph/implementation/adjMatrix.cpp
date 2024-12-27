#include<iostream>
#include<vector>


using namespace std;
void printList(vector<vector<int>>&adjMatrix){
	for(const auto& ele : adjMatrix){
		cout<<"| ";
		for(const auto& val : ele){
			cout<<val<<" | ";
		}
		cout<<endl;
	}
}

int main(){
	int n ;
	cin>> n ;
	vector<vector<int>>adjMatrix(n+1,vector<int>(n+1));
	for(int i=0;i<n;i++){
		int u,v;
		cin>>u>>v;
		adjMatrix[u][v] = 1;
		// in case of undirected
		adjMatrix[v][u] =1;
	}
	printList(adjMatrix);

	return 0;
}