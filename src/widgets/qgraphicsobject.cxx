//  header block begin

#ifndef QT_MINIMAL
#if QT_CONFIG(graphicsview)
// since 0x040600
// /usr/include/qt/QtWidgets/qgraphicsitem.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgraphicsitem.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsObject is pure virtual: false
// QGraphicsObject has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGraphicsObject_t {
  QByteArrayData data[1];
  char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGraphicsObject_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGraphicsObject_t qt_meta_stringdata_MyQGraphicsObject = {
   {
  QT_MOC_LITERAL(0, 0, 17), // "MyQGraphicsObject"
  },
  "MyQGraphicsObject"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGraphicsObject[] = {
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
class Q_DECL_EXPORT MyQGraphicsObject : public QGraphicsObject {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QGraphicsObject::staticMetaObject,
  qt_meta_stringdata_MyQGraphicsObject.data,
  qt_meta_data_MyQGraphicsObject,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQGraphicsObject.stringdata0))
      return static_cast<void*>(this);
  return QGraphicsObject::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QGraphicsObject::qt_metacall(_c, _id, _a);
   if (_id < 0 ) return _id;
   if (qt_metacall_fnptr != 0) {
      return qt_metacall_fnptr(this, _c, _id, _a);
   }
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
  void* (*qt_metacast_fnptr)(void*, char*) = nullptr;
  int (*qt_metacall_fnptr)(QObject *, QMetaObject::Call, int, void **) = nullptr;
public:
  virtual ~MyQGraphicsObject() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [32] QRectF boundingRect()
  virtual QRectF boundingRect() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"boundingRect", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QRectF){};}
    auto prv = (QRectF*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QRectF
    } else {
    return (QRectF){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void paint(QPainter *, const QStyleOptionGraphicsItem *, QWidget *)
  virtual void paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paint", &handled, 3, (uint64_t)painter, (uint64_t)option, (uint64_t)widget, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QGraphicsObject::paint(painter, option, widget);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * ev)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)ev, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QGraphicsObject::event(ev);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QGraphicsObject_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQGraphicsObject* qo = (MyQGraphicsObject*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:324
// [32] QRectF boundingRect()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:344
// [-2] void paint(QPainter *, const QStyleOptionGraphicsItem *, QWidget *)
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:591
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN15QGraphicsObject5eventEP6QEvent(void *this_, QEvent * ev) {
  return (bool)((QGraphicsObject*)this_)->QGraphicsObject::event(ev);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:540
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QGraphicsObject10metaObjectEv(void *this_) {
  return (void*)((QGraphicsObject*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:540
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN15QGraphicsObject11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QGraphicsObject*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:540
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN15QGraphicsObject11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QGraphicsObject*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:540
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QGraphicsObject2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGraphicsObject::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:540
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QGraphicsObject6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGraphicsObject::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:562
// [-2] void ~QGraphicsObject()
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsObjectD2Ev(void *this_) {
  delete (QGraphicsObject*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:567
// [-2] void grabGesture(Qt::GestureType, Qt::GestureFlags)
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsObject11grabGestureEN2Qt11GestureTypeE6QFlagsINS0_11GestureFlagEE(void *this_, Qt::GestureType type_, QFlags<Qt::GestureFlag> flags) {
  ((QGraphicsObject*)this_)->grabGesture(type_, flags);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:568
// [-2] void ungrabGesture(Qt::GestureType)
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsObject13ungrabGestureEN2Qt11GestureTypeE(void *this_, Qt::GestureType type_) {
  ((QGraphicsObject*)this_)->ungrabGesture(type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:575
// [-2] void parentChanged()
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsObject13parentChangedEv(void *this_) {
  ((QGraphicsObject*)this_)->parentChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:576
// [-2] void opacityChanged()
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsObject14opacityChangedEv(void *this_) {
  ((QGraphicsObject*)this_)->opacityChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:577
// [-2] void visibleChanged()
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsObject14visibleChangedEv(void *this_) {
  ((QGraphicsObject*)this_)->visibleChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:578
// [-2] void enabledChanged()
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsObject14enabledChangedEv(void *this_) {
  ((QGraphicsObject*)this_)->enabledChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:579
// [-2] void xChanged()
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsObject8xChangedEv(void *this_) {
  ((QGraphicsObject*)this_)->xChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:580
// [-2] void yChanged()
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsObject8yChangedEv(void *this_) {
  ((QGraphicsObject*)this_)->yChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:581
// [-2] void zChanged()
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsObject8zChangedEv(void *this_) {
  ((QGraphicsObject*)this_)->zChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:582
// [-2] void rotationChanged()
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsObject15rotationChangedEv(void *this_) {
  ((QGraphicsObject*)this_)->rotationChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:583
// [-2] void scaleChanged()
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsObject12scaleChangedEv(void *this_) {
  ((QGraphicsObject*)this_)->scaleChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:584
// [-2] void childrenChanged()
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsObject15childrenChangedEv(void *this_) {
  ((QGraphicsObject*)this_)->childrenChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:585
// [-2] void widthChanged()
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsObject12widthChangedEv(void *this_) {
  ((QGraphicsObject*)this_)->widthChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:586
// [-2] void heightChanged()
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsObject13heightChangedEv(void *this_) {
  ((QGraphicsObject*)this_)->heightChanged();
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(graphicsview)
#endif // #ifndef QT_MINIMAL
//  footer block end
