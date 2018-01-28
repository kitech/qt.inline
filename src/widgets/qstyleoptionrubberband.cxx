//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#include <qstyleoption.h>
#include <QtWidgets>

// QStyleOptionRubberBand is pure virtual: false
//  header block end

//  main block begin
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:495
// [-2] void QStyleOptionRubberBand(int)
extern "C"
void* callback_ZN22QStyleOptionRubberBandC1Ei = 0;
extern "C" void set_callback_ZN22QStyleOptionRubberBandC1Ei(void*cbfn)
{ callback_ZN22QStyleOptionRubberBandC1Ei = cbfn; }

class MyQStyleOptionRubberBand : public QStyleOptionRubberBand {
public:
MyQStyleOptionRubberBand() : QStyleOptionRubberBand() {}
MyQStyleOptionRubberBand(int version) : QStyleOptionRubberBand(version) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:491
// [-2] void QStyleOptionRubberBand()
extern "C"
void* C_ZN22QStyleOptionRubberBandC1Ev() {
  (MyQStyleOptionRubberBand*)(0);
  return  new MyQStyleOptionRubberBand();
}
//  main block end
