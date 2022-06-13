    int count = 0;
    int n = s.size();
    // Iterate the loop until null character encounter
    for (int i = 0; i < n; i++)
    {
        if (*s == 'a' || *s == 'e' || *s == 'i'
            || *s == 'o' || *s == 'u') {
  
            count++;
        }
    }

    }
  
    return count;