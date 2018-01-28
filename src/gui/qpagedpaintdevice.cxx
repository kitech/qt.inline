//  header block begin
// /usr/include/qt/QtGui/qpagedpaintdevice.h
#include <qpagedpaintdevice.h>
#include <QtGui>

// QPagedPaintDevice is pure virtual: true
//  header block end

//  main block begin
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagedpaintdevice.h:246
// [8] QPageLayout devicePageLayout()
extern "C"
void* callback_ZNK17QPagedPaintDevice16devicePageLayoutEv = 0;
extern "C" void set_callback_ZNK17QPagedPaintDevice16devicePageLayoutEv(void*cbfn)
{ callback_ZNK17QPagedPaintDevice16devicePageLayoutEv = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagedpaintdevice.h:247
// [8] QPageLayout & devicePageLayout()
extern "C"
void* callback_ZN17QPagedPaintDevice16devicePageLayoutEv = 0;
extern "C" void set_callback_ZN17QPagedPaintDevice16devicePageLayoutEv(void*cbfn)
{ callback_ZN17QPagedPaintDevice16devicePageLayoutEv = cbfn; }

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagedpaintdevice.h:58
// [-2] void QPagedPaintDevice()
extern "C"
void* C_ZN17QPagedPaintDeviceC1Ev() {
  return 0; // new QPagedPaintDevice();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagedpaintdevice.h:59
// [-2] void ~QPagedPaintDevice()
extern "C"
void C_ZN17QPagedPaintDeviceD1Ev(void *this_) {
  delete (QPagedPaintDevice*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagedpaintdevice.h:61
// [1] bool newPage()
extern "C"
bool C_ZN17QPagedPaintDevice7newPageEv(void *this_) {
  return (bool)((QPagedPaintDevice*)this_)->newPage();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagedpaintdevice.h:219
// [1] bool setPageLayout(const class QPageLayout &)
extern "C"
bool C_ZN17QPagedPaintDevice13setPageLayoutERK11QPageLayout(void *this_, const QPageLayout & pageLayout) {
  return (bool)((QPagedPaintDevice*)this_)->setPageLayout(pageLayout);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagedpaintdevice.h:220
// [1] bool setPageSize(const class QPageSize &)
extern "C"
bool C_ZN17QPagedPaintDevice11setPageSizeERK9QPageSize(void *this_, const QPageSize & pageSize) {
  return (bool)((QPagedPaintDevice*)this_)->setPageSize(pageSize);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagedpaintdevice.h:221
// [1] bool setPageOrientation(class QPageLayout::Orientation)
extern "C"
bool C_ZN17QPagedPaintDevice18setPageOrientationEN11QPageLayout11OrientationE(void *this_, QPageLayout::Orientation orientation) {
  return (bool)((QPagedPaintDevice*)this_)->setPageOrientation(orientation);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagedpaintdevice.h:222
// [1] bool setPageMargins(const class QMarginsF &)
extern "C"
bool C_ZN17QPagedPaintDevice14setPageMarginsERK9QMarginsF(void *this_, const QMarginsF & margins) {
  return (bool)((QPagedPaintDevice*)this_)->setPageMargins(margins);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagedpaintdevice.h:223
// [1] bool setPageMargins(const class QMarginsF &, class QPageLayout::Unit)
extern "C"
bool C_ZN17QPagedPaintDevice14setPageMarginsERK9QMarginsFN11QPageLayout4UnitE(void *this_, const QMarginsF & margins, QPageLayout::Unit units) {
  return (bool)((QPagedPaintDevice*)this_)->setPageMargins(margins, units);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagedpaintdevice.h:224
// [8] QPageLayout pageLayout()
extern "C"
void* C_ZNK17QPagedPaintDevice10pageLayoutEv(void *this_) {
  auto rv = ((QPagedPaintDevice*)this_)->pageLayout();
return new QPageLayout(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagedpaintdevice.h:226
// [-2] void setPageSize(enum QPagedPaintDevice::PageSize)
extern "C"
void C_ZN17QPagedPaintDevice11setPageSizeENS_8PageSizeE(void *this_, QPagedPaintDevice::PageSize size) {
  ((QPagedPaintDevice*)this_)->setPageSize(size);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagedpaintdevice.h:227
// [4] QPagedPaintDevice::PageSize pageSize()
extern "C"
QPagedPaintDevice::PageSize C_ZNK17QPagedPaintDevice8pageSizeEv(void *this_) {
  return (QPagedPaintDevice::PageSize)((QPagedPaintDevice*)this_)->pageSize();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagedpaintdevice.h:229
// [-2] void setPageSizeMM(const class QSizeF &)
extern "C"
void C_ZN17QPagedPaintDevice13setPageSizeMMERK6QSizeF(void *this_, const QSizeF & size) {
  ((QPagedPaintDevice*)this_)->setPageSizeMM(size);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagedpaintdevice.h:230
// [16] QSizeF pageSizeMM()
extern "C"
void* C_ZNK17QPagedPaintDevice10pageSizeMMEv(void *this_) {
  auto rv = ((QPagedPaintDevice*)this_)->pageSizeMM();
return new QSizeF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagedpaintdevice.h:241
// [32] QPagedPaintDevice::Margins margins()
extern "C"
void C_ZNK17QPagedPaintDevice7marginsEv(void *this_) {
  auto rv = ((QPagedPaintDevice*)this_)->margins();
/*return rv;*/
}
//  main block end
