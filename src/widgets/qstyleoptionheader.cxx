//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#include <qstyleoption.h>
#include <QtWidgets>

// QStyleOptionHeader is pure virtual: false
// QStyleOptionHeader has virtual projected: false
//  header block end

//  main block begin
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:230
// [-2] void QStyleOptionHeader(int)
extern "C"
void* callback_ZN18QStyleOptionHeaderC1Ei_fnptr = 0;
extern "C" void set_callback_ZN18QStyleOptionHeaderC1Ei(void*cbfn)
{ callback_ZN18QStyleOptionHeaderC1Ei_fnptr = cbfn; }

class MyQStyleOptionHeader : public QStyleOptionHeader {
public:
  virtual ~MyQStyleOptionHeader() {}
// void QStyleOptionHeader()
MyQStyleOptionHeader() : QStyleOptionHeader() {}
// void QStyleOptionHeader(int)
MyQStyleOptionHeader(int version) : QStyleOptionHeader(version) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:226
// [-2] void QStyleOptionHeader()
extern "C"
void* C_ZN18QStyleOptionHeaderC2Ev() {
  return  new QStyleOptionHeader();
}

extern "C"
void C_ZN18QStyleOptionHeaderD2Ev(void *this_) {
  delete (QStyleOptionHeader*)(this_);
}
//  main block end
