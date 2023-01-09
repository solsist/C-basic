#include"WDate.h"

ostream& operator<<(ostream& o, const WDate& d)
{
	switch (d.ymd2i() % 7) {
	case 0:return o << "Sun. " << Date(d);
	case 1:return o << "Mon. " << Date(d);
	case 2:return o << "Tue. " << Date(d);
	case 3:return o << "Wed. " << Date(d);
	case 4:return o << "Thr. " << Date(d);
	case 5:return o << "Fri. " << Date(d);
	case 6:return o << "Sat. " << Date(d);
	}
}