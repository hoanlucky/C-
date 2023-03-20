#include "Lab5.h"
 
// Date member function
LuuNhietDo::LuuNhietDo(int nd)
{
    nhietdo = nd;
}
bool LuuNhietDo::ruousoi() {
	return nhietdo >= 172;
}
bool LuuNhietDo::ruoudongbang() {
	return nhietdo <= -173;
}
bool LuuNhietDo::oxysoi() {
	return nhietdo >= -306;
}
bool LuuNhietDo::oxydongbang() {
	return nhietdo <= -362;
}
bool LuuNhietDo::nuocsoi() {
	return nhietdo >= 212;
}
bool LuuNhietDo::nuocdongbang() {
	return nhietdo <= 32;
}