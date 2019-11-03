#include <vector>
using namespace std;

class FenwickTree
{
    private:
        int size;
        vector<long long int> BIT;

    public:
        FenwickTree(int sz=1e5)
        {
            this->size = sz;
            this->BIT.resize(sz+1,0);
        }

        // return sum from 1 to index (inclusive and zero indexed)
        long long int get(int index)
        {
            long long int sum = 0;
            index = index + 1; 
            while (index>0) 
            {
                sum += this->BIT[index];
                index -= index & (-index); 
            } 
            return sum;
        }

        // updates the tree (zero indexed query)
        void upd(int index, long long int val) 
        {  
            index = index + 1; 
            while (index <= this->size) 
            {
                this->BIT[index] += val;
                index += index & (-index); 
            } 
        } 


        // returns sum from l to r (zero indexed query)
        long long int ask(int l, int r)
        {
            return get(r)-get(l-1);
        }

        ~FenwickTree()
        {
            this->BIT.clear();
        }
};

int main(){
    FenwickTree ft(100);
}
