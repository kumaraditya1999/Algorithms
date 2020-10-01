#include <vector>
using namespace std;

template<typename T>
class FenwickTree
{
    private:
        int size;
        vector<T> BIT;

    public:
        FenwickTree(int sz=1e5)
        {
            this->size = sz;
            this->BIT.resize(2*sz+1,0);
        }

        // return sum from 1 to index (inclusive and zero indexed)
        T get(int index)
        {
            T sum = 0;
            index = index + 1; 
            while (index>0) 
            {
                sum += this->BIT[index];
                index -= index & (-index); 
            } 
            return sum;
        }

        // updates the tree (zero indexed query)
        void upd(int index, T val) 
        {  
            index = index + 1; 
            while (index <= this->size) 
            {
                this->BIT[index] += val;
                index += index & (-index); 
            } 
        } 

        // returns sum from l to r (zero indexed query)
        T ask(int l, int r)
        {
            return get(r)-get(l-1);
        }

        ~FenwickTree()
        {
            this->BIT.clear();
        }
};

int main(){
    FenwickTree<int> ft(100);
}