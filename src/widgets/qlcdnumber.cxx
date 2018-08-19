//  header block begin
// /usr/include/qt/QtWidgets/qlcdnumber.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qlcdnumber.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QLCDNumber is pure virtual: false
// QLCDNumber has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQLCDNumber : public QLCDNumber {
public:
  virtual ~MyQLCDNumber() {}
// void QLCDNumber(QWidget *)
MyQLCDNumber(QWidget * parent) : QLCDNumber(parent) {}
// void QLCDNumber(uint, QWidget *)
MyQLCDNumber(uint numDigits, QWidget * parent) : QLCDNumber(numDigits, parent) {}
// Protected virtual Visibility=Default Availability=Available
// bool event(QEvent *)
  virtual bool event(QEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QLCDNumber::event(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void paintEvent(QPaintEvent *)
  virtual void paintEvent(QPaintEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QLCDNumber::paintEvent(arg0);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:107
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN10QLCDNumber5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QLCDNumber*)this_)->QLCDNumber::event(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:108
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN10QLCDNumber10paintEventEP11QPaintEvent(void *this_, QPaintEvent * arg0) {
  ((QLCDNumber*)this_)->QLCDNumber::paintEvent(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:53
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QLCDNumber10metaObjectEv(void *this_) {
  return (void*)((QLCDNumber*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:53
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QLCDNumber11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QLCDNumber*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:53
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN10QLCDNumber11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QLCDNumber*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:53
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QLCDNumber2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QLCDNumber::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:53
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QLCDNumber6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QLCDNumber::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:62
// [-2] void QLCDNumber(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QLCDNumberC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQLCDNumber*)(0);
  return  new MyQLCDNumber(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:63
// [-2] void QLCDNumber(uint, QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QLCDNumberC2EjP7QWidget(uint numDigits, QWidget * parent) {
  auto _nilp = (MyQLCDNumber*)(0);
  return  new MyQLCDNumber(numDigits, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:64
// [-2] void ~QLCDNumber()
extern "C" Q_DECL_EXPORT
void C_ZN10QLCDNumberD2Ev(void *this_) {
  delete (QLCDNumber*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:75
// [1] bool smallDecimalPoint()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QLCDNumber17smallDecimalPointEv(void *this_) {
  return (bool)((QLCDNumber*)this_)->smallDecimalPoint();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:76
// [4] int digitCount()
extern "C" Q_DECL_EXPORT
int C_ZNK10QLCDNumber10digitCountEv(void *this_) {
  return (int)((QLCDNumber*)this_)->digitCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:77
// [-2] void setDigitCount(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QLCDNumber13setDigitCountEi(void *this_, int nDigits) {
  ((QLCDNumber*)this_)->setDigitCount(nDigits);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:79
// [1] bool checkOverflow(double)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QLCDNumber13checkOverflowEd(void *this_, double num) {
  return (bool)((QLCDNumber*)this_)->checkOverflow(num);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:80
// [1] bool checkOverflow(int)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QLCDNumber13checkOverflowEi(void *this_, int num) {
  return (bool)((QLCDNumber*)this_)->checkOverflow(num);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:82
// [4] QLCDNumber::Mode mode()
extern "C" Q_DECL_EXPORT
QLCDNumber::Mode C_ZNK10QLCDNumber4modeEv(void *this_) {
  return (QLCDNumber::Mode)((QLCDNumber*)this_)->mode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:83
// [-2] void setMode(QLCDNumber::Mode)
extern "C" Q_DECL_EXPORT
void C_ZN10QLCDNumber7setModeENS_4ModeE(void *this_, QLCDNumber::Mode arg0) {
  ((QLCDNumber*)this_)->setMode(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:85
// [4] QLCDNumber::SegmentStyle segmentStyle()
extern "C" Q_DECL_EXPORT
QLCDNumber::SegmentStyle C_ZNK10QLCDNumber12segmentStyleEv(void *this_) {
  return (QLCDNumber::SegmentStyle)((QLCDNumber*)this_)->segmentStyle();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:86
// [-2] void setSegmentStyle(QLCDNumber::SegmentStyle)
extern "C" Q_DECL_EXPORT
void C_ZN10QLCDNumber15setSegmentStyleENS_12SegmentStyleE(void *this_, QLCDNumber::SegmentStyle arg0) {
  ((QLCDNumber*)this_)->setSegmentStyle(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:88
// [8] double value()
extern "C" Q_DECL_EXPORT
double C_ZNK10QLCDNumber5valueEv(void *this_) {
  return (double)((QLCDNumber*)this_)->value();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:89
// [4] int intValue()
extern "C" Q_DECL_EXPORT
int C_ZNK10QLCDNumber8intValueEv(void *this_) {
  return (int)((QLCDNumber*)this_)->intValue();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:91
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QLCDNumber8sizeHintEv(void *this_) {
  auto rv = ((QLCDNumber*)this_)->sizeHint();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:94
// [-2] void display(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN10QLCDNumber7displayERK7QString(void *this_, QString* str) {
  ((QLCDNumber*)this_)->display(*str);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:95
// [-2] void display(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QLCDNumber7displayEi(void *this_, int num) {
  ((QLCDNumber*)this_)->display(num);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:96
// [-2] void display(double)
extern "C" Q_DECL_EXPORT
void C_ZN10QLCDNumber7displayEd(void *this_, double num) {
  ((QLCDNumber*)this_)->display(num);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:97
// [-2] void setHexMode()
extern "C" Q_DECL_EXPORT
void C_ZN10QLCDNumber10setHexModeEv(void *this_) {
  ((QLCDNumber*)this_)->setHexMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:98
// [-2] void setDecMode()
extern "C" Q_DECL_EXPORT
void C_ZN10QLCDNumber10setDecModeEv(void *this_) {
  ((QLCDNumber*)this_)->setDecMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:99
// [-2] void setOctMode()
extern "C" Q_DECL_EXPORT
void C_ZN10QLCDNumber10setOctModeEv(void *this_) {
  ((QLCDNumber*)this_)->setOctMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:100
// [-2] void setBinMode()
extern "C" Q_DECL_EXPORT
void C_ZN10QLCDNumber10setBinModeEv(void *this_) {
  ((QLCDNumber*)this_)->setBinMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:101
// [-2] void setSmallDecimalPoint(bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QLCDNumber20setSmallDecimalPointEb(void *this_, bool arg0) {
  ((QLCDNumber*)this_)->setSmallDecimalPoint(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlcdnumber.h:104
// [-2] void overflow()
extern "C" Q_DECL_EXPORT
void C_ZN10QLCDNumber8overflowEv(void *this_) {
  ((QLCDNumber*)this_)->overflow();
}

//  main block end
