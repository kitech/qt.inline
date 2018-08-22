//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
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
// void QStyleOptionRubberBand(const QStyleOptionRubberBand &)
MyQStyleOptionRubberBand(const QStyleOptionRubberBand & other) : QStyleOptionRubberBand(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:491
// [-2] void QStyleOptionRubberBand()
extern "C" Q_DECL_EXPORT
void* C_ZN22QStyleOptionRubberBandC2Ev() {
  return  new QStyleOptionRubberBand();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:492
// [-2] void QStyleOptionRubberBand(const QStyleOptionRubberBand &)
extern "C" Q_DECL_EXPORT
void* C_ZN22QStyleOptionRubberBandC2ERKS_(QStyleOptionRubberBand* other) {
  return  new QStyleOptionRubberBand(*other);
}


extern "C" Q_DECL_EXPORT
void C_ZN22QStyleOptionRubberBandD2Ev(void *this_) {
  delete (QStyleOptionRubberBand*)(this_);
}
//  main block end
