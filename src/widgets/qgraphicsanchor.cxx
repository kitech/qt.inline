//  header block begin
// since 0x040600
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgraphicsanchorlayout.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsAnchor is pure virtual: false
// QGraphicsAnchor has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQGraphicsAnchor_t {
  QByteArrayData data[1];
  char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGraphicsAnchor_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGraphicsAnchor_t qt_meta_stringdata_MyQGraphicsAnchor = {
   {
  QT_MOC_LITERAL(0, 0, 17), // "MyQGraphicsAnchor"
  },
  "MyQGraphicsAnchor"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGraphicsAnchor[] = {
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
class Q_DECL_EXPORT MyQGraphicsAnchor : public QGraphicsAnchor {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QGraphicsAnchor::staticMetaObject,
  qt_meta_stringdata_MyQGraphicsAnchor.data,
  qt_meta_data_MyQGraphicsAnchor,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQGraphicsAnchor.stringdata0))
      return static_cast<void*>(this);
  return QGraphicsAnchor::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QGraphicsAnchor::qt_metacall(_c, _id, _a);
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
  virtual ~MyQGraphicsAnchor() {}
};
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:57
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QGraphicsAnchor10metaObjectEv(void *this_) {
  return (void*)((QGraphicsAnchor*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:57
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN15QGraphicsAnchor11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QGraphicsAnchor*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:57
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN15QGraphicsAnchor11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QGraphicsAnchor*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:57
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QGraphicsAnchor2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGraphicsAnchor::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:57
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QGraphicsAnchor6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGraphicsAnchor::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:61
// [-2] void setSpacing(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsAnchor10setSpacingEd(void *this_, qreal spacing) {
  ((QGraphicsAnchor*)this_)->setSpacing(spacing);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:62
// [-2] void unsetSpacing()
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsAnchor12unsetSpacingEv(void *this_) {
  ((QGraphicsAnchor*)this_)->unsetSpacing();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:63
// [8] qreal spacing()
extern "C" Q_DECL_EXPORT
qreal C_ZNK15QGraphicsAnchor7spacingEv(void *this_) {
  return (qreal)((QGraphicsAnchor*)this_)->spacing();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:64
// [-2] void setSizePolicy(QSizePolicy::Policy)
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsAnchor13setSizePolicyEN11QSizePolicy6PolicyE(void *this_, QSizePolicy::Policy policy) {
  ((QGraphicsAnchor*)this_)->setSizePolicy(policy);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:65
// [4] QSizePolicy::Policy sizePolicy()
extern "C" Q_DECL_EXPORT
QSizePolicy::Policy C_ZNK15QGraphicsAnchor10sizePolicyEv(void *this_) {
  return (QSizePolicy::Policy)((QGraphicsAnchor*)this_)->sizePolicy();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsanchorlayout.h:66
// [-2] void ~QGraphicsAnchor()
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsAnchorD2Ev(void *this_) {
  delete (QGraphicsAnchor*)(this_);
}
//  main block end
