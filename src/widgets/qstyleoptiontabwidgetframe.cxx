//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionTabWidgetFrame is pure virtual: false
// QStyleOptionTabWidgetFrame has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQStyleOptionTabWidgetFrame : public QStyleOptionTabWidgetFrame {
public:
  virtual ~MyQStyleOptionTabWidgetFrame() {}
// void QStyleOptionTabWidgetFrame()
MyQStyleOptionTabWidgetFrame() : QStyleOptionTabWidgetFrame() {}
// void QStyleOptionTabWidgetFrame(int)
MyQStyleOptionTabWidgetFrame(int version) : QStyleOptionTabWidgetFrame(version) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:171
// [-2] void QStyleOptionTabWidgetFrame()
extern "C" Q_DECL_EXPORT
void* C_ZN26QStyleOptionTabWidgetFrameC2Ev() {
  return  new QStyleOptionTabWidgetFrame();
}


extern "C" Q_DECL_EXPORT
void C_ZN26QStyleOptionTabWidgetFrameD2Ev(void *this_) {
  delete (QStyleOptionTabWidgetFrame*)(this_);
}
//  main block end
