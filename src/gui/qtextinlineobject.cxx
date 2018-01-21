//  header block begin
// /usr/include/qt/QtGui/qtextlayout.h
#include <qtextlayout.h>
#include <QtGui>

//  header block end

//  main block begin
// inline
// /usr/include/qt/QtGui/qtextlayout.h:70
// void QTextInlineObject(int, class QTextEngine *)
extern "C"
void* C_ZN17QTextInlineObjectC1EiP11QTextEngine(int i, QTextEngine * e) {
  return new QTextInlineObject(i, e);
}
// inline
// /usr/include/qt/QtGui/qtextlayout.h:71
// void QTextInlineObject()
extern "C"
void* C_ZN17QTextInlineObjectC1Ev() {
  return new QTextInlineObject();
}
// inline
// /usr/include/qt/QtGui/qtextlayout.h:72
// bool isValid()
extern "C"
void C_ZNK17QTextInlineObject7isValidEv(void *this_) {
  /*return*/ ((QTextInlineObject*)this_)->isValid();
}
// /usr/include/qt/QtGui/qtextlayout.h:74
// QRectF rect()
extern "C"
void C_ZNK17QTextInlineObject4rectEv(void *this_) {
  /*return*/ ((QTextInlineObject*)this_)->rect();
}
// /usr/include/qt/QtGui/qtextlayout.h:75
// qreal width()
extern "C"
void C_ZNK17QTextInlineObject5widthEv(void *this_) {
  /*return*/ ((QTextInlineObject*)this_)->width();
}
// /usr/include/qt/QtGui/qtextlayout.h:76
// qreal ascent()
extern "C"
void C_ZNK17QTextInlineObject6ascentEv(void *this_) {
  /*return*/ ((QTextInlineObject*)this_)->ascent();
}
// /usr/include/qt/QtGui/qtextlayout.h:77
// qreal descent()
extern "C"
void C_ZNK17QTextInlineObject7descentEv(void *this_) {
  /*return*/ ((QTextInlineObject*)this_)->descent();
}
// /usr/include/qt/QtGui/qtextlayout.h:78
// qreal height()
extern "C"
void C_ZNK17QTextInlineObject6heightEv(void *this_) {
  /*return*/ ((QTextInlineObject*)this_)->height();
}
// /usr/include/qt/QtGui/qtextlayout.h:80
// Qt::LayoutDirection textDirection()
extern "C"
void C_ZNK17QTextInlineObject13textDirectionEv(void *this_) {
  /*return*/ ((QTextInlineObject*)this_)->textDirection();
}
// /usr/include/qt/QtGui/qtextlayout.h:82
// void setWidth(qreal)
extern "C"
void C_ZN17QTextInlineObject8setWidthEd(void *this_, qreal w) {
  ((QTextInlineObject*)this_)->setWidth(w);
}
// /usr/include/qt/QtGui/qtextlayout.h:83
// void setAscent(qreal)
extern "C"
void C_ZN17QTextInlineObject9setAscentEd(void *this_, qreal a) {
  ((QTextInlineObject*)this_)->setAscent(a);
}
// /usr/include/qt/QtGui/qtextlayout.h:84
// void setDescent(qreal)
extern "C"
void C_ZN17QTextInlineObject10setDescentEd(void *this_, qreal d) {
  ((QTextInlineObject*)this_)->setDescent(d);
}
// /usr/include/qt/QtGui/qtextlayout.h:86
// int textPosition()
extern "C"
void C_ZNK17QTextInlineObject12textPositionEv(void *this_) {
  /*return*/ ((QTextInlineObject*)this_)->textPosition();
}
// /usr/include/qt/QtGui/qtextlayout.h:88
// int formatIndex()
extern "C"
void C_ZNK17QTextInlineObject11formatIndexEv(void *this_) {
  /*return*/ ((QTextInlineObject*)this_)->formatIndex();
}
// /usr/include/qt/QtGui/qtextlayout.h:89
// QTextFormat format()
extern "C"
void C_ZNK17QTextInlineObject6formatEv(void *this_) {
  /*return*/ ((QTextInlineObject*)this_)->format();
}
//  main block end
