// /usr/include/qt/QtGui/qdrag.h
#include <qdrag.h>
#include <QtGui>

// virtual
// /usr/include/qt/QtGui/qdrag.h:58
// const QMetaObject * metaObject()
extern "C"
void C_ZNK5QDrag10metaObjectEv(void *this_) {
  /*return*/ ((QDrag*)this_)->metaObject();
}
// /usr/include/qt/QtGui/qdrag.h:61
// void QDrag(class QObject *)
extern "C"
void* C_ZN5QDragC1EP7QObject(QObject * dragSource) {
  return new QDrag(dragSource);
}
// virtual
// /usr/include/qt/QtGui/qdrag.h:62
// void ~QDrag()
extern "C"
void C_ZN5QDragD1Ev(void *this_) {
  delete (QDrag*)(this_);
}
// /usr/include/qt/QtGui/qdrag.h:64
// void setMimeData(class QMimeData *)
extern "C"
void C_ZN5QDrag11setMimeDataEP9QMimeData(void *this_, QMimeData * data) {
  ((QDrag*)this_)->setMimeData(data);
}
// /usr/include/qt/QtGui/qdrag.h:65
// QMimeData * mimeData()
extern "C"
void C_ZNK5QDrag8mimeDataEv(void *this_) {
  /*return*/ ((QDrag*)this_)->mimeData();
}
// /usr/include/qt/QtGui/qdrag.h:67
// void setPixmap(const class QPixmap &)
extern "C"
void C_ZN5QDrag9setPixmapERK7QPixmap(void *this_, const QPixmap & a0) {
  ((QDrag*)this_)->setPixmap(a0);
}
// /usr/include/qt/QtGui/qdrag.h:68
// QPixmap pixmap()
extern "C"
void C_ZNK5QDrag6pixmapEv(void *this_) {
  /*return*/ ((QDrag*)this_)->pixmap();
}
// /usr/include/qt/QtGui/qdrag.h:70
// void setHotSpot(const class QPoint &)
extern "C"
void C_ZN5QDrag10setHotSpotERK6QPoint(void *this_, const QPoint & hotspot) {
  ((QDrag*)this_)->setHotSpot(hotspot);
}
// /usr/include/qt/QtGui/qdrag.h:71
// QPoint hotSpot()
extern "C"
void C_ZNK5QDrag7hotSpotEv(void *this_) {
  /*return*/ ((QDrag*)this_)->hotSpot();
}
// /usr/include/qt/QtGui/qdrag.h:73
// QObject * source()
extern "C"
void C_ZNK5QDrag6sourceEv(void *this_) {
  /*return*/ ((QDrag*)this_)->source();
}
// /usr/include/qt/QtGui/qdrag.h:74
// QObject * target()
extern "C"
void C_ZNK5QDrag6targetEv(void *this_) {
  /*return*/ ((QDrag*)this_)->target();
}
// /usr/include/qt/QtGui/qdrag.h:76
// Qt::DropAction start(Qt::DropActions)
extern "C"
void C_ZN5QDrag5startE6QFlagsIN2Qt10DropActionEE(void *this_, QFlags<Qt::DropAction> supportedActions) {
  /*return*/ ((QDrag*)this_)->start(supportedActions);
}
// /usr/include/qt/QtGui/qdrag.h:77
// Qt::DropAction exec(Qt::DropActions)
extern "C"
void C_ZN5QDrag4execE6QFlagsIN2Qt10DropActionEE(void *this_, QFlags<Qt::DropAction> supportedActions) {
  /*return*/ ((QDrag*)this_)->exec(supportedActions);
}
// /usr/include/qt/QtGui/qdrag.h:78
// Qt::DropAction exec(Qt::DropActions, Qt::DropAction)
extern "C"
void C_ZN5QDrag4execE6QFlagsIN2Qt10DropActionEES2_(void *this_, QFlags<Qt::DropAction> supportedActions, Qt::DropAction defaultAction) {
  /*return*/ ((QDrag*)this_)->exec(supportedActions, defaultAction);
}
// /usr/include/qt/QtGui/qdrag.h:80
// void setDragCursor(const class QPixmap &, Qt::DropAction)
extern "C"
void C_ZN5QDrag13setDragCursorERK7QPixmapN2Qt10DropActionE(void *this_, const QPixmap & cursor, Qt::DropAction action) {
  ((QDrag*)this_)->setDragCursor(cursor, action);
}
// /usr/include/qt/QtGui/qdrag.h:81
// QPixmap dragCursor(Qt::DropAction)
extern "C"
void C_ZNK5QDrag10dragCursorEN2Qt10DropActionE(void *this_, Qt::DropAction action) {
  /*return*/ ((QDrag*)this_)->dragCursor(action);
}
// /usr/include/qt/QtGui/qdrag.h:83
// Qt::DropActions supportedActions()
extern "C"
void C_ZNK5QDrag16supportedActionsEv(void *this_) {
  /*return*/ ((QDrag*)this_)->supportedActions();
}
// /usr/include/qt/QtGui/qdrag.h:84
// Qt::DropAction defaultAction()
extern "C"
void C_ZNK5QDrag13defaultActionEv(void *this_) {
  /*return*/ ((QDrag*)this_)->defaultAction();
}
// static
// /usr/include/qt/QtGui/qdrag.h:86
// void cancel()
extern "C"
void C_ZN5QDrag6cancelEv() {
  QDrag::cancel();
}
// /usr/include/qt/QtGui/qdrag.h:89
// void actionChanged(Qt::DropAction)
extern "C"
void C_ZN5QDrag13actionChangedEN2Qt10DropActionE(void *this_, Qt::DropAction action) {
  ((QDrag*)this_)->actionChanged(action);
}
// /usr/include/qt/QtGui/qdrag.h:90
// void targetChanged(class QObject *)
extern "C"
void C_ZN5QDrag13targetChangedEP7QObject(void *this_, QObject * newTarget) {
  ((QDrag*)this_)->targetChanged(newTarget);
}