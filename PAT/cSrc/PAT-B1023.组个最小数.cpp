#include <iostream>
using namespace std;
int main() {
    int n[10];/* 申明一个包含10个整数的数组n */

    for(int i=0;i<10;i++) {/* 输入10个整数 */
		cin>>n[i]; 
    	}
	
    for(int i=1;i<10;i++) {/* 先输出最小的非零整数 */
       
	 if(n[i]>0) {  /* 判断最小的非零整数 */
            cout<<i;
            n[i]--; /* 数组减一 */
            break;
	    }
	}
	
    for(int i=0;i<10;i++) {/* 依次从小到大输出剩下的数 */ 
        for(int j=0;j<n[i];j++) { 
            cout<<i;
	    }
	return 0;
       }
}
