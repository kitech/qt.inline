// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtGui/qpagedpaintdevice.h
// dst-file: /src/gui/qpagedpaintdevice.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qpagedpaintdevice.h>


#include <qsize.h>
#include <qpagelayout.h>
// <= header block end

// main block begin =>
void __keep_qpagedpaintdevice_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QPagedPaintDevice_Class_Size()
{
  return sizeof(QPagedPaintDevice);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qpagedpaintdevice.h', line 221, column 12>
//   // proto:  QSizeF QPagedPaintDevice::pageSizeMM();
// _ZNK17QPagedPaintDevice10pageSizeMMEv pageSizeMM()
extern "C"
QSizeF*
C_ZNK17QPagedPaintDevice10pageSizeMMEv(void *qthis) {
  auto ret =
  ((QPagedPaintDevice*)qthis)->pageSizeMM();
  return new QSizeF(ret); // 5
}
//   // proto:  void QPagedPaintDevice::~QPagedPaintDevice();
extern "C"
void C_ZN17QPagedPaintDeviceD2Ev(void *qthis) {
  delete (QPagedPaintDevice*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagedpaintdevice.h', line 213, column 10>
//   // proto:  bool QPagedPaintDevice::setPageMargins(const QMarginsF & margins);
// _ZN17QPagedPaintDevice14setPageMarginsERK9QMarginsF setPageMargins(const class QMarginsF &)
extern "C"
bool
C_ZN17QPagedPaintDevice14setPageMarginsERK9QMarginsF(void *qthis,
const QMarginsF* arg1) {
  auto ret =
  ((QPagedPaintDevice*)qthis)->setPageMargins(*((const QMarginsF*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagedpaintdevice.h', line 231, column 18>
//   // proto:  void QPagedPaintDevice::setMargins(const QPagedPaintDevice::Margins & margins);
// _ZN17QPagedPaintDevice10setMarginsERKNS_7MarginsE setMargins(const struct QPagedPaintDevice::Margins &)
extern "C"
void
C_ZN17QPagedPaintDevice10setMarginsERKNS_7MarginsE(void *qthis,
const QPagedPaintDevice::Margins* arg1) {
  ((QPagedPaintDevice*)qthis)->setMargins(*((const QPagedPaintDevice::Margins*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagedpaintdevice.h', line 232, column 13>
//   // proto:  QPagedPaintDevice::Margins QPagedPaintDevice::margins();
// _ZNK17QPagedPaintDevice7marginsEv margins()
extern "C"
QPagedPaintDevice::Margins*
C_ZNK17QPagedPaintDevice7marginsEv(void *qthis) {
  auto ret =
  ((QPagedPaintDevice*)qthis)->margins();
  return new QPagedPaintDevice::Margins(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagedpaintdevice.h', line 214, column 10>
//   // proto:  bool QPagedPaintDevice::setPageMargins(const QMarginsF & margins, QPageLayout::Unit units);
// _ZN17QPagedPaintDevice14setPageMarginsERK9QMarginsFN11QPageLayout4UnitE setPageMargins(const class QMarginsF &, class QPageLayout::Unit)
extern "C"
bool
C_ZN17QPagedPaintDevice14setPageMarginsERK9QMarginsFN11QPageLayout4UnitE(void *qthis,
const QMarginsF* arg1,
QPageLayout::Unit* arg2) {
  auto ret =
  ((QPagedPaintDevice*)qthis)->setPageMargins(*((const QMarginsF*)arg1),
*((QPageLayout::Unit*)arg2));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagedpaintdevice.h', line 217, column 18>
//   // proto:  void QPagedPaintDevice::setPageSize(QPagedPaintDevice::PageSize size);
// _ZN17QPagedPaintDevice11setPageSizeENS_8PageSizeE setPageSize(enum QPagedPaintDevice::PageSize)
extern "C"
void
C_ZN17QPagedPaintDevice11setPageSizeENS_8PageSizeE(void *qthis,
QPagedPaintDevice::PageSize arg1) {
  ((QPagedPaintDevice*)qthis)->setPageSize(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagedpaintdevice.h', line 215, column 17>
//   // proto:  QPageLayout QPagedPaintDevice::pageLayout();
// _ZNK17QPagedPaintDevice10pageLayoutEv pageLayout()
extern "C"
QPageLayout*
C_ZNK17QPagedPaintDevice10pageLayoutEv(void *qthis) {
  auto ret =
  ((QPagedPaintDevice*)qthis)->pageLayout();
  return new QPageLayout(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagedpaintdevice.h', line 212, column 10>
//   // proto:  bool QPagedPaintDevice::setPageOrientation(QPageLayout::Orientation orientation);
// _ZN17QPagedPaintDevice18setPageOrientationEN11QPageLayout11OrientationE setPageOrientation(class QPageLayout::Orientation)
extern "C"
bool
C_ZN17QPagedPaintDevice18setPageOrientationEN11QPageLayout11OrientationE(void *qthis,
QPageLayout::Orientation* arg1) {
  auto ret =
  ((QPagedPaintDevice*)qthis)->setPageOrientation(*((QPageLayout::Orientation*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagedpaintdevice.h', line 211, column 10>
//   // proto:  bool QPagedPaintDevice::setPageSize(const QPageSize & pageSize);
// _ZN17QPagedPaintDevice11setPageSizeERK9QPageSize setPageSize(const class QPageSize &)
extern "C"
bool
C_ZN17QPagedPaintDevice11setPageSizeERK9QPageSize(void *qthis,
const QPageSize* arg1) {
  auto ret =
  ((QPagedPaintDevice*)qthis)->setPageSize(*((const QPageSize*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagedpaintdevice.h', line 51, column 5>
//   // proto:  void QPagedPaintDevice::QPagedPaintDevice();
extern "C"
QPagedPaintDevice*
C_ZN17QPagedPaintDeviceC2Ev() {
  // auto ret = new QPagedPaintDevice();
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagedpaintdevice.h', line 220, column 18>
//   // proto:  void QPagedPaintDevice::setPageSizeMM(const QSizeF & size);
// _ZN17QPagedPaintDevice13setPageSizeMMERK6QSizeF setPageSizeMM(const class QSizeF &)
extern "C"
void
C_ZN17QPagedPaintDevice13setPageSizeMMERK6QSizeF(void *qthis,
const QSizeF* arg1) {
  ((QPagedPaintDevice*)qthis)->setPageSizeMM(*((const QSizeF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagedpaintdevice.h', line 210, column 10>
//   // proto:  bool QPagedPaintDevice::setPageLayout(const QPageLayout & pageLayout);
// _ZN17QPagedPaintDevice13setPageLayoutERK11QPageLayout setPageLayout(const class QPageLayout &)
extern "C"
bool
C_ZN17QPagedPaintDevice13setPageLayoutERK11QPageLayout(void *qthis,
const QPageLayout* arg1) {
  auto ret =
  ((QPagedPaintDevice*)qthis)->setPageLayout(*((const QPageLayout*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagedpaintdevice.h', line 54, column 18>
//   // proto:  bool QPagedPaintDevice::newPage();
// _ZN17QPagedPaintDevice7newPageEv newPage()
extern "C"
bool
C_ZN17QPagedPaintDevice7newPageEv(void *qthis) {
  auto ret =
  ((QPagedPaintDevice*)qthis)->newPage();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpagedpaintdevice.h', line 218, column 14>
//   // proto:  QPagedPaintDevice::PageSize QPagedPaintDevice::pageSize();
// _ZNK17QPagedPaintDevice8pageSizeEv pageSize()
extern "C"
QPagedPaintDevice::PageSize
C_ZNK17QPagedPaintDevice8pageSizeEv(void *qthis) {
  auto ret =
  ((QPagedPaintDevice*)qthis)->pageSize();
  return ret; // 0 TypeKind.ENUM
}
// <= ext block end

// body block begin =>
// <= body block end

