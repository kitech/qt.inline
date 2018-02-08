//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionFrame is pure virtual: false
// QStyleOptionFrame has virtual projected: false
//  header block end

//  main block begin

class MyQStyleOptionFrame : public QStyleOptionFrame {
public:
  virtual ~MyQStyleOptionFrame() {}
// void QStyleOptionFrame()
MyQStyleOptionFrame() : QStyleOptionFrame() {}
// void QStyleOptionFrame(int)
MyQStyleOptionFrame(int version) : QStyleOptionFrame(version) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:143
// [-2] void QStyleOptionFrame()
extern "C"
void* C_ZN17QStyleOptionFrameC2Ev() {
  return  new QStyleOptionFrame();
}

extern "C"
void C_ZN17QStyleOptionFrameD2Ev(void *this_) {
  delete (QStyleOptionFrame*)(this_);
}
//  main block end