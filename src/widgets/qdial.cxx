// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtWidgets/qdial.h
// dst-file: /src/widgets/qdial.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qdial.h>


#include <qsize.h>
#include <qglobal.h>
// <= header block end

// main block begin =>
void __keep_qdial_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QDial_Class_Size()
{
  return sizeof(QDial);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qdial.h', line 67, column 10>
//   // proto:  bool QDial::wrapping();
// _ZNK5QDial8wrappingEv wrapping()
extern "C"
bool
C_ZNK5QDial8wrappingEv(void *qthis) {
  auto ret =
  ((QDial*)qthis)->wrapping();
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QDial::~QDial();
extern "C"
void C_ZN5QDialD2Ev(void *qthis) {
  delete (QDial*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdial.h', line 56, column 5>
//   // proto:  const QMetaObject * QDial::metaObject();
// _ZNK5QDial10metaObjectEv metaObject()
extern "C"
void*
C_ZNK5QDial10metaObjectEv(void *qthis) {
  auto ret =
  ((QDial*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdial.h', line 73, column 10>
//   // proto:  bool QDial::notchesVisible();
// _ZNK5QDial14notchesVisibleEv notchesVisible()
extern "C"
bool
C_ZNK5QDial14notchesVisibleEv(void *qthis) {
  auto ret =
  ((QDial*)qthis)->notchesVisible();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdial.h', line 71, column 10>
//   // proto:  void QDial::setNotchTarget(double target);
// _ZN5QDial14setNotchTargetEd setNotchTarget(double)
extern "C"
void
C_ZN5QDial14setNotchTargetEd(void *qthis,
double arg1) {
  ((QDial*)qthis)->setNotchTarget(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdial.h', line 80, column 10>
//   // proto:  void QDial::setWrapping(bool on);
// _ZN5QDial11setWrappingEb setWrapping(_Bool)
extern "C"
void
C_ZN5QDial11setWrappingEb(void *qthis,
bool arg1) {
  ((QDial*)qthis)->setWrapping(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdial.h', line 69, column 9>
//   // proto:  int QDial::notchSize();
// _ZNK5QDial9notchSizeEv notchSize()
extern "C"
int
C_ZNK5QDial9notchSizeEv(void *qthis) {
  auto ret =
  ((QDial*)qthis)->notchSize();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdial.h', line 79, column 10>
//   // proto:  void QDial::setNotchesVisible(bool visible);
// _ZN5QDial17setNotchesVisibleEb setNotchesVisible(_Bool)
extern "C"
void
C_ZN5QDial17setNotchesVisibleEb(void *qthis,
bool arg1) {
  ((QDial*)qthis)->setNotchesVisible(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdial.h', line 76, column 11>
//   // proto:  QSize QDial::minimumSizeHint();
// _ZNK5QDial15minimumSizeHintEv minimumSizeHint()
extern "C"
QSize*
C_ZNK5QDial15minimumSizeHintEv(void *qthis) {
  auto ret =
  ((QDial*)qthis)->minimumSizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdial.h', line 72, column 11>
//   // proto:  qreal QDial::notchTarget();
// _ZNK5QDial11notchTargetEv notchTarget()
extern "C"
double
C_ZNK5QDial11notchTargetEv(void *qthis) {
  auto ret =
  ((QDial*)qthis)->notchTarget();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdial.h', line 75, column 11>
//   // proto:  QSize QDial::sizeHint();
// _ZNK5QDial8sizeHintEv sizeHint()
extern "C"
QSize*
C_ZNK5QDial8sizeHintEv(void *qthis) {
  auto ret =
  ((QDial*)qthis)->sizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdial.h', line 63, column 14>
//   // proto:  void QDial::QDial(QWidget * parent);
extern "C"
QDial*
C_ZN5QDialC2EP7QWidget(QWidget * arg1) {
  auto ret = new QDial(arg1);
  return ret;
}
// <= ext block end

// body block begin =>
// QDial_SlotProxy here
class QDial_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QDial_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qdial.moc"

extern "C" {
  QDial_SlotProxy* QDial_SlotProxy_new()
  {
    return new QDial_SlotProxy();
  }
};

// <= body block end

