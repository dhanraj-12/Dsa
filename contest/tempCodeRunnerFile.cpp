int h, k;
    cin >> h >> k;
    int ans = INT_MIN;
    
    for (int i = k; i >= 1; i--) {
        int a = h * i;
        ans = max(ans, static_cast<int>(primeFactorCount[a]+1));
        
    }
    
    cout << ans << "\n";