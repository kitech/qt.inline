//  header block begin
// /usr/include/qt/QtGui/qfontinfo.h
#include <qfontinfo.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qfontinfo.h:52
// void QFontInfo(const class QFont &)
extern "C"
void* C_ZN9QFontInfoC1ERK5QFont(const QFont & arg0) {
  return new QFontInfo(arg0);
}
// /usr/include/qt/QtGui/qfontinfo.h:54
// void ~QFontInfo()
extern "C"
void C_ZN9QFontInfoD1Ev(void *this_) {
  delete (QFontInfo*)(this_);
}
// inline
// /usr/include/qt/QtGui/qfontinfo.h:58
// void swap(class QFontInfo &)
extern "C"
void C_ZN9QFontInfo4swapERS_(void *this_, QFontInfo & other) {
  ((QFontInfo*)this_)->swap(other);
}
// /usr/include/qt/QtGui/qfontinfo.h:60
// QString family()
extern "C"
void C_ZNK9QFontInfo6familyEv(void *this_) {
  /*return*/ ((QFontInfo*)this_)->family();
}
// /usr/include/qt/QtGui/qfontinfo.h:61
// QString styleName()
extern "C"
void C_ZNK9QFontInfo9styleNameEv(void *this_) {
  /*return*/ ((QFontInfo*)this_)->styleName();
}
// /usr/include/qt/QtGui/qfontinfo.h:62
// int pixelSize()
extern "C"
void C_ZNK9QFontInfo9pixelSizeEv(void *this_) {
  /*return*/ ((QFontInfo*)this_)->pixelSize();
}
// /usr/include/qt/QtGui/qfontinfo.h:63
// int pointSize()
extern "C"
void C_ZNK9QFontInfo9pointSizeEv(void *this_) {
  /*return*/ ((QFontInfo*)this_)->pointSize();
}
// /usr/include/qt/QtGui/qfontinfo.h:64
// qreal pointSizeF()
extern "C"
void C_ZNK9QFontInfo10pointSizeFEv(void *this_) {
  /*return*/ ((QFontInfo*)this_)->pointSizeF();
}
// /usr/include/qt/QtGui/qfontinfo.h:65
// bool italic()
extern "C"
void C_ZNK9QFontInfo6italicEv(void *this_) {
  /*return*/ ((QFontInfo*)this_)->italic();
}
// /usr/include/qt/QtGui/qfontinfo.h:66
// QFont::Style style()
extern "C"
void C_ZNK9QFontInfo5styleEv(void *this_) {
  /*return*/ ((QFontInfo*)this_)->style();
}
// /usr/include/qt/QtGui/qfontinfo.h:67
// int weight()
extern "C"
void C_ZNK9QFontInfo6weightEv(void *this_) {
  /*return*/ ((QFontInfo*)this_)->weight();
}
// inline
// /usr/include/qt/QtGui/qfontinfo.h:68
// bool bold()
extern "C"
void C_ZNK9QFontInfo4boldEv(void *this_) {
  /*return*/ ((QFontInfo*)this_)->bold();
}
// /usr/include/qt/QtGui/qfontinfo.h:69
// bool underline()
extern "C"
void C_ZNK9QFontInfo9underlineEv(void *this_) {
  /*return*/ ((QFontInfo*)this_)->underline();
}
// /usr/include/qt/QtGui/qfontinfo.h:70
// bool overline()
extern "C"
void C_ZNK9QFontInfo8overlineEv(void *this_) {
  /*return*/ ((QFontInfo*)this_)->overline();
}
// /usr/include/qt/QtGui/qfontinfo.h:71
// bool strikeOut()
extern "C"
void C_ZNK9QFontInfo9strikeOutEv(void *this_) {
  /*return*/ ((QFontInfo*)this_)->strikeOut();
}
// /usr/include/qt/QtGui/qfontinfo.h:72
// bool fixedPitch()
extern "C"
void C_ZNK9QFontInfo10fixedPitchEv(void *this_) {
  /*return*/ ((QFontInfo*)this_)->fixedPitch();
}
// /usr/include/qt/QtGui/qfontinfo.h:73
// QFont::StyleHint styleHint()
extern "C"
void C_ZNK9QFontInfo9styleHintEv(void *this_) {
  /*return*/ ((QFontInfo*)this_)->styleHint();
}
// /usr/include/qt/QtGui/qfontinfo.h:75
// bool rawMode()
extern "C"
void C_ZNK9QFontInfo7rawModeEv(void *this_) {
  /*return*/ ((QFontInfo*)this_)->rawMode();
}
// /usr/include/qt/QtGui/qfontinfo.h:78
// bool exactMatch()
extern "C"
void C_ZNK9QFontInfo10exactMatchEv(void *this_) {
  /*return*/ ((QFontInfo*)this_)->exactMatch();
}
//  main block end
