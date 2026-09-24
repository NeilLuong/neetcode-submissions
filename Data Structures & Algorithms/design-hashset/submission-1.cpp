class MyHashSet {
private:
    vector<int> m_hs {};
public:
    MyHashSet() {
    }
    
    void add(int key) {
        if (m_hs.size() == 0) {
            m_hs.push_back(key);
        } else {
            for (auto k : m_hs) {
            if (k == key) {
                return;
                }
            }
            m_hs.push_back(key);
        }
        
    }
    
    void remove(int key) {
        if (m_hs.size() != 0) {
            for (vector<int>::iterator it = m_hs.begin(); it != m_hs.end(); ++it) {
            if (*it == key) {
                m_hs.erase(it);
                break;
            }
        }
        }
    }
    
    bool contains(int key) {
        for (auto k : m_hs) {
            if (k == key) {
                return true;
            }
        }

        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */