//  header block begin
// since 0x040600
// /usr/include/qt/QtWidgets/qgraphicseffect.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgraphicseffect.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsEffect is pure virtual: true
// QGraphicsEffect has virtual projected: true
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQGraphicsEffect_t {
  QByteArrayData data[1];
  char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGraphicsEffect_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGraphicsEffect_t qt_meta_stringdata_MyQGraphicsEffect = {
   {
  QT_MOC_LITERAL(0, 0, 17), // "MyQGraphicsEffect"
  },
  "MyQGraphicsEffect"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGraphicsEffect[] = {
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
class Q_DECL_EXPORT MyQGraphicsEffect : public QGraphicsEffect {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QGraphicsEffect::staticMetaObject,
  qt_meta_stringdata_MyQGraphicsEffect.data,
  qt_meta_data_MyQGraphicsEffect,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQGraphicsEffect.stringdata0))
      return static_cast<void*>(this);
  return QGraphicsEffect::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QGraphicsEffect::qt_metacall(_c, _id, _a);
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
  virtual ~MyQGraphicsEffect() {}
// void QGraphicsEffect(QObject *)
MyQGraphicsEffect(QObject * parent) : QGraphicsEffect(parent) {}
// Protected purevirtual virtual Visibility=Default Availability=Available
// [-2] void draw(QPainter *)
  virtual void draw(QPainter * painter)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"draw", &handled, 1, (uint64_t)painter, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QGraphicsEffect::draw(painter);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void sourceChanged(QGraphicsEffect::ChangeFlags)
  virtual void sourceChanged(QFlags<QGraphicsEffect::ChangeFlag> flags)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"sourceChanged", &handled, 1, (uint64_t)flags, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsEffect::sourceChanged(flags);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QGraphicsEffect_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQGraphicsEffect* qo = (MyQGraphicsEffect*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:99
// [-2] void draw(QPainter *)
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:100
// [-2] void sourceChanged(QGraphicsEffect::ChangeFlags)
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsEffect13sourceChangedE6QFlagsINS_10ChangeFlagEE(void *this_, QFlags<QGraphicsEffect::ChangeFlag> flags) {
  ((QGraphicsEffect*)this_)->QGraphicsEffect::sourceChanged(flags);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:64
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QGraphicsEffect10metaObjectEv(void *this_) {
  return (void*)((QGraphicsEffect*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:64
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN15QGraphicsEffect11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QGraphicsEffect*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:64
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN15QGraphicsEffect11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QGraphicsEffect*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:64
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QGraphicsEffect2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGraphicsEffect::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:64
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QGraphicsEffect6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGraphicsEffect::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:82
// [-2] void QGraphicsEffect(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN15QGraphicsEffectC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQGraphicsEffect*)(0);
  return  new MyQGraphicsEffect(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:83
// [-2] void ~QGraphicsEffect()
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsEffectD2Ev(void *this_) {
  delete (QGraphicsEffect*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:85
// [32] QRectF boundingRectFor(const QRectF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK15QGraphicsEffect15boundingRectForERK6QRectF(void *this_, QRectF* sourceRect) {
  auto rv = ((QGraphicsEffect*)this_)->boundingRectFor(*sourceRect);
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:86
// [32] QRectF boundingRect()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QGraphicsEffect12boundingRectEv(void *this_) {
  auto rv = ((QGraphicsEffect*)this_)->boundingRect();
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:88
// [1] bool isEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QGraphicsEffect9isEnabledEv(void *this_) {
  return (bool)((QGraphicsEffect*)this_)->isEnabled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:91
// [-2] void setEnabled(bool)
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsEffect10setEnabledEb(void *this_, bool enable) {
  ((QGraphicsEffect*)this_)->setEnabled(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:92
// [-2] void update()
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsEffect6updateEv(void *this_) {
  ((QGraphicsEffect*)this_)->update();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:95
// [-2] void enabledChanged(bool)
extern "C" Q_DECL_EXPORT
void C_ZN15QGraphicsEffect14enabledChangedEb(void *this_, bool enabled) {
  ((QGraphicsEffect*)this_)->enabledChanged(enabled);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:120
// [8] QGraphicsEffectSource * source()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QGraphicsEffect6sourceEv(void *this_) {
  return (void*)((QGraphicsEffect*)this_)->source();
}

//  main block end
