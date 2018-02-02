//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#include <qstyleoption.h>
#include <QtWidgets>

// QStyleOptionRubberBand is pure virtual: false
// QStyleOptionRubberBand has virtual projected: false
//  header block end

//  main block begin
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:495
// [-2] void QStyleOptionRubberBand(int)
extern "C"
void* callback_ZN22QStyleOptionRubberBandC1Ei_fnptr = 0;
extern "C" void set_callback_ZN22QStyleOptionRubberBandC1Ei(void*cbfn)
{ callback_ZN22QStyleOptionRubberBandC1Ei_fnptr = cbfn; }

class MyQStyleOptionRubberBand : public QStyleOptionRubberBand {
public:
  virtual ~MyQStyleOptionRubberBand() {}
// void QStyleOptionRubberBand()
MyQStyleOptionRubberBand() : QStyleOptionRubberBand() {}
// void QStyleOptionRubberBand(int)
MyQStyleOptionRubberBand(int version) : QStyleOptionRubberBand(version) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:491
// [-2] void QStyleOptionRubberBand()
extern "C"
void* C_ZN22QStyleOptionRubberBandC2Ev() {
  return  new QStyleOptionRubberBand();
}

extern "C"
void C_ZN22QStyleOptionRubberBandD2Ev(void *this_) {
  delete (QStyleOptionRubberBand*)(this_);
}
//  main block end
