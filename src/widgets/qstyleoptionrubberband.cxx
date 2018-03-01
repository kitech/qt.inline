//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionRubberBand is pure virtual: false
// QStyleOptionRubberBand has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQStyleOptionRubberBand : public QStyleOptionRubberBand {
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
extern "C" Q_DECL_EXPORT
void* C_ZN22QStyleOptionRubberBandC2Ev() {
  return  new QStyleOptionRubberBand();
}

extern "C" Q_DECL_EXPORT
void C_ZN22QStyleOptionRubberBandD2Ev(void *this_) {
  delete (QStyleOptionRubberBand*)(this_);
}
//  main block end
