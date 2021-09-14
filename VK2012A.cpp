#include<bits/stdc++.h>
using namespace std;
// int arr[100001];
// int counti[5]={};
// int main(){
// 	int n;
// 	cin>>n;
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 		counti[arr[i]]++;
// 	}
// 	sort(arr,arr+n);
// 	// for(int i=0; i<n; i++){
// 	// 	cout<<arr[i]<<" ";
// 	// }
// 	//cout<<"\n";
// 	int x=0,u=0;
// 	int i=n-1,j=0,diff=0;
// 	while(i>-1){
// 		if(arr[i]!=4){
// 			if (arr[i]==3)
// 			{

// 				if(counti[1]>0){
// 					arr[i]+=1;
// 					counti[1]--;
// 				}
// 			}
// 			if(arr[i]==2){
// 				if(counti[2]>0 && counti[2]!=1){
// 					arr[i]+=2;
// 					//cout<<"Y";
// 					counti[2]-=2;
// 					u+=1;

// 				}
// 				else if(counti[1]>1 && counti[2]==1){
// 					arr[i]+=2;
// 					//cout<<"Y";
// 					// cout<<arr[i]<<"\n";
// 					counti[1]=counti[1]-2;
// 				}
// 				else if(counti[1]==1 && counti[2]>0){
// 					//cout<<"Y";
// 					arr[i]+=1;
// 					counti[1]--;
// 				}
// 			}
			
// 			//cout<<counti[1]<<"\n";
// 			if(arr[i]==1){
// 				// cout<<"Y";
// 				if(counti[1]>3){
// 					//cout<<"y\n";
// 				x=counti[1]/4;
// 				//cout<<x<<" ";
// 				counti[1]-=(4*x);
// 				//cout<<counti[1]<<" ";
// 				u+=x;
// 				//counti[1]+=x;
// 				//cout<<counti[1]<<" ";
// 				}
// 				else if(counti[1]>0 && counti[1]<4){
// 					counti[1]=0;
// 					u++;
// 					//cout<<"y";
// 				}
// 			}
// 			}
// 		i--;
// 	}
// 	//cout<<u;
// 	for(int i=0; i<5;i++){
// 		//cout<<counti[i]<<" ";
// 		if(counti[i]>0) u+=counti[i]; 
// 	}
// 	cout<<u<<"\n";
// 	// for(int i=0; i<n; i++){
// 	// 	cout<<arr[i]<<" ";
// 	// }
// 	// cout<<"\n";
// 	return 0;
// }



int main()
{
    int n, s, count[5]= {0};
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d", &s);
        count[s] += 1;
    }
    // for(int i=0; i<5; i++){
    // 	cout<<count[i]<<" ";
    // }
    //cout<<"\n";
    int total = count[4] + count[3] + count[2] / 2;
   // cout<<total<<"\n";
    count[1] -= count[3];
    // for(int i=0; i<5; i++){
    // 	cout<<count[i]<<" ";
    // }
    //cout<<"\n";
    if (count[2] % 2 == 1)
    {
    	//cout<<"Y\n";
        total += 1;
        count[1] -= 2;
    }
    if (count[1] > 0)
    {
        total += (count[1] + 3) / 4;
    }
    printf("%d\n", total);
    return 0;
}