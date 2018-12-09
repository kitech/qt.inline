//  header block begin

#ifndef QT_MINIMAL
// since 0x040600
// /usr/include/qt/QtWidgets/qgraphicseffect.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgraphicseffect.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsColorizeEffect is pure virtual: false
// QGraphicsColorizeEffect has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGraphicsColorizeEffect_t {
  QByteArrayData data[1];
  char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGraphicsColorizeEffect_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGraphicsColorizeEffect_t qt_meta_stringdata_MyQGraphicsColorizeEffect = {
   {
  QT_MOC_LITERAL(0, 0, 25), // "MyQGraphicsColorizeEffect"
  },
  "MyQGraphicsColorizeEffect"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGraphicsColorizeEffect[] = {
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
class Q_DECL_EXPORT MyQGraphicsColorizeEffect : public QGraphicsColorizeEffect {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QGraphicsColorizeEffect::staticMetaObject,
  qt_meta_stringdata_MyQGraphicsColorizeEffect.data,
  qt_meta_data_MyQGraphicsColorizeEffect,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQGraphicsColorizeEffect.stringdata0))
      return static_cast<void*>(this);
  return QGraphicsColorizeEffect::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QGraphicsColorizeEffect::qt_metacall(_c, _id, _a);
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
  virtual ~MyQGraphicsColorizeEffect() {}
// void QGraphicsColorizeEffect(QObject *)
MyQGraphicsColorizeEffect(QObject * parent) : QGraphicsColorizeEffect(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void draw(QPainter *)
  virtual void draw(QPainter * painter)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"draw", &handled, 1, (uint64_t)painter, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsColorizeEffect::draw(painter);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QGraphicsColorizeEffect_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQGraphicsColorizeEffect* qo = (MyQGraphicsColorizeEffect*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:147
// [-2] void draw(QPainter *)
extern "C" Q_DECL_EXPORT
void C_ZN23QGraphicsColorizeEffect4drawEP8QPainter(void *this_, QPainter * painter) {
  ((QGraphicsColorizeEffect*)this_)->QGraphicsColorizeEffect::draw(painter);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:128
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK23QGraphicsColorizeEffect10metaObjectEv(void *this_) {
  return (void*)((QGraphicsColorizeEffect*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:128
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN23QGraphicsColorizeEffect11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QGraphicsColorizeEffect*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:128
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN23QGraphicsColorizeEffect11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QGraphicsColorizeEffect*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:128
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN23QGraphicsColorizeEffect2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGraphicsColorizeEffect::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:128
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN23QGraphicsColorizeEffect6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGraphicsColorizeEffect::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:132
// [-2] void QGraphicsColorizeEffect(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN23QGraphicsColorizeEffectC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQGraphicsColorizeEffect*)(0);
  return  new MyQGraphicsColorizeEffect(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:133
// [-2] void ~QGraphicsColorizeEffect()
extern "C" Q_DECL_EXPORT
void C_ZN23QGraphicsColorizeEffectD2Ev(void *this_) {
  delete (QGraphicsColorizeEffect*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:135
// [16] QColor color()
extern "C" Q_DECL_EXPORT
void* C_ZNK23QGraphicsColorizeEffect5colorEv(void *this_) {
  auto rv = ((QGraphicsColorizeEffect*)this_)->color();
return new QColor(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:136
// [8] qreal strength()
extern "C" Q_DECL_EXPORT
qreal C_ZNK23QGraphicsColorizeEffect8strengthEv(void *this_) {
  return (qreal)((QGraphicsColorizeEffect*)this_)->strength();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:139
// [-2] void setColor(const QColor &)
extern "C" Q_DECL_EXPORT
void C_ZN23QGraphicsColorizeEffect8setColorERK6QColor(void *this_, QColor* c) {
  ((QGraphicsColorizeEffect*)this_)->setColor(*c);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:140
// [-2] void setStrength(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN23QGraphicsColorizeEffect11setStrengthEd(void *this_, qreal strength) {
  ((QGraphicsColorizeEffect*)this_)->setStrength(strength);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:143
// [-2] void colorChanged(const QColor &)
extern "C" Q_DECL_EXPORT
void C_ZN23QGraphicsColorizeEffect12colorChangedERK6QColor(void *this_, QColor* color) {
  ((QGraphicsColorizeEffect*)this_)->colorChanged(*color);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:144
// [-2] void strengthChanged(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN23QGraphicsColorizeEffect15strengthChangedEd(void *this_, qreal strength) {
  ((QGraphicsColorizeEffect*)this_)->strengthChanged(strength);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #ifndef QT_MINIMAL
//  footer block end
