int day_of_year(int month, int day, int year) {
	int i, leap = 0, days = 0;

	if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		leap = 1;

	for(i = 0; i < month; i++) {
		switch(i) {
			case 0:
				days += 31;
				break;
			case 1:
				days += 28;
				if(leap)
					++days;
				break;
			case 2:
				days += 31;
				break;
			case 3:
				days += 30;
				break;
			case 4:
				days += 31;
				break;
			case 5:
				days += 30;
				break;
			case 6:
				days += 31;
				break;
			case 7:
				days += 31;
				break;
			case 8:
				days += 30;
				break;
			case 9:
				days += 31;
				break;
			case 10:
				days += 30;
				break;
			case 11:
				days += 31;
				break;
		}
	}

	days += day;

	return days;
}

