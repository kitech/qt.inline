// /usr/include/qt/QtWidgets/qlcdnumber.h
#include <qlcdnumber.h>
#include <QtWidgets>

// virtual
// /usr/include/qt/QtWidgets/qlcdnumber.h:53
// const QMetaObject * metaObject()
extern "C"
void C_ZNK10QLCDNumber10metaObjectEv(void *this_) {
  /*return*/ ((QLCDNumber*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qlcdnumber.h:62
// void QLCDNumber(class QWidget *)
extern "C"
void* C_ZN10QLCDNumberC1EP7QWidget(QWidget * parent) {
  return new QLCDNumber(parent);
}
// /usr/include/qt/QtWidgets/qlcdnumber.h:63
// void QLCDNumber(uint, class QWidget *)
extern "C"
void* C_ZN10QLCDNumberC1EjP7QWidget(uint numDigits, QWidget * parent) {
  return new QLCDNumber(numDigits, parent);
}
// virtual
// /usr/include/qt/QtWidgets/qlcdnumber.h:64
// void ~QLCDNumber()
extern "C"
void C_ZN10QLCDNumberD1Ev(void *this_) {
  delete (QLCDNumber*)(this_);
}
// /usr/include/qt/QtWidgets/qlcdnumber.h:75
// bool smallDecimalPoint()
extern "C"
void C_ZNK10QLCDNumber17smallDecimalPointEv(void *this_) {
  /*return*/ ((QLCDNumber*)this_)->smallDecimalPoint();
}
// /usr/include/qt/QtWidgets/qlcdnumber.h:76
// int digitCount()
extern "C"
void C_ZNK10QLCDNumber10digitCountEv(void *this_) {
  /*return*/ ((QLCDNumber*)this_)->digitCount();
}
// /usr/include/qt/QtWidgets/qlcdnumber.h:77
// void setDigitCount(int)
extern "C"
void C_ZN10QLCDNumber13setDigitCountEi(void *this_, int nDigits) {
  ((QLCDNumber*)this_)->setDigitCount(nDigits);
}
// /usr/include/qt/QtWidgets/qlcdnumber.h:79
// bool checkOverflow(double)
extern "C"
void C_ZNK10QLCDNumber13checkOverflowEd(void *this_, double num) {
  /*return*/ ((QLCDNumber*)this_)->checkOverflow(num);
}
// /usr/include/qt/QtWidgets/qlcdnumber.h:80
// bool checkOverflow(int)
extern "C"
void C_ZNK10QLCDNumber13checkOverflowEi(void *this_, int num) {
  /*return*/ ((QLCDNumber*)this_)->checkOverflow(num);
}
// /usr/include/qt/QtWidgets/qlcdnumber.h:82
// QLCDNumber::Mode mode()
extern "C"
void C_ZNK10QLCDNumber4modeEv(void *this_) {
  /*return*/ ((QLCDNumber*)this_)->mode();
}
// /usr/include/qt/QtWidgets/qlcdnumber.h:83
// void setMode(enum QLCDNumber::Mode)
extern "C"
void C_ZN10QLCDNumber7setModeENS_4ModeE(void *this_, QLCDNumber::Mode a0) {
  ((QLCDNumber*)this_)->setMode(a0);
}
// /usr/include/qt/QtWidgets/qlcdnumber.h:85
// QLCDNumber::SegmentStyle segmentStyle()
extern "C"
void C_ZNK10QLCDNumber12segmentStyleEv(void *this_) {
  /*return*/ ((QLCDNumber*)this_)->segmentStyle();
}
// /usr/include/qt/QtWidgets/qlcdnumber.h:86
// void setSegmentStyle(enum QLCDNumber::SegmentStyle)
extern "C"
void C_ZN10QLCDNumber15setSegmentStyleENS_12SegmentStyleE(void *this_, QLCDNumber::SegmentStyle a0) {
  ((QLCDNumber*)this_)->setSegmentStyle(a0);
}
// /usr/include/qt/QtWidgets/qlcdnumber.h:88
// double value()
extern "C"
void C_ZNK10QLCDNumber5valueEv(void *this_) {
  /*return*/ ((QLCDNumber*)this_)->value();
}
// /usr/include/qt/QtWidgets/qlcdnumber.h:89
// int intValue()
extern "C"
void C_ZNK10QLCDNumber8intValueEv(void *this_) {
  /*return*/ ((QLCDNumber*)this_)->intValue();
}
// virtual
// /usr/include/qt/QtWidgets/qlcdnumber.h:91
// QSize sizeHint()
extern "C"
void C_ZNK10QLCDNumber8sizeHintEv(void *this_) {
  /*return*/ ((QLCDNumber*)this_)->sizeHint();
}
// /usr/include/qt/QtWidgets/qlcdnumber.h:94
// void display(const class QString &)
extern "C"
void C_ZN10QLCDNumber7displayERK7QString(void *this_, const QString & str) {
  ((QLCDNumber*)this_)->display(str);
}
// /usr/include/qt/QtWidgets/qlcdnumber.h:95
// void display(int)
extern "C"
void C_ZN10QLCDNumber7displayEi(void *this_, int num) {
  ((QLCDNumber*)this_)->display(num);
}
// /usr/include/qt/QtWidgets/qlcdnumber.h:96
// void display(double)
extern "C"
void C_ZN10QLCDNumber7displayEd(void *this_, double num) {
  ((QLCDNumber*)this_)->display(num);
}
// /usr/include/qt/QtWidgets/qlcdnumber.h:97
// void setHexMode()
extern "C"
void C_ZN10QLCDNumber10setHexModeEv(void *this_) {
  ((QLCDNumber*)this_)->setHexMode();
}
// /usr/include/qt/QtWidgets/qlcdnumber.h:98
// void setDecMode()
extern "C"
void C_ZN10QLCDNumber10setDecModeEv(void *this_) {
  ((QLCDNumber*)this_)->setDecMode();
}
// /usr/include/qt/QtWidgets/qlcdnumber.h:99
// void setOctMode()
extern "C"
void C_ZN10QLCDNumber10setOctModeEv(void *this_) {
  ((QLCDNumber*)this_)->setOctMode();
}
// /usr/include/qt/QtWidgets/qlcdnumber.h:100
// void setBinMode()
extern "C"
void C_ZN10QLCDNumber10setBinModeEv(void *this_) {
  ((QLCDNumber*)this_)->setBinMode();
}
// /usr/include/qt/QtWidgets/qlcdnumber.h:101
// void setSmallDecimalPoint(_Bool)
extern "C"
void C_ZN10QLCDNumber20setSmallDecimalPointEb(void *this_, bool a0) {
  ((QLCDNumber*)this_)->setSmallDecimalPoint(a0);
}
// /usr/include/qt/QtWidgets/qlcdnumber.h:104
// void overflow()
extern "C"
void C_ZN10QLCDNumber8overflowEv(void *this_) {
  ((QLCDNumber*)this_)->overflow();
}