//  header block begin
// /usr/include/qt/QtGui/qdrag.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qdrag.h>
#include <QtGui>
#include "callback_inherit.h"

// QDrag is pure virtual: false
// QDrag has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQDrag_t {
  QByteArrayData data[1];
  char stringdata0[8];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQDrag_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQDrag_t qt_meta_stringdata_MyQDrag = {
   {
  QT_MOC_LITERAL(0, 0, 7), // "MyQDrag"
  },
  "MyQDrag"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQDrag[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQDrag : public QDrag {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QDrag::staticMetaObject,
  qt_meta_stringdata_MyQDrag.data,
  qt_meta_data_MyQDrag,
  qt_static_metacall, nullptr, nullptr
}};
virtual const QMetaObject *metaObject() const override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"metaObject", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (QMetaObject*)irv; }
  return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject; 
}
virtual void *qt_metacast(const char *_clname) override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacast", &handled, 1, (uint64_t)_clname, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (void*)irv; }
  if (!_clname) return nullptr;
  if (!strcmp(_clname, qt_meta_stringdata_MyQDrag.stringdata0))
      return static_cast<void*>(this);
  return QDrag::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QDrag::qt_metacall(_c, _id, _a);
   int handled = 0;
   auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacall", &handled, 3, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (int)irv; }
   return _id;
  }
/*static*/ inline QString tr(const char *s, const char *c = nullptr, int n = -1)
{ return staticMetaObject.tr(s, c, n); }
/*static*/ inline QString trUtf8(const char *s, const char *c = nullptr, int n = -1)
 { return staticMetaObject.tr(s, c, n); }
Q_DECL_HIDDEN_STATIC_METACALL static void qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a){
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)_o, (char*)"qt_static_metacall", &handled, 4, (uint64_t)_o, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0);
}
private: struct QPrivateSignal {};

public:
  virtual ~MyQDrag() {}
