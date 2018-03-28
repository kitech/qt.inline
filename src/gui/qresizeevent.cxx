//  header block begin
// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QResizeEvent is pure virtual: false
// QResizeEvent has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQResizeEvent : public QResizeEvent {
public:
  virtual ~MyQResizeEvent() {}
// void QResizeEvent(const QSize &, const QSize &)
MyQResizeEvent(const QSize & size, const QSize & oldSize) : QResizeEvent(size, oldSize) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:463
// [-2] void QResizeEvent(const QSize &, const QSize &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QResizeEventC2ERK5QSizeS2_(QSize* size, QSize* oldSize) {
  return  new QResizeEvent(*size, *oldSize);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:464
// [-2] void ~QResizeEvent()
extern "C" Q_DECL_EXPORT
void C_ZN12QResizeEventD2Ev(void *this_) {
  delete (QResizeEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:466
// [8] const QSize & size()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QResizeEvent4sizeEv(void *this_) {
  auto& rv = ((QResizeEvent*)this_)->size();
return new QSize(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:467
// [8] const QSize & oldSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QResizeEvent7oldSizeEv(void *this_) {
  auto& rv = ((QResizeEvent*)this_)->oldSize();
return new QSize(rv);
}

//  main block end
