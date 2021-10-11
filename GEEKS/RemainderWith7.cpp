 // This series is used to find remainder with 7
    int series[] = {1, 3, 2, -1, -3, -2};
 
    // Index of next element in series
    int series_index = 0;
 
    int result = 0;  // Initialize result
 
    // Traverse num from end
    for (int i=num.size()-1; i>=0; i--)
    {
        /* Find current digit of nun */
        int digit = num[i] - '0';
 
        // Add next term to result
        result += digit * series[series_index];
 
        // Move to next term in series
        series_index = (series_index + 1) % 6;
 
        // Make sure that result never goes beyond 7.
        result %= 7;
    }
 
    // Make sure that remainder is positive
    if (result < 0)
      result = (result + 7) % 7;
 
    return result;
