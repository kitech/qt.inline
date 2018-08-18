//  header block begin
// /usr/include/qt/QtGui/qpagedpaintdevice.h
#ifndef protected
#define protected public
#endif
#include <qpagedpaintdevice.h>
#include <QtGui>
#include "callback_inherit.h"

// QPagedPaintDevice is pure virtual: true
// QPagedPaintDevice has virtual projected: false
//  header block end

//  main block begin

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagedpaintdevice.h:58
// [-2] void QPagedPaintDevice()
extern "C" Q_DECL_EXPORT
void* C_ZN17QPagedPaintDeviceC2Ev() {
  return 0; // new QPagedPaintDevice();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagedpaintdevice.h:59
// [-2] void ~QPagedPaintDevice()
extern "C" Q_DECL_EXPORT
void C_ZN17QPagedPaintDeviceD2Ev(void *this_) {
  delete (QPagedPaintDevice*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagedpaintdevice.h:61
// [1] bool newPage()
extern "C" Q_DECL_EXPORT
bool C_ZN17QPagedPaintDevice7newPageEv(void *this_) {
  return (bool)((QPagedPaintDevice*)this_)->newPage();
}

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qpagedpaintdevice.h:219
// [1] bool setPageLayout(const QPageLayout &)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
bool C_ZN17QPagedPaintDevice13setPageLayoutERK11QPageLayout(void *this_, QPageLayout* pageLayout) {
  return (bool)((QPagedPaintDevice*)this_)->setPageLayout(*pageLayout);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qpagedpaintdevice.h:220
// [1] bool setPageSize(const QPageSize &)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
bool C_ZN17QPagedPaintDevice11setPageSizeERK9QPageSize(void *this_, QPageSize* pageSize) {
  return (bool)((QPagedPaintDevice*)this_)->setPageSize(*pageSize);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qpagedpaintdevice.h:221
// [1] bool setPageOrientation(QPageLayout::Orientation)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
bool C_ZN17QPagedPaintDevice18setPageOrientationEN11QPageLayout11OrientationE(void *this_, QPageLayout::Orientation orientation) {
  return (bool)((QPagedPaintDevice*)this_)->setPageOrientation(orientation);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qpagedpaintdevice.h:222
// [1] bool setPageMargins(const QMarginsF &)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
bool C_ZN17QPagedPaintDevice14setPageMarginsERK9QMarginsF(void *this_, QMarginsF* margins) {
  return (bool)((QPagedPaintDevice*)this_)->setPageMargins(*margins);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qpagedpaintdevice.h:223
// [1] bool setPageMargins(const QMarginsF &, QPageLayout::Unit)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
bool C_ZN17QPagedPaintDevice14setPageMarginsERK9QMarginsFN11QPageLayout4UnitE(void *this_, QMarginsF* margins, QPageLayout::Unit units) {
  return (bool)((QPagedPaintDevice*)this_)->setPageMargins(*margins, units);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qpagedpaintdevice.h:224
// [8] QPageLayout pageLayout()
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void* C_ZNK17QPagedPaintDevice10pageLayoutEv(void *this_) {
  auto rv = ((QPagedPaintDevice*)this_)->pageLayout();
return new QPageLayout(rv);
}
#endif // QT_VERSION >= 0x050300

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagedpaintdevice.h:226
// [-2] void setPageSize(QPagedPaintDevice::PageSize)
extern "C" Q_DECL_EXPORT
void C_ZN17QPagedPaintDevice11setPageSizeENS_8PageSizeE(void *this_, QPagedPaintDevice::PageSize size) {
  ((QPagedPaintDevice*)this_)->setPageSize(size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagedpaintdevice.h:227
// [4] QPagedPaintDevice::PageSize pageSize()
extern "C" Q_DECL_EXPORT
QPagedPaintDevice::PageSize C_ZNK17QPagedPaintDevice8pageSizeEv(void *this_) {
  return (QPagedPaintDevice::PageSize)((QPagedPaintDevice*)this_)->pageSize();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagedpaintdevice.h:229
// [-2] void setPageSizeMM(const QSizeF &)
extern "C" Q_DECL_EXPORT
void C_ZN17QPagedPaintDevice13setPageSizeMMERK6QSizeF(void *this_, QSizeF* size) {
  ((QPagedPaintDevice*)this_)->setPageSizeMM(*size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagedpaintdevice.h:230
// [16] QSizeF pageSizeMM()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QPagedPaintDevice10pageSizeMMEv(void *this_) {
  auto rv = ((QPagedPaintDevice*)this_)->pageSizeMM();
return new QSizeF(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagedpaintdevice.h:240
// [-2] void setMargins(const QPagedPaintDevice::Margins &)
extern "C" Q_DECL_EXPORT
void C_ZN17QPagedPaintDevice10setMarginsERKNS_7MarginsE(void *this_, QPagedPaintDevice::Margins* margins) {
  ((QPagedPaintDevice*)this_)->setMargins(*margins);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagedpaintdevice.h:241
// [32] QPagedPaintDevice::Margins margins()
extern "C" Q_DECL_EXPORT
void C_ZNK17QPagedPaintDevice7marginsEv(void *this_) {
  auto rv = ((QPagedPaintDevice*)this_)->margins();
/*return rv;*/
}

//  main block end
