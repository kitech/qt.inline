// /usr/include/qt/QtGui/qpaintdevicewindow.h
#include <qpaintdevicewindow.h>
#include <QtGui>

// virtual
// /usr/include/qt/QtGui/qpaintdevicewindow.h:53
// const QMetaObject * metaObject()
extern "C"
void C_ZNK18QPaintDeviceWindow10metaObjectEv(void *this_) {
  /*return*/ ((QPaintDeviceWindow*)this_)->metaObject();
}
// /usr/include/qt/QtGui/qpaintdevicewindow.h:57
// void update(const class QRect &)
extern "C"
void C_ZN18QPaintDeviceWindow6updateERK5QRect(void *this_, const QRect & rect) {
  ((QPaintDeviceWindow*)this_)->update(rect);
}
// /usr/include/qt/QtGui/qpaintdevicewindow.h:58
// void update(const class QRegion &)
extern "C"
void C_ZN18QPaintDeviceWindow6updateERK7QRegion(void *this_, const QRegion & region) {
  ((QPaintDeviceWindow*)this_)->update(region);
}
// /usr/include/qt/QtGui/qpaintdevicewindow.h:65
// void update()
extern "C"
void C_ZN18QPaintDeviceWindow6updateEv(void *this_) {
  ((QPaintDeviceWindow*)this_)->update();
}