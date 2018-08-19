//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionFrame is pure virtual: false
// QStyleOptionFrame has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQStyleOptionFrame : public QStyleOptionFrame {
public:
  virtual ~MyQStyleOptionFrame() {}
// void QStyleOptionFrame()
MyQStyleOptionFrame() : QStyleOptionFrame() {}
// void QStyleOptionFrame(const QStyleOptionFrame &)
MyQStyleOptionFrame(const QStyleOptionFrame & other) : QStyleOptionFrame(other) {}
// void QStyleOptionFrame(int)
MyQStyleOptionFrame(int version) : QStyleOptionFrame(version) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:143
// [-2] void QStyleOptionFrame()
extern "C" Q_DECL_EXPORT
void* C_ZN17QStyleOptionFrameC2Ev() {
  return  new QStyleOptionFrame();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:144
// [-2] void QStyleOptionFrame(const QStyleOptionFrame &)
extern "C" Q_DECL_EXPORT
void* C_ZN17QStyleOptionFrameC2ERKS_(QStyleOptionFrame* other) {
  return  new QStyleOptionFrame(*other);
}


extern "C" Q_DECL_EXPORT
void C_ZN17QStyleOptionFrameD2Ev(void *this_) {
  delete (QStyleOptionFrame*)(this_);
}
//  main block end
