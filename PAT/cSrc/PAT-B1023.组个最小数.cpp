#include <iostream>
using namespace std;
int main() 
{
    int n[10];/* 申明一个包含10个整数的数组n */
    
    /* 输入10个整数 */	
    for (int i = 0; i < 10; i++) 
    {
	 cin >> n[i]; 
    }

    /* 先输出最小的非零整数 */	
    for (int i = 1; i < 10; i++)
    { 
	 /* 判断最小的非零整数 */   
	 if (n[i] > 0) {  
            cout << i;
            n[i]--; /* 该位置对应的元素 -1 */
            break;
	 }
     }
	
    /* 依次从小到大输出剩下的数 */	
    for (int i = 0; i < 10; i++) 
    { 
        for (int j = 0; j < n[i]; j++) 
	{ 
            cout << i;
	}
    }
    return 0;      
}
