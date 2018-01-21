//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qevent.h:453
// void QResizeEvent(const class QSize &, const class QSize &)
extern "C"
void* C_ZN12QResizeEventC1ERK5QSizeS2_(const QSize & size, const QSize & oldSize) {
  return new QResizeEvent(size, oldSize);
}
// virtual
// /usr/include/qt/QtGui/qevent.h:454
// void ~QResizeEvent()
extern "C"
void C_ZN12QResizeEventD1Ev(void *this_) {
  delete (QResizeEvent*)(this_);
}
// inline
// /usr/include/qt/QtGui/qevent.h:456
// const QSize & size()
extern "C"
void C_ZNK12QResizeEvent4sizeEv(void *this_) {
  /*return*/ ((QResizeEvent*)this_)->size();
}
// inline
// /usr/include/qt/QtGui/qevent.h:457
// const QSize & oldSize()
extern "C"
void C_ZNK12QResizeEvent7oldSizeEv(void *this_) {
  /*return*/ ((QResizeEvent*)this_)->oldSize();
}
//  main block end
