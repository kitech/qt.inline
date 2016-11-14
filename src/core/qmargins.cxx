// /usr/include/qt/QtCore/qmargins.h
#include <qmargins.h>
#include <QtCore>

// inline
// /usr/include/qt/QtCore/qmargins.h:288
// void QMarginsF()
extern "C"
void* C_ZN9QMarginsFC1Ev() {
  return new QMarginsF();
}
// inline
// /usr/include/qt/QtCore/qmargins.h:289
// void QMarginsF(qreal, qreal, qreal, qreal)
extern "C"
void* C_ZN9QMarginsFC1Edddd(qreal left, qreal top, qreal right, qreal bottom) {
  return new QMarginsF(left, top, right, bottom);
}
// inline
// /usr/include/qt/QtCore/qmargins.h:290
// void QMarginsF(const class QMargins &)
extern "C"
void* C_ZN9QMarginsFC1ERK8QMargins(const QMargins & margins) {
  return new QMarginsF(margins);
}
// inline
// /usr/include/qt/QtCore/qmargins.h:292
// bool isNull()
extern "C"
void C_ZNK9QMarginsF6isNullEv(void *this_) {
  /*return*/ ((QMarginsF*)this_)->isNull();
}
// inline
// /usr/include/qt/QtCore/qmargins.h:294
// qreal left()
extern "C"
void C_ZNK9QMarginsF4leftEv(void *this_) {
  /*return*/ ((QMarginsF*)this_)->left();
}
// inline
// /usr/include/qt/QtCore/qmargins.h:295
// qreal top()
extern "C"
void C_ZNK9QMarginsF3topEv(void *this_) {
  /*return*/ ((QMarginsF*)this_)->top();
}
// inline
// /usr/include/qt/QtCore/qmargins.h:296
// qreal right()
extern "C"
void C_ZNK9QMarginsF5rightEv(void *this_) {
  /*return*/ ((QMarginsF*)this_)->right();
}
// inline
// /usr/include/qt/QtCore/qmargins.h:297
// qreal bottom()
extern "C"
void C_ZNK9QMarginsF6bottomEv(void *this_) {
  /*return*/ ((QMarginsF*)this_)->bottom();
}
// /usr/include/qt/QtCore/qmargins.h:299
// void setLeft(qreal)
extern "C"
void C_ZN9QMarginsF7setLeftEd(void *this_, qreal left) {
  ((QMarginsF*)this_)->setLeft(left);
}
// /usr/include/qt/QtCore/qmargins.h:300
// void setTop(qreal)
extern "C"
void C_ZN9QMarginsF6setTopEd(void *this_, qreal top) {
  ((QMarginsF*)this_)->setTop(top);
}
// /usr/include/qt/QtCore/qmargins.h:301
// void setRight(qreal)
extern "C"
void C_ZN9QMarginsF8setRightEd(void *this_, qreal right) {
  ((QMarginsF*)this_)->setRight(right);
}
// /usr/include/qt/QtCore/qmargins.h:302
// void setBottom(qreal)
extern "C"
void C_ZN9QMarginsF9setBottomEd(void *this_, qreal bottom) {
  ((QMarginsF*)this_)->setBottom(bottom);
}
// inline
// /usr/include/qt/QtCore/qmargins.h:311
// QMargins toMargins()
extern "C"
void C_ZNK9QMarginsF9toMarginsEv(void *this_) {
  /*return*/ ((QMarginsF*)this_)->toMargins();
}