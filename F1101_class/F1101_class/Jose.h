#pragma once
#ifndef HEADER_JOSE
#define HEADER_JOSE
#include<iostream>
class Jose {

	int n;
	int s;
	int m;
	int w;
public:
	Jose(int child_amount,int start_position,int interval = 1,int win = 1) {
		n = child_amount;
		s = start_position;
		m = interval;
		w = win;

		if ((n < 2 || s < 1 || s >= n || m < 1 || m >= n)) {
			std::cout << "ÊäÈëÓÐÎó\n";
			exit(1);
		}
	}
	void winner()const;


};

#endif // !HEADER_JOSE
