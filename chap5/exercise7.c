/* Calculate a broker's commission */

#include <stdio.h>

main()
{
	int sharenumber;
	float shareprice, value, commission, rivalcommission = 33;

	printf("Enter the number of shares: ");
	scanf("%d", &sharenumber);

	printf("Enter price per share: ");
	scanf("%f", &shareprice);

	value = sharenumber * shareprice;

	if (value < 2500.00)
		commission = 30.00 + .017 * value;
	else if (value < 6250.00)
		commission = 56.00 + .0066 * value;
	else if (value < 20000.00)
		commission = 76.00 + .0034 * value;
	else if (value < 50000.00)
		commission = 100.00 + .0022 * value;
	else if (value < 500000.00)
		commission = 155.00 + .0011 * value;
	else
		commission = 255.00 + .0009 * value;

	if (commission < 39.00)
		commission = 39.00;

	if (sharenumber < 2000)
		rivalcommission += sharenumber * .03;
	else
		rivalcommission += sharenumber * .02;

	printf("Commission: $%.2f\n", commission);
	printf("Rival commission: $%.2f\n", rivalcommission);

	return 0;
}

