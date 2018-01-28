//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#include <qstyleoption.h>
#include <QtWidgets>

// QStyleOptionHeader is pure virtual: false
//  header block end

//  main block begin
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:230
// [-2] void QStyleOptionHeader(int)
extern "C"
void* callback_ZN18QStyleOptionHeaderC1Ei = 0;
extern "C" void set_callback_ZN18QStyleOptionHeaderC1Ei(void*cbfn)
{ callback_ZN18QStyleOptionHeaderC1Ei = cbfn; }

class MyQStyleOptionHeader : public QStyleOptionHeader {
public:
MyQStyleOptionHeader() : QStyleOptionHeader() {}
MyQStyleOptionHeader(int version) : QStyleOptionHeader(version) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:226
// [-2] void QStyleOptionHeader()
extern "C"
void* C_ZN18QStyleOptionHeaderC1Ev() {
  (MyQStyleOptionHeader*)(0);
  return  new MyQStyleOptionHeader();
}
//  main block end
