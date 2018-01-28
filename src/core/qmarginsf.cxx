//  header block begin
// /usr/include/qt/QtCore/qmargins.h
#include <qmargins.h>
#include <QtCore>

// QMarginsF is pure virtual: false
//  header block end

//  main block begin

class MyQMarginsF : public QMarginsF {
public:
MyQMarginsF() : QMarginsF() {}
MyQMarginsF(qreal left, qreal top, qreal right, qreal bottom) : QMarginsF(left, top, right, bottom) {}
MyQMarginsF(const QMargins & margins) : QMarginsF(margins) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:288
// [-2] void QMarginsF()
extern "C"
void* C_ZN9QMarginsFC1Ev() {
  (MyQMarginsF*)(0);
  return  new MyQMarginsF();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:289
// [-2] void QMarginsF(qreal, qreal, qreal, qreal)
extern "C"
void* C_ZN9QMarginsFC1Edddd(qreal left, qreal top, qreal right, qreal bottom) {
  (MyQMarginsF*)(0);
  return  new MyQMarginsF(left, top, right, bottom);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:290
// [-2] void QMarginsF(const class QMargins &)
extern "C"
void* C_ZN9QMarginsFC1ERK8QMargins(const QMargins & margins) {
  (MyQMarginsF*)(0);
  return  new MyQMarginsF(margins);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:292
// [1] bool isNull()
extern "C"
bool C_ZNK9QMarginsF6isNullEv(void *this_) {
  return (bool)((QMarginsF*)this_)->isNull();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:294
// [8] qreal left()
extern "C"
qreal C_ZNK9QMarginsF4leftEv(void *this_) {
  return (qreal)((QMarginsF*)this_)->left();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:295
// [8] qreal top()
extern "C"
qreal C_ZNK9QMarginsF3topEv(void *this_) {
  return (qreal)((QMarginsF*)this_)->top();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:296
// [8] qreal right()
extern "C"
qreal C_ZNK9QMarginsF5rightEv(void *this_) {
  return (qreal)((QMarginsF*)this_)->right();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:297
// [8] qreal bottom()
extern "C"
qreal C_ZNK9QMarginsF6bottomEv(void *this_) {
  return (qreal)((QMarginsF*)this_)->bottom();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:299
// [-2] void setLeft(qreal)
extern "C"
void C_ZN9QMarginsF7setLeftEd(void *this_, qreal left) {
  ((QMarginsF*)this_)->setLeft(left);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:300
// [-2] void setTop(qreal)
extern "C"
void C_ZN9QMarginsF6setTopEd(void *this_, qreal top) {
  ((QMarginsF*)this_)->setTop(top);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:301
// [-2] void setRight(qreal)
extern "C"
void C_ZN9QMarginsF8setRightEd(void *this_, qreal right) {
  ((QMarginsF*)this_)->setRight(right);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:302
// [-2] void setBottom(qreal)
extern "C"
void C_ZN9QMarginsF9setBottomEd(void *this_, qreal bottom) {
  ((QMarginsF*)this_)->setBottom(bottom);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:311
// [16] QMargins toMargins()
extern "C"
void* C_ZNK9QMarginsF9toMarginsEv(void *this_) {
  auto rv = ((QMarginsF*)this_)->toMargins();
return new QMargins(rv);
}
//  main block end
