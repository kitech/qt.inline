//  header block begin
// /usr/include/qt/QtWidgets/qlcdnumber.h
#include <qlcdnumber.h>
#include <QtWidgets>

// QLCDNumber is pure virtual: false
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:107
// [1] bool event(class QEvent *)
extern "C"
void* callback_ZN10QLCDNumber5eventEP6QEvent = 0;
extern "C" void set_callback_ZN10QLCDNumber5eventEP6QEvent(void*cbfn)
{ callback_ZN10QLCDNumber5eventEP6QEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:108
// [-2] void paintEvent(class QPaintEvent *)
extern "C"
void* callback_ZN10QLCDNumber10paintEventEP11QPaintEvent = 0;
extern "C" void set_callback_ZN10QLCDNumber10paintEventEP11QPaintEvent(void*cbfn)
{ callback_ZN10QLCDNumber10paintEventEP11QPaintEvent = cbfn; }

class MyQLCDNumber : public QLCDNumber {
public:
MyQLCDNumber(QWidget * parent) : QLCDNumber(parent) {}
MyQLCDNumber(uint numDigits, QWidget * parent) : QLCDNumber(numDigits, parent) {}
// bool event(class QEvent *)
// bool event(class QEvent *)
virtual bool event(QEvent * e) {
  if (callback_ZN10QLCDNumber5eventEP6QEvent != 0) {
  // callback_ZN10QLCDNumber5eventEP6QEvent(e);
}}
// void paintEvent(class QPaintEvent *)
// void paintEvent(class QPaintEvent *)
virtual void paintEvent(QPaintEvent * arg0) {
  if (callback_ZN10QLCDNumber10paintEventEP11QPaintEvent != 0) {
  // callback_ZN10QLCDNumber10paintEventEP11QPaintEvent(arg0);
}}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:53
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK10QLCDNumber10metaObjectEv(void *this_) {
  return (void*)((QLCDNumber*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:62
// [-2] void QLCDNumber(class QWidget *)
extern "C"
void* C_ZN10QLCDNumberC1EP7QWidget(QWidget * parent) {
  (MyQLCDNumber*)(0);
  return  new MyQLCDNumber(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:63
// [-2] void QLCDNumber(uint, class QWidget *)
extern "C"
void* C_ZN10QLCDNumberC1EjP7QWidget(uint numDigits, QWidget * parent) {
  (MyQLCDNumber*)(0);
  return  new MyQLCDNumber(numDigits, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:64
// [-2] void ~QLCDNumber()
extern "C"
void C_ZN10QLCDNumberD1Ev(void *this_) {
  delete (QLCDNumber*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:75
// [1] bool smallDecimalPoint()
extern "C"
bool C_ZNK10QLCDNumber17smallDecimalPointEv(void *this_) {
  return (bool)((QLCDNumber*)this_)->smallDecimalPoint();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:76
// [4] int digitCount()
extern "C"
int C_ZNK10QLCDNumber10digitCountEv(void *this_) {
  return (int)((QLCDNumber*)this_)->digitCount();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:77
// [-2] void setDigitCount(int)
extern "C"
void C_ZN10QLCDNumber13setDigitCountEi(void *this_, int nDigits) {
  ((QLCDNumber*)this_)->setDigitCount(nDigits);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:79
// [1] bool checkOverflow(double)
extern "C"
bool C_ZNK10QLCDNumber13checkOverflowEd(void *this_, double num) {
  return (bool)((QLCDNumber*)this_)->checkOverflow(num);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:80
// [1] bool checkOverflow(int)
extern "C"
bool C_ZNK10QLCDNumber13checkOverflowEi(void *this_, int num) {
  return (bool)((QLCDNumber*)this_)->checkOverflow(num);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:82
// [4] QLCDNumber::Mode mode()
extern "C"
QLCDNumber::Mode C_ZNK10QLCDNumber4modeEv(void *this_) {
  return (QLCDNumber::Mode)((QLCDNumber*)this_)->mode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:83
// [-2] void setMode(enum QLCDNumber::Mode)
extern "C"
void C_ZN10QLCDNumber7setModeENS_4ModeE(void *this_, QLCDNumber::Mode arg0) {
  ((QLCDNumber*)this_)->setMode(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:85
// [4] QLCDNumber::SegmentStyle segmentStyle()
extern "C"
QLCDNumber::SegmentStyle C_ZNK10QLCDNumber12segmentStyleEv(void *this_) {
  return (QLCDNumber::SegmentStyle)((QLCDNumber*)this_)->segmentStyle();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:86
// [-2] void setSegmentStyle(enum QLCDNumber::SegmentStyle)
extern "C"
void C_ZN10QLCDNumber15setSegmentStyleENS_12SegmentStyleE(void *this_, QLCDNumber::SegmentStyle arg0) {
  ((QLCDNumber*)this_)->setSegmentStyle(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:88
// [8] double value()
extern "C"
double C_ZNK10QLCDNumber5valueEv(void *this_) {
  return (double)((QLCDNumber*)this_)->value();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:89
// [4] int intValue()
extern "C"
int C_ZNK10QLCDNumber8intValueEv(void *this_) {
  return (int)((QLCDNumber*)this_)->intValue();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:91
// [8] QSize sizeHint()
extern "C"
void* C_ZNK10QLCDNumber8sizeHintEv(void *this_) {
  auto rv = ((QLCDNumber*)this_)->sizeHint();
return new QSize(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:94
// [-2] void display(const class QString &)
extern "C"
void C_ZN10QLCDNumber7displayERK7QString(void *this_, const QString & str) {
  ((QLCDNumber*)this_)->display(str);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:95
// [-2] void display(int)
extern "C"
void C_ZN10QLCDNumber7displayEi(void *this_, int num) {
  ((QLCDNumber*)this_)->display(num);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:96
// [-2] void display(double)
extern "C"
void C_ZN10QLCDNumber7displayEd(void *this_, double num) {
  ((QLCDNumber*)this_)->display(num);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:97
// [-2] void setHexMode()
extern "C"
void C_ZN10QLCDNumber10setHexModeEv(void *this_) {
  ((QLCDNumber*)this_)->setHexMode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:98
// [-2] void setDecMode()
extern "C"
void C_ZN10QLCDNumber10setDecModeEv(void *this_) {
  ((QLCDNumber*)this_)->setDecMode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:99
// [-2] void setOctMode()
extern "C"
void C_ZN10QLCDNumber10setOctModeEv(void *this_) {
  ((QLCDNumber*)this_)->setOctMode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:100
// [-2] void setBinMode()
extern "C"
void C_ZN10QLCDNumber10setBinModeEv(void *this_) {
  ((QLCDNumber*)this_)->setBinMode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:101
// [-2] void setSmallDecimalPoint(_Bool)
extern "C"
void C_ZN10QLCDNumber20setSmallDecimalPointEb(void *this_, bool arg0) {
  ((QLCDNumber*)this_)->setSmallDecimalPoint(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:104
// [-2] void overflow()
extern "C"
void C_ZN10QLCDNumber8overflowEv(void *this_) {
  ((QLCDNumber*)this_)->overflow();
}
//  main block end
