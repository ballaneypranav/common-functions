// Checks whether a divides b or not
bool check_divisor(int a, int b)
{    
	float x = ((float) b) / ((float) a);
	
	int n = x * 1000.0;
    	
	if (n % 1000 == 0)
		return true;
	else 
		return false;
}
