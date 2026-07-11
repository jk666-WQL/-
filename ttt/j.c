 int i = 0;
  int j = L->last;
  while (1) {
    if (L->elem[i] % 2 != 0) {
      i++;
      if (i == j) {
        break;
      }
    }
    if (L->elem[j] % 2 == 0) {
      j--;
      if (i == j) {
        break;
      }
    }
    if (L->elem[i] % 2 == 0 && L->elem[j] % 2 != 0) {
      int temp = L->elem[i];
      L->elem[i] = L->elem[j];
      L->elem[j] = temp;
    }
  }