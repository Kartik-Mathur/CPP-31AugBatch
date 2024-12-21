#define node ListNode
class Solution {
public:
	node* reverseLL(node* head, int k) {
		node* p = NULL, *c = head, *n;

		for (int i = 0; i < k; ++i)
		{
			n = c->next;
			c->next = p;
			p = c;
			c = n;
		}

		return p;
	}

	node* reverseKGroup(node* head, int k) {

		node* temp = head;
		node* ogH = NULL, *pt = NULL;

		while (temp != NULL) {
			int i = 0;
			while (i < k and temp) {
				temp = temp->next;
				i++;
			}

			if (i == k) {
				node* nH = reverseLL(head, k);
				if (ogH == NULL) ogH = nH;
				if (pt) pt->next = nH;
				pt = head;

				head->next = temp;

				head = temp;
			}


		}

		return ogH;
	}
};