// void QDrag(QObject *)
MyQDrag(QObject * dragSource) : QDrag(dragSource) {}
};
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qdrag.h:59
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK5QDrag10metaObjectEv(void *this_) {
  return (void*)((QDrag*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qdrag.h:59
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN5QDrag11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QDrag*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qdrag.h:59
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN5QDrag11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QDrag*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qdrag.h:59
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN5QDrag2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QDrag::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qdrag.h:59
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN5QDrag6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QDrag::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qdrag.h:62
// [-2] void QDrag(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN5QDragC2EP7QObject(QObject * dragSource) {
  return  new MyQDrag(dragSource);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qdrag.h:63
// [-2] void ~QDrag()
extern "C" Q_DECL_EXPORT
void C_ZN5QDragD2Ev(void *this_) {
  delete (QDrag*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qdrag.h:65
// [-2] void setMimeData(QMimeData *)
extern "C" Q_DECL_EXPORT
void C_ZN5QDrag11setMimeDataEP9QMimeData(void *this_, QMimeData * data) {
  ((QDrag*)this_)->setMimeData(data);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qdrag.h:66
// [8] QMimeData * mimeData()
extern "C" Q_DECL_EXPORT
void* C_ZNK5QDrag8mimeDataEv(void *this_) {
  return (void*)((QDrag*)this_)->mimeData();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qdrag.h:68
// [-2] void setPixmap(const QPixmap &)
extern "C" Q_DECL_EXPORT
void C_ZN5QDrag9setPixmapERK7QPixmap(void *this_, QPixmap* arg0) {
  ((QDrag*)this_)->setPixmap(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qdrag.h:69
// [32] QPixmap pixmap()
extern "C" Q_DECL_EXPORT
void* C_ZNK5QDrag6pixmapEv(void *this_) {
  auto rv = ((QDrag*)this_)->pixmap();
return new QPixmap(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qdrag.h:71
// [-2] void setHotSpot(const QPoint &)
extern "C" Q_DECL_EXPORT
void C_ZN5QDrag10setHotSpotERK6QPoint(void *this_, QPoint* hotspot) {
  ((QDrag*)this_)->setHotSpot(*hotspot);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qdrag.h:72
// [8] QPoint hotSpot()
extern "C" Q_DECL_EXPORT
void* C_ZNK5QDrag7hotSpotEv(void *this_) {
  auto rv = ((QDrag*)this_)->hotSpot();
return new QPoint(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qdrag.h:74
// [8] QObject * source()
extern "C" Q_DECL_EXPORT
void* C_ZNK5QDrag6sourceEv(void *this_) {
  return (void*)((QDrag*)this_)->source();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qdrag.h:75
// [8] QObject * target()
extern "C" Q_DECL_EXPORT
void* C_ZNK5QDrag6targetEv(void *this_) {
  return (void*)((QDrag*)this_)->target();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qdrag.h:77
// [4] Qt::DropAction start(Qt::DropActions)
extern "C" Q_DECL_EXPORT
Qt::DropAction C_ZN5QDrag5startE6QFlagsIN2Qt10DropActionEE(void *this_, QFlags<Qt::DropAction> supportedActions) {
  return (Qt::DropAction)((QDrag*)this_)->start(supportedActions);
}

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtGui/qdrag.h:78
// [4] Qt::DropAction exec(Qt::DropActions)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
Qt::DropAction C_ZN5QDrag4execE6QFlagsIN2Qt10DropActionEE(void *this_, QFlags<Qt::DropAction> supportedActions) {
  return (Qt::DropAction)((QDrag*)this_)->exec(supportedActions);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtGui/qdrag.h:79
// [4] Qt::DropAction exec(Qt::DropActions, Qt::DropAction)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
Qt::DropAction C_ZN5QDrag4execE6QFlagsIN2Qt10DropActionEES2_(void *this_, QFlags<Qt::DropAction> supportedActions, Qt::DropAction defaultAction) {
  return (Qt::DropAction)((QDrag*)this_)->exec(supportedActions, defaultAction);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qdrag.h:81
// [-2] void setDragCursor(const QPixmap &, Qt::DropAction)
extern "C" Q_DECL_EXPORT
void C_ZN5QDrag13setDragCursorERK7QPixmapN2Qt10DropActionE(void *this_, QPixmap* cursor, Qt::DropAction action) {
  ((QDrag*)this_)->setDragCursor(*cursor, action);
}

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtGui/qdrag.h:82
// [32] QPixmap dragCursor(Qt::DropAction)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZNK5QDrag10dragCursorEN2Qt10DropActionE(void *this_, Qt::DropAction action) {
  auto rv = ((QDrag*)this_)->dragCursor(action);
return new QPixmap(rv);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qdrag.h:84
// [4] Qt::DropActions supportedActions()
extern "C" Q_DECL_EXPORT
Qt::DropActions C_ZNK5QDrag16supportedActionsEv(void *this_) {
  return (Qt::DropActions)((QDrag*)this_)->supportedActions();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qdrag.h:85
// [4] Qt::DropAction defaultAction()
extern "C" Q_DECL_EXPORT
Qt::DropAction C_ZNK5QDrag13defaultActionEv(void *this_) {
  return (Qt::DropAction)((QDrag*)this_)->defaultAction();
}

// Public static Visibility=Default Availability=Available
// since 5.7
// /usr/include/qt/QtGui/qdrag.h:87
// [-2] void cancel()
#if QT_VERSION >= 0x050700
extern "C" Q_DECL_EXPORT
void C_ZN5QDrag6cancelEv() {
  QDrag::cancel();
}
#endif // QT_VERSION >= 0x050700

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qdrag.h:90
// [-2] void actionChanged(Qt::DropAction)
extern "C" Q_DECL_EXPORT
void C_ZN5QDrag13actionChangedEN2Qt10DropActionE(void *this_, Qt::DropAction action) {
  ((QDrag*)this_)->actionChanged(action);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qdrag.h:91
// [-2] void targetChanged(QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN5QDrag13targetChangedEP7QObject(void *this_, QObject * newTarget) {
  ((QDrag*)this_)->targetChanged(newTarget);
}

//  main block end
