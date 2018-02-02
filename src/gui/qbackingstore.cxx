//  header block begin
// /usr/include/qt/QtGui/qbackingstore.h
#include <qbackingstore.h>
#include <QtGui>
#include "callback_inherit.h"

// QBackingStore is pure virtual: false
// QBackingStore has virtual projected: false
//  header block end

//  main block begin

class MyQBackingStore : public QBackingStore {
public:
  virtual ~MyQBackingStore() {}
// void QBackingStore(class QWindow *)
MyQBackingStore(QWindow * window) : QBackingStore(window) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbackingstore.h:62
// [-2] void QBackingStore(class QWindow *)
extern "C"
void* C_ZN13QBackingStoreC2EP7QWindow(QWindow * window) {
  return  new QBackingStore(window);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbackingstore.h:63
// [-2] void ~QBackingStore()
extern "C"
void C_ZN13QBackingStoreD2Ev(void *this_) {
  delete (QBackingStore*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbackingstore.h:65
// [8] QWindow * window()
extern "C"
void* C_ZNK13QBackingStore6windowEv(void *this_) {
  return (void*)((QBackingStore*)this_)->window();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbackingstore.h:67
// [8] QPaintDevice * paintDevice()
extern "C"
void* C_ZN13QBackingStore11paintDeviceEv(void *this_) {
  return (void*)((QBackingStore*)this_)->paintDevice();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbackingstore.h:69
// [-2] void flush(const class QRegion &, class QWindow *, const class QPoint &)
extern "C"
void C_ZN13QBackingStore5flushERK7QRegionP7QWindowRK6QPoint(void *this_, QRegion* region, QWindow * window, QPoint* offset) {
  ((QBackingStore*)this_)->flush(*region, window, *offset);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbackingstore.h:71
// [-2] void resize(const class QSize &)
extern "C"
void C_ZN13QBackingStore6resizeERK5QSize(void *this_, QSize* size) {
  ((QBackingStore*)this_)->resize(*size);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbackingstore.h:72
// [8] QSize size()
extern "C"
void* C_ZNK13QBackingStore4sizeEv(void *this_) {
  auto rv = ((QBackingStore*)this_)->size();
return new QSize(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbackingstore.h:74
// [1] bool scroll(const class QRegion &, int, int)
extern "C"
bool C_ZN13QBackingStore6scrollERK7QRegionii(void *this_, QRegion* area, int dx, int dy) {
  return (bool)((QBackingStore*)this_)->scroll(*area, dx, dy);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbackingstore.h:76
// [-2] void beginPaint(const class QRegion &)
extern "C"
void C_ZN13QBackingStore10beginPaintERK7QRegion(void *this_, QRegion* arg0) {
  ((QBackingStore*)this_)->beginPaint(*arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbackingstore.h:77
// [-2] void endPaint()
extern "C"
void C_ZN13QBackingStore8endPaintEv(void *this_) {
  ((QBackingStore*)this_)->endPaint();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbackingstore.h:79
// [-2] void setStaticContents(const class QRegion &)
extern "C"
void C_ZN13QBackingStore17setStaticContentsERK7QRegion(void *this_, QRegion* region) {
  ((QBackingStore*)this_)->setStaticContents(*region);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbackingstore.h:80
// [8] QRegion staticContents()
extern "C"
void* C_ZNK13QBackingStore14staticContentsEv(void *this_) {
  auto rv = ((QBackingStore*)this_)->staticContents();
return new QRegion(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbackingstore.h:81
// [1] bool hasStaticContents()
extern "C"
bool C_ZNK13QBackingStore17hasStaticContentsEv(void *this_) {
  return (bool)((QBackingStore*)this_)->hasStaticContents();
}
//  main block end
