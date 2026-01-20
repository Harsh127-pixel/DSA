#include<iostream>
#include<math.h>
#include<string.h>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<unordered_set>
#include<unordered_map>
#include<algorithm>
using namespace std;

// Stl contains
// Algorithm
// Containers
// Iterators
// Function Objects

// Pairs
void eplainPair(){ 
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;
    pair<int, pair<int, int>> p1 = {1, {3, 4}};
    cout << p1.first << " " << p1.second.first << " " << p1.second.second << endl;
    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[1].second << endl;
}

void explainVectors(){
    // vectors are dynamic arrays
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    
    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(4, 5);

    vector<int> v(5,100); // 5 elements, each of value 100
    vector<int> v(5); // 5 elements, default initialized to 0

    vector<int> v1(5, 100); // 5 elements, each of value 100
    vector<int> v2(v1); // copy of v1

    vector<int>::iterator it = v.begin();

    it++;
    cout << *(it) << " ";

    it = it + 2;
    cout << *(it) << " ";

    vector<int>::iterator it1 = v.end();
    vector<int>::reverse_iterator it2 = v.rend();
    vector<int>::reverse_iterator it3 = v.rbegin();

    cout << v[0] << " " << v.at(0) << " " ;
    cout << v.back() << " " << endl;

    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }

    for(auto it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }
    for(auto it : v){
        cout << it << " ";
    }
    v.erase(v.begin() + 1); // erases element at index 1
    v.erase(v.begin() + 2, v.begin() + 4); // erases elements from index 1 to 3

    // insertion
    vector<int> v(2,100);
    v.insert(v.begin(), 300); // inserts 300 at the beginning
    v.insert(v.begin() + 1, 2, 10); // inserts two 10s at index 2

    vector<int> copy(2,50); 
    v.insert(v.begin(), copy.begin(), copy.end()); // inserts copy vector at the beginning

    cout << v.size() << endl; // size of vector
    cout << v.capacity() << endl; // capacity of vector
    cout << v.max_size() << endl; // maximum size of vector
    v.resize(4); // resizes vector to contain 4 elements
    v.clear(); // clears the vector
    cout << v.empty() << endl; // checks if vector is empty
    v.pop_back(); // removes last element
    v.swap(v1); // swaps v and v1
}

void explainList(){
    list<int> ls;
    ls.push_back(1);
    ls.emplace_back(2);
    ls.push_front(3);
    ls.emplace_front(4);

    // rest of the operations are same as vector
    // begin, end, rbegin, rend, size, max_size, clear, swap, erase, etc.
}

void explainDeque(){
    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(3);
    dq.emplace_front(4);

    dq.pop_back();
    dq.pop_front();

    dq.back();;
    dq.front();

    // rest of the operations are same as vector
    // begin, end, rbegin, rend, size, max_size, clear, swap, erase, etc.
}

void explainStack(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(3);
    st.emplace(5);

    cout << st.top() << endl; // prints top element

    st.pop(); // removes top element

    cout << st.size() << endl; // size of stack
    cout << st.empty() << endl; // checks if stack is empty

    stack<int> st1, st2;
    st1.swap(st2); // swaps st1 and st2
}

void explainQueue(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(3);

    q.back() += 5;

    cout << q.front() << endl; // prints front element
    cout << q.back() << endl; // prints back element

    q.pop(); // removes front element

    cout << q.size() << endl; // size of queue
    cout << q.empty() << endl; // checks if queue is empty

    queue<int> q1, q2;
    q1.swap(q2); // swaps q1 and q2
}

void explainPriorityQueue(){
    // max heap
    priority_queue<int> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);  

    cout << pq.top() << endl; // prints top element

    pq.pop(); // removes top element

    cout << pq.size() << endl; // size of priority queue
    cout << pq.empty() << endl; // checks if priority queue is empty

    // min heap
    priority_queue<int, vector<int>, greater<int>> minheap;
}

