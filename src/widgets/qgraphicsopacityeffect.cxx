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

// QGraphicsOpacityEffect is pure virtual: false
// QGraphicsOpacityEffect has virtual projected: true
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQGraphicsOpacityEffect_t {
  QByteArrayData data[1];
  char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGraphicsOpacityEffect_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGraphicsOpacityEffect_t qt_meta_stringdata_MyQGraphicsOpacityEffect = {
   {
  QT_MOC_LITERAL(0, 0, 24), // "MyQGraphicsOpacityEffect"
  },
  "MyQGraphicsOpacityEffect"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGraphicsOpacityEffect[] = {
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
class Q_DECL_EXPORT MyQGraphicsOpacityEffect : public QGraphicsOpacityEffect {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QGraphicsOpacityEffect::staticMetaObject,
  qt_meta_stringdata_MyQGraphicsOpacityEffect.data,
  qt_meta_data_MyQGraphicsOpacityEffect,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQGraphicsOpacityEffect.stringdata0))
      return static_cast<void*>(this);
  return QGraphicsOpacityEffect::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QGraphicsOpacityEffect::qt_metacall(_c, _id, _a);
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
  virtual ~MyQGraphicsOpacityEffect() {}
// void QGraphicsOpacityEffect(QObject *)
MyQGraphicsOpacityEffect(QObject * parent) : QGraphicsOpacityEffect(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void draw(QPainter *)
  virtual void draw(QPainter * painter)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"draw", &handled, 1, (uint64_t)painter, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsOpacityEffect::draw(painter);
  }
  }

};
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:273
// [-2] void draw(QPainter *)
extern "C" Q_DECL_EXPORT
void C_ZN22QGraphicsOpacityEffect4drawEP8QPainter(void *this_, QPainter * painter) {
  ((QGraphicsOpacityEffect*)this_)->QGraphicsOpacityEffect::draw(painter);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:254
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK22QGraphicsOpacityEffect10metaObjectEv(void *this_) {
  return (void*)((QGraphicsOpacityEffect*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:254
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN22QGraphicsOpacityEffect11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QGraphicsOpacityEffect*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:254
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN22QGraphicsOpacityEffect11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QGraphicsOpacityEffect*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:254
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN22QGraphicsOpacityEffect2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGraphicsOpacityEffect::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:254
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN22QGraphicsOpacityEffect6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGraphicsOpacityEffect::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:258
// [-2] void QGraphicsOpacityEffect(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN22QGraphicsOpacityEffectC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQGraphicsOpacityEffect*)(0);
  return  new MyQGraphicsOpacityEffect(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:259
// [-2] void ~QGraphicsOpacityEffect()
extern "C" Q_DECL_EXPORT
void C_ZN22QGraphicsOpacityEffectD2Ev(void *this_) {
  delete (QGraphicsOpacityEffect*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:261
// [8] qreal opacity()
extern "C" Q_DECL_EXPORT
qreal C_ZNK22QGraphicsOpacityEffect7opacityEv(void *this_) {
  return (qreal)((QGraphicsOpacityEffect*)this_)->opacity();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:262
// [8] QBrush opacityMask()
extern "C" Q_DECL_EXPORT
void* C_ZNK22QGraphicsOpacityEffect11opacityMaskEv(void *this_) {
  auto rv = ((QGraphicsOpacityEffect*)this_)->opacityMask();
return new QBrush(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:265
// [-2] void setOpacity(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN22QGraphicsOpacityEffect10setOpacityEd(void *this_, qreal opacity) {
  ((QGraphicsOpacityEffect*)this_)->setOpacity(opacity);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:266
// [-2] void setOpacityMask(const QBrush &)
extern "C" Q_DECL_EXPORT
void C_ZN22QGraphicsOpacityEffect14setOpacityMaskERK6QBrush(void *this_, QBrush* mask) {
  ((QGraphicsOpacityEffect*)this_)->setOpacityMask(*mask);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:269
// [-2] void opacityChanged(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN22QGraphicsOpacityEffect14opacityChangedEd(void *this_, qreal opacity) {
  ((QGraphicsOpacityEffect*)this_)->opacityChanged(opacity);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:270
// [-2] void opacityMaskChanged(const QBrush &)
extern "C" Q_DECL_EXPORT
void C_ZN22QGraphicsOpacityEffect18opacityMaskChangedERK6QBrush(void *this_, QBrush* mask) {
  ((QGraphicsOpacityEffect*)this_)->opacityMaskChanged(*mask);
}

//  main block end
