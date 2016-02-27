// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtGui/qdrag.h
// dst-file: /src/gui/qdrag.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qdrag.h>


#include <qnamespace.h>
#include <qpixmap.h>
#include <qpoint.h>
// <= header block end

// main block begin =>
void __keep_qdrag_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QDrag_Class_Size()
{
  return sizeof(QDrag);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qdrag.h', line 71, column 20>
//   // proto:  Qt::DropAction QDrag::exec(Qt::DropActions supportedActions);
// _ZN5QDrag4execE6QFlagsIN2Qt10DropActionEE exec(Qt::DropActions)
extern "C"
Qt::DropAction
C_ZN5QDrag4execE6QFlagsIN2Qt10DropActionEE(void *qthis,
Qt::DropActions* arg1) {
  auto ret =
  ((QDrag*)qthis)->exec(*((Qt::DropActions*)arg1));
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qdrag.h', line 68, column 14>
//   // proto:  QObject * QDrag::target();
// _ZNK5QDrag6targetEv target()
extern "C"
void*
C_ZNK5QDrag6targetEv(void *qthis) {
  auto ret =
  ((QDrag*)qthis)->target();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qdrag.h', line 59, column 16>
//   // proto:  QMimeData * QDrag::mimeData();
// _ZNK5QDrag8mimeDataEv mimeData()
extern "C"
void*
C_ZNK5QDrag8mimeDataEv(void *qthis) {
  auto ret =
  ((QDrag*)qthis)->mimeData();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qdrag.h', line 55, column 14>
//   // proto:  void QDrag::QDrag(QObject * dragSource);
extern "C"
QDrag*
C_ZN5QDragC2EP7QObject(QObject * arg1) {
  auto ret = new QDrag(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qdrag.h', line 75, column 13>
//   // proto:  QPixmap QDrag::dragCursor(Qt::DropAction action);
// _ZNK5QDrag10dragCursorEN2Qt10DropActionE dragCursor(Qt::DropAction)
extern "C"
QPixmap*
C_ZNK5QDrag10dragCursorEN2Qt10DropActionE(void *qthis,
Qt::DropAction* arg1) {
  auto ret =
  ((QDrag*)qthis)->dragCursor(*((Qt::DropAction*)arg1));
  return new QPixmap(ret); // 5
}
//   // proto:  void QDrag::~QDrag();
extern "C"
void C_ZN5QDragD2Ev(void *qthis) {
  delete (QDrag*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qdrag.h', line 72, column 20>
//   // proto:  Qt::DropAction QDrag::exec(Qt::DropActions supportedActions, Qt::DropAction defaultAction);
// _ZN5QDrag4execE6QFlagsIN2Qt10DropActionEES2_ exec(Qt::DropActions, Qt::DropAction)
extern "C"
Qt::DropAction
C_ZN5QDrag4execE6QFlagsIN2Qt10DropActionEES2_(void *qthis,
Qt::DropActions* arg1,
Qt::DropAction* arg2) {
  auto ret =
  ((QDrag*)qthis)->exec(*((Qt::DropActions*)arg1),
*((Qt::DropAction*)arg2));
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qdrag.h', line 74, column 10>
//   // proto:  void QDrag::setDragCursor(const QPixmap & cursor, Qt::DropAction action);
// _ZN5QDrag13setDragCursorERK7QPixmapN2Qt10DropActionE setDragCursor(const class QPixmap &, Qt::DropAction)
extern "C"
void
C_ZN5QDrag13setDragCursorERK7QPixmapN2Qt10DropActionE(void *qthis,
const QPixmap* arg1,
Qt::DropAction* arg2) {
  ((QDrag*)qthis)->setDragCursor(*((const QPixmap*)arg1),
*((Qt::DropAction*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qdrag.h', line 78, column 20>
//   // proto:  Qt::DropAction QDrag::defaultAction();
// _ZNK5QDrag13defaultActionEv defaultAction()
extern "C"
Qt::DropAction
C_ZNK5QDrag13defaultActionEv(void *qthis) {
  auto ret =
  ((QDrag*)qthis)->defaultAction();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qdrag.h', line 64, column 10>
//   // proto:  void QDrag::setHotSpot(const QPoint & hotspot);
// _ZN5QDrag10setHotSpotERK6QPoint setHotSpot(const class QPoint &)
extern "C"
void
C_ZN5QDrag10setHotSpotERK6QPoint(void *qthis,
const QPoint* arg1) {
  ((QDrag*)qthis)->setHotSpot(*((const QPoint*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qdrag.h', line 52, column 5>
//   // proto:  const QMetaObject * QDrag::metaObject();
// _ZNK5QDrag10metaObjectEv metaObject()
extern "C"
void*
C_ZNK5QDrag10metaObjectEv(void *qthis) {
  auto ret =
  ((QDrag*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qdrag.h', line 58, column 10>
//   // proto:  void QDrag::setMimeData(QMimeData * data);
// _ZN5QDrag11setMimeDataEP9QMimeData setMimeData(class QMimeData *)
extern "C"
void
C_ZN5QDrag11setMimeDataEP9QMimeData(void *qthis,
QMimeData * arg1) {
  ((QDrag*)qthis)->setMimeData(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qdrag.h', line 62, column 13>
//   // proto:  QPixmap QDrag::pixmap();
// _ZNK5QDrag6pixmapEv pixmap()
extern "C"
QPixmap*
C_ZNK5QDrag6pixmapEv(void *qthis) {
  auto ret =
  ((QDrag*)qthis)->pixmap();
  return new QPixmap(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qdrag.h', line 77, column 21>
//   // proto:  Qt::DropActions QDrag::supportedActions();
// _ZNK5QDrag16supportedActionsEv supportedActions()
extern "C"
QFlags<Qt::DropAction>*
C_ZNK5QDrag16supportedActionsEv(void *qthis) {
  auto ret =
  ((QDrag*)qthis)->supportedActions();
  return new QFlags<Qt::DropAction>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qdrag.h', line 65, column 12>
//   // proto:  QPoint QDrag::hotSpot();
// _ZNK5QDrag7hotSpotEv hotSpot()
extern "C"
QPoint*
C_ZNK5QDrag7hotSpotEv(void *qthis) {
  auto ret =
  ((QDrag*)qthis)->hotSpot();
  return new QPoint(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qdrag.h', line 81, column 10>
//   // proto:  void QDrag::actionChanged(Qt::DropAction action);
// _ZN5QDrag13actionChangedEN2Qt10DropActionE actionChanged(Qt::DropAction)
extern "C"
void
C_ZN5QDrag13actionChangedEN2Qt10DropActionE(void *qthis,
Qt::DropAction* arg1) {
  ((QDrag*)qthis)->actionChanged(*((Qt::DropAction*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qdrag.h', line 61, column 10>
//   // proto:  void QDrag::setPixmap(const QPixmap & );
// _ZN5QDrag9setPixmapERK7QPixmap setPixmap(const class QPixmap &)
extern "C"
void
C_ZN5QDrag9setPixmapERK7QPixmap(void *qthis,
const QPixmap* arg1) {
  ((QDrag*)qthis)->setPixmap(*((const QPixmap*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qdrag.h', line 67, column 14>
//   // proto:  QObject * QDrag::source();
// _ZNK5QDrag6sourceEv source()
extern "C"
void*
C_ZNK5QDrag6sourceEv(void *qthis) {
  auto ret =
  ((QDrag*)qthis)->source();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qdrag.h', line 82, column 10>
//   // proto:  void QDrag::targetChanged(QObject * newTarget);
// _ZN5QDrag13targetChangedEP7QObject targetChanged(class QObject *)
extern "C"
void
C_ZN5QDrag13targetChangedEP7QObject(void *qthis,
QObject * arg1) {
  ((QDrag*)qthis)->targetChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qdrag.h', line 70, column 20>
//   // proto:  Qt::DropAction QDrag::start(Qt::DropActions supportedActions);
// _ZN5QDrag5startE6QFlagsIN2Qt10DropActionEE start(Qt::DropActions)
extern "C"
Qt::DropAction
C_ZN5QDrag5startE6QFlagsIN2Qt10DropActionEE(void *qthis,
Qt::DropActions* arg1) {
  auto ret =
  ((QDrag*)qthis)->start(*((Qt::DropActions*)arg1));
  return ret; // 0 TypeKind.ENUM
}
// <= ext block end

// body block begin =>
// QDrag_SlotProxy here
class QDrag_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QDrag_SlotProxy():QObject(){}

public slots:
  // targetChanged(class QObject *)
  void slot_proxy_func__ZN5QDrag13targetChangedEP7QObject(QObject * arg0);
public:
  void (*slot_func__ZN5QDrag13targetChangedEP7QObject)(void* rsfptr, QObject * arg0) = NULL;
public slots:
  // actionChanged(Qt::DropAction)
  void slot_proxy_func__ZN5QDrag13actionChangedEN2Qt10DropActionE(Qt::DropAction arg0);
public:
  void (*slot_func__ZN5QDrag13actionChangedEN2Qt10DropActionE)(void* rsfptr, Qt::DropAction arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/gui/qdrag.moc"

extern "C" {
  QDrag_SlotProxy* QDrag_SlotProxy_new()
  {
    return new QDrag_SlotProxy();
  }
};

void QDrag_SlotProxy::slot_proxy_func__ZN5QDrag13targetChangedEP7QObject(QObject * arg0) {
  if (this->slot_func__ZN5QDrag13targetChangedEP7QObject != NULL) {
    // do smth...
    this->slot_func__ZN5QDrag13targetChangedEP7QObject(this->rsfptr, arg0);
  }
}
extern "C"
void* QDrag_SlotProxy_connect__ZN5QDrag13targetChangedEP7QObject(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QDrag_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN5QDrag13targetChangedEP7QObject = (decltype(that->slot_func__ZN5QDrag13targetChangedEP7QObject))ffifptr;
  QObject::connect((QDrag*)sender, SIGNAL(targetChanged(class QObject *)), that, SLOT(slot_proxy_func__ZN5QDrag13targetChangedEP7QObject(QObject * arg0)));
  return that;
}
extern "C"
void QDrag_SlotProxy_disconnect__ZN5QDrag13targetChangedEP7QObject(QDrag_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QDrag_SlotProxy::slot_proxy_func__ZN5QDrag13actionChangedEN2Qt10DropActionE(Qt::DropAction arg0) {
  if (this->slot_func__ZN5QDrag13actionChangedEN2Qt10DropActionE != NULL) {
    // do smth...
    this->slot_func__ZN5QDrag13actionChangedEN2Qt10DropActionE(this->rsfptr, arg0);
  }
}
extern "C"
void* QDrag_SlotProxy_connect__ZN5QDrag13actionChangedEN2Qt10DropActionE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QDrag_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN5QDrag13actionChangedEN2Qt10DropActionE = (decltype(that->slot_func__ZN5QDrag13actionChangedEN2Qt10DropActionE))ffifptr;
  QObject::connect((QDrag*)sender, SIGNAL(actionChanged(Qt::DropAction)), that, SLOT(slot_proxy_func__ZN5QDrag13actionChangedEN2Qt10DropActionE(Qt::DropAction arg0)));
  return that;
}
extern "C"
void QDrag_SlotProxy_disconnect__ZN5QDrag13actionChangedEN2Qt10DropActionE(QDrag_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

