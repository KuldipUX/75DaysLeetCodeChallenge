class Solution {
public:
    int digitProduct(int x){
        int product =1;
        while(x>0){
            product = product*(x%10);
            x = x/10;
        }
        return product;
    }
    int smallestNumber(int n, int t) {
         while (digitProduct(n) % t != 0) {
            n++;
        }

        return n;
    }
};