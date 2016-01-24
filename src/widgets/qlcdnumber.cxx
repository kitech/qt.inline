// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtWidgets/qlcdnumber.h
// dst-file: /src/widgets/qlcdnumber.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qlcdnumber.h>


#include <qsize.h>
// <= header block end

// main block begin =>
void __keep_qlcdnumber_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QLCDNumber_Class_Size()
{
  return sizeof(QLCDNumber);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qlcdnumber.h', line 89, column 10>
//   // proto:  void QLCDNumber::display(int num);
// _ZN10QLCDNumber7displayEi display(int)
extern "C"
void
C_ZN10QLCDNumber7displayEi(void *qthis,
int arg1) {
  ((QLCDNumber*)qthis)->display(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlcdnumber.h', line 91, column 10>
//   // proto:  void QLCDNumber::setHexMode();
// _ZN10QLCDNumber10setHexModeEv setHexMode()
extern "C"
void
C_ZN10QLCDNumber10setHexModeEv(void *qthis) {
  ((QLCDNumber*)qthis)->setHexMode();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlcdnumber.h', line 90, column 10>
//   // proto:  void QLCDNumber::display(double num);
// _ZN10QLCDNumber7displayEd display(double)
extern "C"
void
C_ZN10QLCDNumber7displayEd(void *qthis,
double arg1) {
  ((QLCDNumber*)qthis)->display(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlcdnumber.h', line 47, column 5>
//   // proto:  const QMetaObject * QLCDNumber::metaObject();
// _ZNK10QLCDNumber10metaObjectEv metaObject()
extern "C"
void*
C_ZNK10QLCDNumber10metaObjectEv(void *qthis) {
  auto ret =
  ((QLCDNumber*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlcdnumber.h', line 80, column 10>
//   // proto:  void QLCDNumber::setSegmentStyle(QLCDNumber::SegmentStyle );
// _ZN10QLCDNumber15setSegmentStyleENS_12SegmentStyleE setSegmentStyle(enum QLCDNumber::SegmentStyle)
extern "C"
void
C_ZN10QLCDNumber15setSegmentStyleENS_12SegmentStyleE(void *qthis,
QLCDNumber::SegmentStyle arg1) {
  ((QLCDNumber*)qthis)->setSegmentStyle(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlcdnumber.h', line 77, column 10>
//   // proto:  void QLCDNumber::setMode(QLCDNumber::Mode );
// _ZN10QLCDNumber7setModeENS_4ModeE setMode(enum QLCDNumber::Mode)
extern "C"
void
C_ZN10QLCDNumber7setModeENS_4ModeE(void *qthis,
QLCDNumber::Mode arg1) {
  ((QLCDNumber*)qthis)->setMode(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlcdnumber.h', line 79, column 18>
//   // proto:  QLCDNumber::SegmentStyle QLCDNumber::segmentStyle();
// _ZNK10QLCDNumber12segmentStyleEv segmentStyle()
extern "C"
QLCDNumber::SegmentStyle
C_ZNK10QLCDNumber12segmentStyleEv(void *qthis) {
  auto ret =
  ((QLCDNumber*)qthis)->segmentStyle();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlcdnumber.h', line 70, column 9>
//   // proto:  int QLCDNumber::digitCount();
// _ZNK10QLCDNumber10digitCountEv digitCount()
extern "C"
int
C_ZNK10QLCDNumber10digitCountEv(void *qthis) {
  auto ret =
  ((QLCDNumber*)qthis)->digitCount();
  return ret; // 0 TypeKind.INT
}
//   // proto:  void QLCDNumber::~QLCDNumber();
extern "C"
void C_ZN10QLCDNumberD2Ev(void *qthis) {
  delete (QLCDNumber*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlcdnumber.h', line 74, column 10>
//   // proto:  bool QLCDNumber::checkOverflow(int num);
// _ZNK10QLCDNumber13checkOverflowEi checkOverflow(int)
extern "C"
bool
C_ZNK10QLCDNumber13checkOverflowEi(void *qthis,
int arg1) {
  auto ret =
  ((QLCDNumber*)qthis)->checkOverflow(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlcdnumber.h', line 92, column 10>
//   // proto:  void QLCDNumber::setDecMode();
// _ZN10QLCDNumber10setDecModeEv setDecMode()
extern "C"
void
C_ZN10QLCDNumber10setDecModeEv(void *qthis) {
  ((QLCDNumber*)qthis)->setDecMode();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlcdnumber.h', line 57, column 14>
//   // proto:  void QLCDNumber::QLCDNumber(uint numDigits, QWidget * parent);
extern "C"
QLCDNumber*
C_ZN10QLCDNumberC2EjP7QWidget(uint arg1,
QWidget * arg2) {
  auto ret = new QLCDNumber(arg1,
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlcdnumber.h', line 73, column 10>
//   // proto:  bool QLCDNumber::checkOverflow(double num);
// _ZNK10QLCDNumber13checkOverflowEd checkOverflow(double)
extern "C"
bool
C_ZNK10QLCDNumber13checkOverflowEd(void *qthis,
double arg1) {
  auto ret =
  ((QLCDNumber*)qthis)->checkOverflow(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlcdnumber.h', line 85, column 11>
//   // proto:  QSize QLCDNumber::sizeHint();
// _ZNK10QLCDNumber8sizeHintEv sizeHint()
extern "C"
QSize*
C_ZNK10QLCDNumber8sizeHintEv(void *qthis) {
  auto ret =
  ((QLCDNumber*)qthis)->sizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlcdnumber.h', line 88, column 10>
//   // proto:  void QLCDNumber::display(const QString & str);
// _ZN10QLCDNumber7displayERK7QString display(const class QString &)
extern "C"
void
C_ZN10QLCDNumber7displayERK7QString(void *qthis,
const QString* arg1) {
  ((QLCDNumber*)qthis)->display(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlcdnumber.h', line 56, column 14>
//   // proto:  void QLCDNumber::QLCDNumber(QWidget * parent);
extern "C"
QLCDNumber*
C_ZN10QLCDNumberC2EP7QWidget(QWidget * arg1) {
  auto ret = new QLCDNumber(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlcdnumber.h', line 82, column 12>
//   // proto:  double QLCDNumber::value();
// _ZNK10QLCDNumber5valueEv value()
extern "C"
double
C_ZNK10QLCDNumber5valueEv(void *qthis) {
  auto ret =
  ((QLCDNumber*)qthis)->value();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlcdnumber.h', line 94, column 10>
//   // proto:  void QLCDNumber::setBinMode();
// _ZN10QLCDNumber10setBinModeEv setBinMode()
extern "C"
void
C_ZN10QLCDNumber10setBinModeEv(void *qthis) {
  ((QLCDNumber*)qthis)->setBinMode();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlcdnumber.h', line 83, column 9>
//   // proto:  int QLCDNumber::intValue();
// _ZNK10QLCDNumber8intValueEv intValue()
extern "C"
int
C_ZNK10QLCDNumber8intValueEv(void *qthis) {
  auto ret =
  ((QLCDNumber*)qthis)->intValue();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlcdnumber.h', line 71, column 10>
//   // proto:  void QLCDNumber::setDigitCount(int nDigits);
// _ZN10QLCDNumber13setDigitCountEi setDigitCount(int)
extern "C"
void
C_ZN10QLCDNumber13setDigitCountEi(void *qthis,
int arg1) {
  ((QLCDNumber*)qthis)->setDigitCount(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlcdnumber.h', line 95, column 10>
//   // proto:  void QLCDNumber::setSmallDecimalPoint(bool );
// _ZN10QLCDNumber20setSmallDecimalPointEb setSmallDecimalPoint(_Bool)
extern "C"
void
C_ZN10QLCDNumber20setSmallDecimalPointEb(void *qthis,
bool arg1) {
  ((QLCDNumber*)qthis)->setSmallDecimalPoint(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlcdnumber.h', line 69, column 10>
//   // proto:  bool QLCDNumber::smallDecimalPoint();
// _ZNK10QLCDNumber17smallDecimalPointEv smallDecimalPoint()
extern "C"
bool
C_ZNK10QLCDNumber17smallDecimalPointEv(void *qthis) {
  auto ret =
  ((QLCDNumber*)qthis)->smallDecimalPoint();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlcdnumber.h', line 93, column 10>
//   // proto:  void QLCDNumber::setOctMode();
// _ZN10QLCDNumber10setOctModeEv setOctMode()
extern "C"
void
C_ZN10QLCDNumber10setOctModeEv(void *qthis) {
  ((QLCDNumber*)qthis)->setOctMode();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlcdnumber.h', line 76, column 10>
//   // proto:  QLCDNumber::Mode QLCDNumber::mode();
// _ZNK10QLCDNumber4modeEv mode()
extern "C"
QLCDNumber::Mode
C_ZNK10QLCDNumber4modeEv(void *qthis) {
  auto ret =
  ((QLCDNumber*)qthis)->mode();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qlcdnumber.h', line 98, column 10>
//   // proto:  void QLCDNumber::overflow();
// _ZN10QLCDNumber8overflowEv overflow()
extern "C"
void
C_ZN10QLCDNumber8overflowEv(void *qthis) {
  ((QLCDNumber*)qthis)->overflow();
}
// <= ext block end

// body block begin =>
// QLCDNumber_SlotProxy here
class QLCDNumber_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QLCDNumber_SlotProxy():QObject(){}

public slots:
  // overflow()
  void slot_proxy_func__ZN10QLCDNumber8overflowEv();
public:
  void (*slot_func__ZN10QLCDNumber8overflowEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qlcdnumber.moc"

extern "C" {
  QLCDNumber_SlotProxy* QLCDNumber_SlotProxy_new()
  {
    return new QLCDNumber_SlotProxy();
  }
};

void QLCDNumber_SlotProxy::slot_proxy_func__ZN10QLCDNumber8overflowEv() {
  if (this->slot_func__ZN10QLCDNumber8overflowEv != NULL) {
    // do smth...
    this->slot_func__ZN10QLCDNumber8overflowEv(this->rsfptr);
  }
}
extern "C"
void* QLCDNumber_SlotProxy_connect__ZN10QLCDNumber8overflowEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QLCDNumber_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QLCDNumber8overflowEv = (decltype(that->slot_func__ZN10QLCDNumber8overflowEv))ffifptr;
  QObject::connect((QLCDNumber*)sender, SIGNAL(overflow()), that, SLOT(slot_proxy_func__ZN10QLCDNumber8overflowEv()));
  return that;
}
extern "C"
void QLCDNumber_SlotProxy_disconnect__ZN10QLCDNumber8overflowEv(QLCDNumber_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