void explainSet(){
    set<int> s;
    s.insert(1);
    s.emplace(2);
    s.insert(2); // duplicate elements are not added
    s.insert(4);
    s.insert(3);

    auto it = s.find(3); // returns iterator to the element

    auto it = s.find(5); // returns s.end() if element not found

    s.erase(2); // removes element 2

    int count = s.count(3); // returns 1 if element is present, else 0
     
    auto it = s.find(3);
    s.erase(it); // removes element at iterator it

    auto it1 = s.find(2);
    auto it2 = s.find(4);
    s.erase(it1, it2); // removes elements in the range [it1, it2)

    auto it = s.lower_bound(3); // returns iterator to the first element >= 3
    auto it = s.upper_bound(3); // returns iterator to the first element > 3
}

void explainMultiSet(){
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    ms.insert(3);

    cout << ms.count(2) << endl; // returns number of occurrences of 2

    ms.erase(2); // removes all occurrences of 2

    auto it = ms.find(1); // returns iterator to the first occurrence of 1

    ms.erase(it); // removes the element at iterator it

    auto it1 = ms.find(1);
    auto it2 = ms.find(3);
    ms.erase(it1, it2); // removes elements in the range [it1, it2)
}

void explainUnorderedSet(){
    // similar to set but implemented using hash tables
    // average case time complexity for insert, erase, find is O(1)
    // worst case time complexity is O(n)
}

void explainmap(){
    map <int, int> m;
    map<int, pair<int,int>> m1;
    map< pair<int,int>, int> m2;

    m[1] = 2;
    m.emplace(3,4);
    m.insert({5,6});
    m2[{2,3}]=10;

    for(auto it:m){        
        cout<<it.first<<" "<<it.second<<endl;
        }

        cout<<m[1];
        cout<<m[5]; // if key not present, inserts key with value 0

        auto it = m.find(3); // returns iterator to the element with key 3
        cout << it->second; 

        auto it = m.find(10); // returns m.end() if key not found
        auto it = m.lower_bound(3); // returns iterator to the first element with key >= 3
        auto it = m.upper_bound(3); // returns iterator to the first element with key
}

void explainMultiMap(){
    multimap<int, int> mm;
    mm.insert({1, 2});
    mm.insert({1, 3});
    mm.insert({2, 4});

    for(auto it:mm){
        cout<<it.first<<" "<<it.second<<endl;
    }

    cout<<mm.count(1)<<endl; // returns number of occurrences of key 1

    auto it = mm.find(1); // returns iterator to the first occurrence of key 1

    mm.erase(1); // removes all occurrences of key 1

    auto it1 = mm.find(2);
    auto it2 = mm.find(3);
    mm.erase(it1, it2); // removes elements in the range [it1, it2)
}

void explainUnorderedMap(){
    // similar to map but implemented using hash tables
    // average case time complexity for insert, erase, find is O(1)
    // worst case time complexity is O(n)
}

bool comp(pair<int,int> a, pair<int,int> b){
        if(a.first < b.first){
            return true;
        }
        if (a.first > b.first) return false;
    }

void explainExtra(){
    int a[] = {5, 2, 8, 1, 9};
    int n = 5;
    sort(a, a+n); // sorts array a of size n
    
    // print sorted array
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    vector<int> v = {5, 2, 8, 1, 9};
    sort(v.begin(), v.end()); // sorts vector v

    sort(a+2 , a+5); // sorts array a from index 2 to 4
    sort(a,a+n, greater<int>()); // sorts array a in descending order

    pair<int,int> a[] = {{1, 3}, {2, 2}, {1, 2}};

    sort(a, a+n); // sorts array of pairs based on first element, then second element

    int num=7;
    int cnt = __builtin_popcount(num); // returns number of set bits in num

    long long num1 = 9876543210;
    int cnt= __builtin_popcountll(num1); // returns number of set bits in num1

    string str = "bdcae";

    do{
        cout << str << endl;
    }while(next_permutation(str.begin(), str.end())); // generates all permutations in lexicographical order

    int maximum = *max_element(a, a+n); // returns maximum element in array a of size n

}