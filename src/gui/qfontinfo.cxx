//  header block begin
// /usr/include/qt/QtGui/qfontinfo.h
#include <qfontinfo.h>
#include <QtGui>
#include "callback_inherit.h"

// QFontInfo is pure virtual: false
// QFontInfo has virtual projected: false
//  header block end

//  main block begin

class MyQFontInfo : public QFontInfo {
public:
  virtual ~MyQFontInfo() {}
// void QFontInfo(const class QFont &)
MyQFontInfo(const QFont & arg0) : QFontInfo(arg0) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontinfo.h:53
// [-2] void QFontInfo(const class QFont &)
extern "C"
void* C_ZN9QFontInfoC2ERK5QFont(QFont* arg0) {
  return  new QFontInfo(*arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontinfo.h:55
// [-2] void ~QFontInfo()
extern "C"
void C_ZN9QFontInfoD2Ev(void *this_) {
  delete (QFontInfo*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontinfo.h:57
// [8] QFontInfo & operator=(const class QFontInfo &)
extern "C"
void* C_ZN9QFontInfoaSERKS_(void *this_, QFontInfo* arg0) {
  auto& rv = ((QFontInfo*)this_)->operator=(*arg0);
return &rv;
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontinfo.h:59
// [-2] void swap(class QFontInfo &)
extern "C"
void C_ZN9QFontInfo4swapERS_(void *this_, QFontInfo* other) {
  ((QFontInfo*)this_)->swap(*other);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontinfo.h:61
// [8] QString family()
extern "C"
void* C_ZNK9QFontInfo6familyEv(void *this_) {
  auto rv = ((QFontInfo*)this_)->family();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontinfo.h:62
// [8] QString styleName()
extern "C"
void* C_ZNK9QFontInfo9styleNameEv(void *this_) {
  auto rv = ((QFontInfo*)this_)->styleName();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontinfo.h:63
// [4] int pixelSize()
extern "C"
int C_ZNK9QFontInfo9pixelSizeEv(void *this_) {
  return (int)((QFontInfo*)this_)->pixelSize();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontinfo.h:64
// [4] int pointSize()
extern "C"
int C_ZNK9QFontInfo9pointSizeEv(void *this_) {
  return (int)((QFontInfo*)this_)->pointSize();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontinfo.h:65
// [8] qreal pointSizeF()
extern "C"
qreal C_ZNK9QFontInfo10pointSizeFEv(void *this_) {
  return (qreal)((QFontInfo*)this_)->pointSizeF();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontinfo.h:66
// [1] bool italic()
extern "C"
bool C_ZNK9QFontInfo6italicEv(void *this_) {
  return (bool)((QFontInfo*)this_)->italic();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontinfo.h:67
// [4] QFont::Style style()
extern "C"
QFont::Style C_ZNK9QFontInfo5styleEv(void *this_) {
  return (QFont::Style)((QFontInfo*)this_)->style();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontinfo.h:68
// [4] int weight()
extern "C"
int C_ZNK9QFontInfo6weightEv(void *this_) {
  return (int)((QFontInfo*)this_)->weight();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontinfo.h:69
// [1] bool bold()
extern "C"
bool C_ZNK9QFontInfo4boldEv(void *this_) {
  return (bool)((QFontInfo*)this_)->bold();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontinfo.h:70
// [1] bool underline()
extern "C"
bool C_ZNK9QFontInfo9underlineEv(void *this_) {
  return (bool)((QFontInfo*)this_)->underline();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontinfo.h:71
// [1] bool overline()
extern "C"
bool C_ZNK9QFontInfo8overlineEv(void *this_) {
  return (bool)((QFontInfo*)this_)->overline();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontinfo.h:72
// [1] bool strikeOut()
extern "C"
bool C_ZNK9QFontInfo9strikeOutEv(void *this_) {
  return (bool)((QFontInfo*)this_)->strikeOut();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontinfo.h:73
// [1] bool fixedPitch()
extern "C"
bool C_ZNK9QFontInfo10fixedPitchEv(void *this_) {
  return (bool)((QFontInfo*)this_)->fixedPitch();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontinfo.h:74
// [4] QFont::StyleHint styleHint()
extern "C"
QFont::StyleHint C_ZNK9QFontInfo9styleHintEv(void *this_) {
  return (QFont::StyleHint)((QFontInfo*)this_)->styleHint();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontinfo.h:76
// [1] bool rawMode()
extern "C"
bool C_ZNK9QFontInfo7rawModeEv(void *this_) {
  return (bool)((QFontInfo*)this_)->rawMode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontinfo.h:79
// [1] bool exactMatch()
extern "C"
bool C_ZNK9QFontInfo10exactMatchEv(void *this_) {
  return (bool)((QFontInfo*)this_)->exactMatch();
}
//  main block end
