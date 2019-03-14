
/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/


// The major concern is pointer overflow ,  
class Solution {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        if (pListHead == nullptr || k == 0 ){
            return nullptr;
        }
        ListNode * pA = pListHead;
        ListNode * pB = nullptr;
        
        for (unsigned int i = 0 ; i < k - 1; i ++ )
        {
            // k > pList . size()
            if (pA->next != nullptr ) pA = pA->next;
           else return nullptr; 
            
        }
        pB = pListHead;
        while ( pA->next != nullptr ) {
            pA = pA->next;
            pB = pB->next;
        }
        return pB;
    }
};
