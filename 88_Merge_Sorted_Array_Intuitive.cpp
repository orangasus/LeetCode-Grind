void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    for (int i = 0; i < n; i++) {
        nums1[i + m] = nums2[i];
    }
    int temp;
    for (int i = 0; i < m + n; i++) {
        for (int j = 0; j < i; j++) {
            if (nums1[i] < nums1[j]) {
                temp = nums1[i];
                nums1[i] = nums1[j];
                nums1[j] = temp;
            }
        }
    }
}