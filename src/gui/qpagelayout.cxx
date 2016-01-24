// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtGui/qpagelayout.h
// dst-file: /src/gui/qpagelayout.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qpagelayout.h>


#include <qmargins.h>
#include <qrect.h>
#include <qpagesize.h>
// <= header block end

// main block begin =>
void __keep_qpagelayout_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtGui/qpagelayout.h', line 85, column 10>
//   // proto:  void QPageLayout::swap(QPageLayout & other);
if (true) {
  auto f = [](QPageLayout flythis, QPageLayout & arg1) {
    ((QPageLayout*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN11QPageLayout4swapERS_ swap(class QPageLayout &)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QPageLayout_Class_Size()
{
  return sizeof(QPageLayout);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qpagelayout.h', line 93, column 10>
//   // proto:  QPageLayout::Mode QPageLayout::mode();
// _ZNK11QPageLayout4modeEv mode()
extern "C"
QPageLayout::Mode
C_ZNK11QPageLayout4modeEv(void *qthis) {
  auto ret =
  ((QPageLayout*)qthis)->mode();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagelayout.h', line 107, column 10>
//   // proto:  bool QPageLayout::setRightMargin(qreal rightMargin);
// _ZN11QPageLayout14setRightMarginEd setRightMargin(qreal)
extern "C"
bool
C_ZN11QPageLayout14setRightMarginEd(void *qthis,
qreal arg1) {
  auto ret =
  ((QPageLayout*)qthis)->setRightMargin(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagelayout.h', line 85, column 10>
//   // proto:  void QPageLayout::swap(QPageLayout & other);
// _ZN11QPageLayout4swapERS_ swap(class QPageLayout &)
extern "C"
void
C_ZN11QPageLayout4swapERS_(void *qthis,
QPageLayout* arg1) {
  ((QPageLayout*)qthis)->swap(*((QPageLayout*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagelayout.h', line 113, column 14>
//   // proto:  QMargins QPageLayout::marginsPoints();
// _ZNK11QPageLayout13marginsPointsEv marginsPoints()
extern "C"
QMargins*
C_ZNK11QPageLayout13marginsPointsEv(void *qthis) {
  auto ret =
  ((QPageLayout*)qthis)->marginsPoints();
  return new QMargins(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagelayout.h', line 92, column 10>
//   // proto:  void QPageLayout::setMode(QPageLayout::Mode mode);
// _ZN11QPageLayout7setModeENS_4ModeE setMode(enum QPageLayout::Mode)
extern "C"
void
C_ZN11QPageLayout7setModeENS_4ModeE(void *qthis,
QPageLayout::Mode arg1) {
  ((QPageLayout*)qthis)->setMode(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagelayout.h', line 114, column 14>
//   // proto:  QMargins QPageLayout::marginsPixels(int resolution);
// _ZNK11QPageLayout13marginsPixelsEi marginsPixels(int)
extern "C"
QMargins*
C_ZNK11QPageLayout13marginsPixelsEi(void *qthis,
int arg1) {
  auto ret =
  ((QPageLayout*)qthis)->marginsPixels(arg1);
  return new QMargins(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagelayout.h', line 90, column 10>
//   // proto:  bool QPageLayout::isValid();
// _ZNK11QPageLayout7isValidEv isValid()
extern "C"
bool
C_ZNK11QPageLayout7isValidEv(void *qthis) {
  auto ret =
  ((QPageLayout*)qthis)->isValid();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagelayout.h', line 120, column 12>
//   // proto:  QRectF QPageLayout::fullRect();
// _ZNK11QPageLayout8fullRectEv fullRect()
extern "C"
QRectF*
C_ZNK11QPageLayout8fullRectEv(void *qthis) {
  auto ret =
  ((QPageLayout*)qthis)->fullRect();
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagelayout.h', line 125, column 12>
//   // proto:  QRectF QPageLayout::paintRect();
// _ZNK11QPageLayout9paintRectEv paintRect()
extern "C"
QRectF*
C_ZNK11QPageLayout9paintRectEv(void *qthis) {
  auto ret =
  ((QPageLayout*)qthis)->paintRect();
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagelayout.h', line 103, column 10>
//   // proto:  QPageLayout::Unit QPageLayout::units();
// _ZNK11QPageLayout5unitsEv units()
extern "C"
QPageLayout::Unit
C_ZNK11QPageLayout5unitsEv(void *qthis) {
  auto ret =
  ((QPageLayout*)qthis)->units();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagelayout.h', line 116, column 10>
//   // proto:  void QPageLayout::setMinimumMargins(const QMarginsF & minMargins);
// _ZN11QPageLayout17setMinimumMarginsERK9QMarginsF setMinimumMargins(const class QMarginsF &)
extern "C"
void
C_ZN11QPageLayout17setMinimumMarginsERK9QMarginsF(void *qthis,
const QMarginsF* arg1) {
  ((QPageLayout*)qthis)->setMinimumMargins(*((const QMarginsF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagelayout.h', line 106, column 10>
//   // proto:  bool QPageLayout::setLeftMargin(qreal leftMargin);
// _ZN11QPageLayout13setLeftMarginEd setLeftMargin(qreal)
extern "C"
bool
C_ZN11QPageLayout13setLeftMarginEd(void *qthis,
qreal arg1) {
  auto ret =
  ((QPageLayout*)qthis)->setLeftMargin(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagelayout.h', line 109, column 10>
//   // proto:  bool QPageLayout::setBottomMargin(qreal bottomMargin);
// _ZN11QPageLayout15setBottomMarginEd setBottomMargin(qreal)
extern "C"
bool
C_ZN11QPageLayout15setBottomMarginEd(void *qthis,
qreal arg1) {
  auto ret =
  ((QPageLayout*)qthis)->setBottomMargin(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagelayout.h', line 122, column 11>
//   // proto:  QRect QPageLayout::fullRectPoints();
// _ZNK11QPageLayout14fullRectPointsEv fullRectPoints()
extern "C"
QRect*
C_ZNK11QPageLayout14fullRectPointsEv(void *qthis) {
  auto ret =
  ((QPageLayout*)qthis)->fullRectPoints();
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagelayout.h', line 117, column 15>
//   // proto:  QMarginsF QPageLayout::minimumMargins();
// _ZNK11QPageLayout14minimumMarginsEv minimumMargins()
extern "C"
QMarginsF*
C_ZNK11QPageLayout14minimumMarginsEv(void *qthis) {
  auto ret =
  ((QPageLayout*)qthis)->minimumMargins();
  return new QMarginsF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagelayout.h', line 99, column 10>
//   // proto:  void QPageLayout::setOrientation(QPageLayout::Orientation orientation);
// _ZN11QPageLayout14setOrientationENS_11OrientationE setOrientation(enum QPageLayout::Orientation)
extern "C"
void
C_ZN11QPageLayout14setOrientationENS_11OrientationE(void *qthis,
QPageLayout::Orientation arg1) {
  ((QPageLayout*)qthis)->setOrientation(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagelayout.h', line 97, column 15>
//   // proto:  QPageSize QPageLayout::pageSize();
// _ZNK11QPageLayout8pageSizeEv pageSize()
extern "C"
QPageSize*
C_ZNK11QPageLayout8pageSizeEv(void *qthis) {
  auto ret =
  ((QPageLayout*)qthis)->pageSize();
  return new QPageSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagelayout.h', line 108, column 10>
//   // proto:  bool QPageLayout::setTopMargin(qreal topMargin);
// _ZN11QPageLayout12setTopMarginEd setTopMargin(qreal)
extern "C"
bool
C_ZN11QPageLayout12setTopMarginEd(void *qthis,
qreal arg1) {
  auto ret =
  ((QPageLayout*)qthis)->setTopMargin(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagelayout.h', line 112, column 15>
//   // proto:  QMarginsF QPageLayout::margins(QPageLayout::Unit units);
// _ZNK11QPageLayout7marginsENS_4UnitE margins(enum QPageLayout::Unit)
extern "C"
QMarginsF*
C_ZNK11QPageLayout7marginsENS_4UnitE(void *qthis,
QPageLayout::Unit arg1) {
  auto ret =
  ((QPageLayout*)qthis)->margins(arg1);
  return new QMarginsF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagelayout.h', line 126, column 12>
//   // proto:  QRectF QPageLayout::paintRect(QPageLayout::Unit units);
// _ZNK11QPageLayout9paintRectENS_4UnitE paintRect(enum QPageLayout::Unit)
extern "C"
QRectF*
C_ZNK11QPageLayout9paintRectENS_4UnitE(void *qthis,
QPageLayout::Unit arg1) {
  auto ret =
  ((QPageLayout*)qthis)->paintRect(arg1);
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagelayout.h', line 121, column 12>
//   // proto:  QRectF QPageLayout::fullRect(QPageLayout::Unit units);
// _ZNK11QPageLayout8fullRectENS_4UnitE fullRect(enum QPageLayout::Unit)
extern "C"
QRectF*
C_ZNK11QPageLayout8fullRectENS_4UnitE(void *qthis,
QPageLayout::Unit arg1) {
  auto ret =
  ((QPageLayout*)qthis)->fullRect(arg1);
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagelayout.h', line 73, column 5>
//   // proto:  void QPageLayout::QPageLayout();
extern "C"
QPageLayout*
C_ZN11QPageLayoutC2Ev() {
  auto ret = new QPageLayout();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagelayout.h', line 77, column 5>
//   // proto:  void QPageLayout::QPageLayout(const QPageLayout & other);
extern "C"
QPageLayout*
C_ZN11QPageLayoutC2ERKS_(const QPageLayout* arg1) {
  auto ret = new QPageLayout(*((const QPageLayout*)arg1));
  return ret;
}
//   // proto:  void QPageLayout::~QPageLayout();
extern "C"
void C_ZN11QPageLayoutD2Ev(void *qthis) {
  delete (QPageLayout*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagelayout.h', line 123, column 11>
//   // proto:  QRect QPageLayout::fullRectPixels(int resolution);
// _ZNK11QPageLayout14fullRectPixelsEi fullRectPixels(int)
extern "C"
QRect*
C_ZNK11QPageLayout14fullRectPixelsEi(void *qthis,
int arg1) {
  auto ret =
  ((QPageLayout*)qthis)->fullRectPixels(arg1);
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagelayout.h', line 111, column 15>
//   // proto:  QMarginsF QPageLayout::margins();
// _ZNK11QPageLayout7marginsEv margins()
extern "C"
QMarginsF*
C_ZNK11QPageLayout7marginsEv(void *qthis) {
  auto ret =
  ((QPageLayout*)qthis)->margins();
  return new QMarginsF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagelayout.h', line 127, column 11>
//   // proto:  QRect QPageLayout::paintRectPoints();
// _ZNK11QPageLayout15paintRectPointsEv paintRectPoints()
extern "C"
QRect*
C_ZNK11QPageLayout15paintRectPointsEv(void *qthis) {
  auto ret =
  ((QPageLayout*)qthis)->paintRectPoints();
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagelayout.h', line 128, column 11>
//   // proto:  QRect QPageLayout::paintRectPixels(int resolution);
// _ZNK11QPageLayout15paintRectPixelsEi paintRectPixels(int)
extern "C"
QRect*
C_ZNK11QPageLayout15paintRectPixelsEi(void *qthis,
int arg1) {
  auto ret =
  ((QPageLayout*)qthis)->paintRectPixels(arg1);
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagelayout.h', line 95, column 10>
//   // proto:  void QPageLayout::setPageSize(const QPageSize & pageSize, const QMarginsF & minMargins);
// _ZN11QPageLayout11setPageSizeERK9QPageSizeRK9QMarginsF setPageSize(const class QPageSize &, const class QMarginsF &)
extern "C"
void
C_ZN11QPageLayout11setPageSizeERK9QPageSizeRK9QMarginsF(void *qthis,
const QPageSize* arg1,
const QMarginsF* arg2) {
  ((QPageLayout*)qthis)->setPageSize(*((const QPageSize*)arg1),
*((const QMarginsF*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagelayout.h', line 118, column 15>
//   // proto:  QMarginsF QPageLayout::maximumMargins();
// _ZNK11QPageLayout14maximumMarginsEv maximumMargins()
extern "C"
QMarginsF*
C_ZNK11QPageLayout14maximumMarginsEv(void *qthis) {
  auto ret =
  ((QPageLayout*)qthis)->maximumMargins();
  return new QMarginsF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagelayout.h', line 88, column 10>
//   // proto:  bool QPageLayout::isEquivalentTo(const QPageLayout & other);
// _ZNK11QPageLayout14isEquivalentToERKS_ isEquivalentTo(const class QPageLayout &)
extern "C"
bool
C_ZNK11QPageLayout14isEquivalentToERKS_(void *qthis,
const QPageLayout* arg1) {
  auto ret =
  ((QPageLayout*)qthis)->isEquivalentTo(*((const QPageLayout*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagelayout.h', line 105, column 10>
//   // proto:  bool QPageLayout::setMargins(const QMarginsF & margins);
// _ZN11QPageLayout10setMarginsERK9QMarginsF setMargins(const class QMarginsF &)
extern "C"
bool
C_ZN11QPageLayout10setMarginsERK9QMarginsF(void *qthis,
const QMarginsF* arg1) {
  auto ret =
  ((QPageLayout*)qthis)->setMargins(*((const QMarginsF*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagelayout.h', line 102, column 10>
//   // proto:  void QPageLayout::setUnits(QPageLayout::Unit units);
// _ZN11QPageLayout8setUnitsENS_4UnitE setUnits(enum QPageLayout::Unit)
extern "C"
void
C_ZN11QPageLayout8setUnitsENS_4UnitE(void *qthis,
QPageLayout::Unit arg1) {
  ((QPageLayout*)qthis)->setUnits(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagelayout.h', line 74, column 5>
//   // proto:  void QPageLayout::QPageLayout(const QPageSize & pageSize, QPageLayout::Orientation orientation, const QMarginsF & margins, QPageLayout::Unit units, const QMarginsF & minMargins);
extern "C"
QPageLayout*
C_ZN11QPageLayoutC2ERK9QPageSizeNS_11OrientationERK9QMarginsFNS_4UnitES6_(const QPageSize* arg1,
QPageLayout::Orientation arg2,
const QMarginsF* arg3,
QPageLayout::Unit arg4,
const QMarginsF* arg5) {
  auto ret = new QPageLayout(*((const QPageSize*)arg1),
arg2,
*((const QMarginsF*)arg3),
arg4,
*((const QMarginsF*)arg5));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagelayout.h', line 100, column 17>
//   // proto:  QPageLayout::Orientation QPageLayout::orientation();
// _ZNK11QPageLayout11orientationEv orientation()
extern "C"
QPageLayout::Orientation
C_ZNK11QPageLayout11orientationEv(void *qthis) {
  auto ret =
  ((QPageLayout*)qthis)->orientation();
  return ret; // 0 TypeKind.ENUM
}
// <= ext block end

// body block begin =>
// <= body block end

