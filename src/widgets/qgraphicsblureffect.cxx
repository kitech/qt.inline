//  header block begin

#ifndef QT_MINIMAL
#if QT_CONFIG(graphicseffect)
// since 0x040600
// /usr/include/qt/QtWidgets/qgraphicseffect.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgraphicseffect.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsBlurEffect is pure virtual: false
// QGraphicsBlurEffect has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGraphicsBlurEffect_t {
  QByteArrayData data[1];
  char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGraphicsBlurEffect_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGraphicsBlurEffect_t qt_meta_stringdata_MyQGraphicsBlurEffect = {
   {
  QT_MOC_LITERAL(0, 0, 21), // "MyQGraphicsBlurEffect"
  },
  "MyQGraphicsBlurEffect"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGraphicsBlurEffect[] = {
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
class Q_DECL_EXPORT MyQGraphicsBlurEffect : public QGraphicsBlurEffect {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QGraphicsBlurEffect::staticMetaObject,
  qt_meta_stringdata_MyQGraphicsBlurEffect.data,
  qt_meta_data_MyQGraphicsBlurEffect,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQGraphicsBlurEffect.stringdata0))
      return static_cast<void*>(this);
  return QGraphicsBlurEffect::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QGraphicsBlurEffect::qt_metacall(_c, _id, _a);
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
  virtual ~MyQGraphicsBlurEffect() {}
// void QGraphicsBlurEffect(QObject *)
MyQGraphicsBlurEffect(QObject * parent) : QGraphicsBlurEffect(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void draw(QPainter *)
  virtual void draw(QPainter * painter)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"draw", &handled, 1, (uint64_t)painter, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsBlurEffect::draw(painter);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QGraphicsBlurEffect_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQGraphicsBlurEffect* qo = (MyQGraphicsBlurEffect*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:186
// [-2] void draw(QPainter *)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsBlurEffect4drawEP8QPainter(void *this_, QPainter * painter) {
  ((QGraphicsBlurEffect*)this_)->QGraphicsBlurEffect::draw(painter);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:157
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QGraphicsBlurEffect10metaObjectEv(void *this_) {
  return (void*)((QGraphicsBlurEffect*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:157
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QGraphicsBlurEffect11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QGraphicsBlurEffect*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:157
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN19QGraphicsBlurEffect11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QGraphicsBlurEffect*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:157
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QGraphicsBlurEffect2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGraphicsBlurEffect::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:157
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QGraphicsBlurEffect6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGraphicsBlurEffect::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:170
// [-2] void QGraphicsBlurEffect(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QGraphicsBlurEffectC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQGraphicsBlurEffect*)(0);
  return  new MyQGraphicsBlurEffect(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:171
// [-2] void ~QGraphicsBlurEffect()
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsBlurEffectD2Ev(void *this_) {
  delete (QGraphicsBlurEffect*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:173
// [32] QRectF boundingRectFor(const QRectF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK19QGraphicsBlurEffect15boundingRectForERK6QRectF(void *this_, QRectF* rect) {
  auto rv = ((QGraphicsBlurEffect*)this_)->boundingRectFor(*rect);
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:174
// [8] qreal blurRadius()
extern "C" Q_DECL_EXPORT
qreal C_ZNK19QGraphicsBlurEffect10blurRadiusEv(void *this_) {
  return (qreal)((QGraphicsBlurEffect*)this_)->blurRadius();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:175
// [4] QGraphicsBlurEffect::BlurHints blurHints()
extern "C" Q_DECL_EXPORT
QGraphicsBlurEffect::BlurHints* C_ZNK19QGraphicsBlurEffect9blurHintsEv(void *this_) {
  auto rv = ((QGraphicsBlurEffect*)this_)->blurHints();
return new QGraphicsBlurEffect::BlurHints(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:178
// [-2] void setBlurRadius(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsBlurEffect13setBlurRadiusEd(void *this_, qreal blurRadius) {
  ((QGraphicsBlurEffect*)this_)->setBlurRadius(blurRadius);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:179
// [-2] void setBlurHints(QGraphicsBlurEffect::BlurHints)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsBlurEffect12setBlurHintsE6QFlagsINS_8BlurHintEE(void *this_, QFlags<QGraphicsBlurEffect::BlurHint> hints) {
  ((QGraphicsBlurEffect*)this_)->setBlurHints(hints);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:182
// [-2] void blurRadiusChanged(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsBlurEffect17blurRadiusChangedEd(void *this_, qreal blurRadius) {
  ((QGraphicsBlurEffect*)this_)->blurRadiusChanged(blurRadius);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:183
// [-2] void blurHintsChanged(QGraphicsBlurEffect::BlurHints)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsBlurEffect16blurHintsChangedE6QFlagsINS_8BlurHintEE(void *this_, QFlags<QGraphicsBlurEffect::BlurHint> hints) {
  ((QGraphicsBlurEffect*)this_)->blurHintsChanged(hints);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(graphicseffect)
#endif // #ifndef QT_MINIMAL
//  footer block end
