#include <iostream>
using namespace std;

int count_0 = 0; // The count of 0 return
int count_1 = 0; // The count of 1 return

int fibonacci(int n) {
    if (n == 0) 
    {
        //printf("0");
        count_0++;
        return 0;
    }
    else if (n == 1) 
    {
        //printf("1");
        count_1++;
        return 1;
    } 
    else 
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int T; // The number of Test Case
    int n; // The nature number for Fibonacci(n)
    int *n_arr; // The array of nature number
    int **count_pair; // The pair of 0's number and 1's number
    int i;  // parameter of 'for-loop'

    cin >> T;
    // cout << "Let's Test " << T << "th" << endl; 
    if(T > 40 || T < 0)
        return -1;
    
    n_arr = new int[T];
    count_pair = new int*[2];

    for(i=0; i<2; i++)
    {
        count_pair[i] = new int[T];
    }
    
    i = 0;
    while(T--)
    {
        
        cin >> n;
        *(n_arr + i) = n; //n_arr[i] = n => n_arr = {n0, n1, n2, n3}
        fibonacci(n);
        count_pair[0][i] = count_0; // count_pair[0][0] = count_0 of fibonacci(n0) , count_pair[1][0] = count_0 of fibonacci(n1)
        count_pair[1][i] = count_1; // count_pair[0][1] = count_1 of fibonacci(n0) , count_pair[1][1] = count_1 of fibonacci(n1)
        i++;
        count_0 = count_1 = 0;
    }

 
    for(T=0; T<i; T++)
    {
        cout << count_pair[0][T] << " " << count_pair[1][T] << endl;
    }

    delete [] n_arr;
    for(i=0; i<T; i++)
        delete [] count_pair[i];
    delete [] count_pair;

    return 0;
}