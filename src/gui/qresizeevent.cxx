//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

// QResizeEvent is pure virtual: false
//  header block end

//  main block begin

class MyQResizeEvent : public QResizeEvent {
public:
MyQResizeEvent(const QSize & size, const QSize & oldSize) : QResizeEvent(size, oldSize) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:463
// [-2] void QResizeEvent(const class QSize &, const class QSize &)
extern "C"
void* C_ZN12QResizeEventC1ERK5QSizeS2_(const QSize & size, const QSize & oldSize) {
  (MyQResizeEvent*)(0);
  return  new MyQResizeEvent(size, oldSize);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:464
// [-2] void ~QResizeEvent()
extern "C"
void C_ZN12QResizeEventD1Ev(void *this_) {
  delete (QResizeEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:466
// [8] const QSize & size()
extern "C"
void* C_ZNK12QResizeEvent4sizeEv(void *this_) {
  auto& rv = ((QResizeEvent*)this_)->size();
return new QSize(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:467
// [8] const QSize & oldSize()
extern "C"
void* C_ZNK12QResizeEvent7oldSizeEv(void *this_) {
  auto& rv = ((QResizeEvent*)this_)->oldSize();
return new QSize(rv);
}
//  main block end
