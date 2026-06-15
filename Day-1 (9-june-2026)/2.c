long long* findSuperstarDishes(long long *a, int n, int *returnSize) {
    long long el1 = LLONG_MIN, el2 = LLONG_MIN;
    int cnt1 = 0, cnt2 = 0;


    for (int i = 0; i < n; i++) {
        if (a[i] == el1) cnt1++;
        else if (a[i] == el2) cnt2++;
        else if (cnt1 == 0) {
            el1 = a[i];
            cnt1 = 1;
        }
        else if (cnt2 == 0) {
            el2 = a[i];
            cnt2 = 1;
        }
        else {
            cnt1--;
            cnt2--;
        }
    }


    cnt1 = 0;
    cnt2 = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] == el1) cnt1++;
        else if (a[i] == el2) cnt2++;
    }


    long long *ans = (long long*)malloc(2 * sizeof(long long));
    *returnSize = 0;

    if (cnt1 > n / 3) {
        ans[(*returnSize)++] = el1;
    }
    if (cnt2 > n / 3) {
        ans[(*returnSize)++] = el2;
    }

    // Sort (at most 2 elements)
    if (*returnSize == 2 && ans[0] > ans[1]) {
        long long temp = ans[0];
        ans[0] = ans[1];
        ans[1] = temp;
    }

    return ans;
}