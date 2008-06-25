float median(float x, float y, float z) {
	float median;

	if (x <= y)
		if (y <= z) median = y;
		else if (x <= z) median = z;
		else median = x;
	if (z <= y) median = y;
	if (x <= z) median = x;
	return median;
}

