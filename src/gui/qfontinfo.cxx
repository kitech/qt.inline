// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtGui/qfontinfo.h
// dst-file: /src/gui/qfontinfo.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qfontinfo.h>


#include <qstring.h>
#include <qglobal.h>
#include <qfont.h>
// <= header block end

// main block begin =>
void __keep_qfontinfo_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtGui/qfontinfo.h', line 62, column 17>
//   // proto:  bool QFontInfo::bold();
if (true) {
  auto f = [](QFontInfo flythis) {
    ((QFontInfo*)0)->bold();
    flythis.bold();
  };
  if (f == nullptr){}
}
// _ZNK9QFontInfo4boldEv bold()
// <SourceLocation file '/usr/include/qt/QtGui/qfontinfo.h', line 52, column 10>
//   // proto:  void QFontInfo::swap(QFontInfo & other);
if (true) {
  auto f = [](QFontInfo flythis, QFontInfo & arg1) {
    ((QFontInfo*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN9QFontInfo4swapERS_ swap(class QFontInfo &)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QFontInfo_Class_Size()
{
  return sizeof(QFontInfo);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qfontinfo.h', line 69, column 10>
//   // proto:  bool QFontInfo::rawMode();
// _ZNK9QFontInfo7rawModeEv rawMode()
extern "C"
bool
C_ZNK9QFontInfo7rawModeEv(void *qthis) {
  auto ret =
  ((QFontInfo*)qthis)->rawMode();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontinfo.h', line 72, column 10>
//   // proto:  bool QFontInfo::exactMatch();
// _ZNK9QFontInfo10exactMatchEv exactMatch()
extern "C"
bool
C_ZNK9QFontInfo10exactMatchEv(void *qthis) {
  auto ret =
  ((QFontInfo*)qthis)->exactMatch();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontinfo.h', line 57, column 9>
//   // proto:  int QFontInfo::pointSize();
// _ZNK9QFontInfo9pointSizeEv pointSize()
extern "C"
int
C_ZNK9QFontInfo9pointSizeEv(void *qthis) {
  auto ret =
  ((QFontInfo*)qthis)->pointSize();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontinfo.h', line 47, column 5>
//   // proto:  void QFontInfo::QFontInfo(const QFontInfo & );
extern "C"
QFontInfo*
C_ZN9QFontInfoC2ERKS_(const QFontInfo* arg1) {
  auto ret = new QFontInfo(*((const QFontInfo*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontinfo.h', line 54, column 13>
//   // proto:  QString QFontInfo::family();
// _ZNK9QFontInfo6familyEv family()
extern "C"
QString*
C_ZNK9QFontInfo6familyEv(void *qthis) {
  auto ret =
  ((QFontInfo*)qthis)->family();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontinfo.h', line 62, column 17>
//   // proto:  bool QFontInfo::bold();
// _ZNK9QFontInfo4boldEv bold()
extern "C"
bool
C_ZNK9QFontInfo4boldEv(void *qthis) {
  auto ret =
  ((QFontInfo*)qthis)->bold();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontinfo.h', line 58, column 11>
//   // proto:  qreal QFontInfo::pointSizeF();
// _ZNK9QFontInfo10pointSizeFEv pointSizeF()
extern "C"
double
C_ZNK9QFontInfo10pointSizeFEv(void *qthis) {
  auto ret =
  ((QFontInfo*)qthis)->pointSizeF();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontinfo.h', line 60, column 18>
//   // proto:  QFont::Style QFontInfo::style();
// _ZNK9QFontInfo5styleEv style()
extern "C"
QFont::Style
C_ZNK9QFontInfo5styleEv(void *qthis) {
  auto ret =
  ((QFontInfo*)qthis)->style();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontinfo.h', line 66, column 10>
//   // proto:  bool QFontInfo::fixedPitch();
// _ZNK9QFontInfo10fixedPitchEv fixedPitch()
extern "C"
bool
C_ZNK9QFontInfo10fixedPitchEv(void *qthis) {
  auto ret =
  ((QFontInfo*)qthis)->fixedPitch();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontinfo.h', line 64, column 10>
//   // proto:  bool QFontInfo::overline();
// _ZNK9QFontInfo8overlineEv overline()
extern "C"
bool
C_ZNK9QFontInfo8overlineEv(void *qthis) {
  auto ret =
  ((QFontInfo*)qthis)->overline();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontinfo.h', line 52, column 10>
//   // proto:  void QFontInfo::swap(QFontInfo & other);
// _ZN9QFontInfo4swapERS_ swap(class QFontInfo &)
extern "C"
void
C_ZN9QFontInfo4swapERS_(void *qthis,
QFontInfo* arg1) {
  ((QFontInfo*)qthis)->swap(*((QFontInfo*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontinfo.h', line 46, column 5>
//   // proto:  void QFontInfo::QFontInfo(const QFont & );
extern "C"
QFontInfo*
C_ZN9QFontInfoC2ERK5QFont(const QFont* arg1) {
  auto ret = new QFontInfo(*((const QFont*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontinfo.h', line 56, column 9>
//   // proto:  int QFontInfo::pixelSize();
// _ZNK9QFontInfo9pixelSizeEv pixelSize()
extern "C"
int
C_ZNK9QFontInfo9pixelSizeEv(void *qthis) {
  auto ret =
  ((QFontInfo*)qthis)->pixelSize();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontinfo.h', line 67, column 22>
//   // proto:  QFont::StyleHint QFontInfo::styleHint();
// _ZNK9QFontInfo9styleHintEv styleHint()
extern "C"
QFont::StyleHint
C_ZNK9QFontInfo9styleHintEv(void *qthis) {
  auto ret =
  ((QFontInfo*)qthis)->styleHint();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontinfo.h', line 65, column 10>
//   // proto:  bool QFontInfo::strikeOut();
// _ZNK9QFontInfo9strikeOutEv strikeOut()
extern "C"
bool
C_ZNK9QFontInfo9strikeOutEv(void *qthis) {
  auto ret =
  ((QFontInfo*)qthis)->strikeOut();
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QFontInfo::~QFontInfo();
extern "C"
void C_ZN9QFontInfoD2Ev(void *qthis) {
  delete (QFontInfo*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontinfo.h', line 59, column 10>
//   // proto:  bool QFontInfo::italic();
// _ZNK9QFontInfo6italicEv italic()
extern "C"
bool
C_ZNK9QFontInfo6italicEv(void *qthis) {
  auto ret =
  ((QFontInfo*)qthis)->italic();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontinfo.h', line 63, column 10>
//   // proto:  bool QFontInfo::underline();
// _ZNK9QFontInfo9underlineEv underline()
extern "C"
bool
C_ZNK9QFontInfo9underlineEv(void *qthis) {
  auto ret =
  ((QFontInfo*)qthis)->underline();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontinfo.h', line 55, column 13>
//   // proto:  QString QFontInfo::styleName();
// _ZNK9QFontInfo9styleNameEv styleName()
extern "C"
QString*
C_ZNK9QFontInfo9styleNameEv(void *qthis) {
  auto ret =
  ((QFontInfo*)qthis)->styleName();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qfontinfo.h', line 61, column 9>
//   // proto:  int QFontInfo::weight();
// _ZNK9QFontInfo6weightEv weight()
extern "C"
int
C_ZNK9QFontInfo6weightEv(void *qthis) {
  auto ret =
  ((QFontInfo*)qthis)->weight();
  return ret; // 0 TypeKind.INT
}
// <= ext block end

// body block begin =>
// <= body block end

