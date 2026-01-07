struct ListNode* middleNode(struct ListNode* head) {
    int len = 0;
    struct ListNode* current = head;

    while (current) {
        current = current->next;
        len++;
    }
    len = len / 2;
    current = head;
    while (len--)
        current = current->next;
    return (current);
}
