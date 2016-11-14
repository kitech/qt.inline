// /usr/include/qt/QtGui/qbackingstore.h
#include <qbackingstore.h>
#include <QtGui>

// /usr/include/qt/QtGui/qbackingstore.h:61
// void QBackingStore(class QWindow *)
extern "C"
void* C_ZN13QBackingStoreC1EP7QWindow(QWindow * window) {
  return new QBackingStore(window);
}
// /usr/include/qt/QtGui/qbackingstore.h:62
// void ~QBackingStore()
extern "C"
void C_ZN13QBackingStoreD1Ev(void *this_) {
  delete (QBackingStore*)(this_);
}
// /usr/include/qt/QtGui/qbackingstore.h:64
// QWindow * window()
extern "C"
void C_ZNK13QBackingStore6windowEv(void *this_) {
  /*return*/ ((QBackingStore*)this_)->window();
}
// /usr/include/qt/QtGui/qbackingstore.h:66
// QPaintDevice * paintDevice()
extern "C"
void C_ZN13QBackingStore11paintDeviceEv(void *this_) {
  /*return*/ ((QBackingStore*)this_)->paintDevice();
}
// /usr/include/qt/QtGui/qbackingstore.h:70
// void flush(const class QRegion &, class QWindow *, const class QPoint &)
extern "C"
void C_ZN13QBackingStore5flushERK7QRegionP7QWindowRK6QPoint(void *this_, const QRegion & region, QWindow * window, const QPoint & offset) {
  ((QBackingStore*)this_)->flush(region, window, offset);
}
// /usr/include/qt/QtGui/qbackingstore.h:72
// void resize(const class QSize &)
extern "C"
void C_ZN13QBackingStore6resizeERK5QSize(void *this_, const QSize & size) {
  ((QBackingStore*)this_)->resize(size);
}
// /usr/include/qt/QtGui/qbackingstore.h:73
// QSize size()
extern "C"
void C_ZNK13QBackingStore4sizeEv(void *this_) {
  /*return*/ ((QBackingStore*)this_)->size();
}
// /usr/include/qt/QtGui/qbackingstore.h:75
// bool scroll(const class QRegion &, int, int)
extern "C"
void C_ZN13QBackingStore6scrollERK7QRegionii(void *this_, const QRegion & area, int dx, int dy) {
  /*return*/ ((QBackingStore*)this_)->scroll(area, dx, dy);
}
// /usr/include/qt/QtGui/qbackingstore.h:77
// void beginPaint(const class QRegion &)
extern "C"
void C_ZN13QBackingStore10beginPaintERK7QRegion(void *this_, const QRegion & a0) {
  ((QBackingStore*)this_)->beginPaint(a0);
}
// /usr/include/qt/QtGui/qbackingstore.h:78
// void endPaint()
extern "C"
void C_ZN13QBackingStore8endPaintEv(void *this_) {
  ((QBackingStore*)this_)->endPaint();
}
// /usr/include/qt/QtGui/qbackingstore.h:80
// void setStaticContents(const class QRegion &)
extern "C"
void C_ZN13QBackingStore17setStaticContentsERK7QRegion(void *this_, const QRegion & region) {
  ((QBackingStore*)this_)->setStaticContents(region);
}
// /usr/include/qt/QtGui/qbackingstore.h:81
// QRegion staticContents()
extern "C"
void C_ZNK13QBackingStore14staticContentsEv(void *this_) {
  /*return*/ ((QBackingStore*)this_)->staticContents();
}
// /usr/include/qt/QtGui/qbackingstore.h:82
// bool hasStaticContents()
extern "C"
void C_ZNK13QBackingStore17hasStaticContentsEv(void *this_) {
  /*return*/ ((QBackingStore*)this_)->hasStaticContents();
}
// /usr/include/qt/QtGui/qbackingstore.h:84
// QPlatformBackingStore * handle()
extern "C"
void C_ZNK13QBackingStore6handleEv(void *this_) {
  /*return*/ ((QBackingStore*)this_)->handle();
}