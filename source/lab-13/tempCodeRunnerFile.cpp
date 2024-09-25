
    found = true;
    while(!found){
        tree.GetNextItem(n, IN_ORDER, found);
        cout << n << ", " ;
    }
    cout << endl;