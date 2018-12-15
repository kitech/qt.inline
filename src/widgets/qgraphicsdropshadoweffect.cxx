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

// QGraphicsDropShadowEffect is pure virtual: false
// QGraphicsDropShadowEffect has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGraphicsDropShadowEffect_t {
  QByteArrayData data[1];
  char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGraphicsDropShadowEffect_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGraphicsDropShadowEffect_t qt_meta_stringdata_MyQGraphicsDropShadowEffect = {
   {
  QT_MOC_LITERAL(0, 0, 27), // "MyQGraphicsDropShadowEffect"
  },
  "MyQGraphicsDropShadowEffect"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGraphicsDropShadowEffect[] = {
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
class Q_DECL_EXPORT MyQGraphicsDropShadowEffect : public QGraphicsDropShadowEffect {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QGraphicsDropShadowEffect::staticMetaObject,
  qt_meta_stringdata_MyQGraphicsDropShadowEffect.data,
  qt_meta_data_MyQGraphicsDropShadowEffect,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQGraphicsDropShadowEffect.stringdata0))
      return static_cast<void*>(this);
  return QGraphicsDropShadowEffect::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QGraphicsDropShadowEffect::qt_metacall(_c, _id, _a);
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
  virtual ~MyQGraphicsDropShadowEffect() {}
// void QGraphicsDropShadowEffect(QObject *)
MyQGraphicsDropShadowEffect(QObject * parent) : QGraphicsDropShadowEffect(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void draw(QPainter *)
  virtual void draw(QPainter * painter)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"draw", &handled, 1, (uint64_t)painter, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsDropShadowEffect::draw(painter);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QGraphicsDropShadowEffect_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQGraphicsDropShadowEffect* qo = (MyQGraphicsDropShadowEffect*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:244
// [-2] void draw(QPainter *)
extern "C" Q_DECL_EXPORT
void C_ZN25QGraphicsDropShadowEffect4drawEP8QPainter(void *this_, QPainter * painter) {
  ((QGraphicsDropShadowEffect*)this_)->QGraphicsDropShadowEffect::draw(painter);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:198
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK25QGraphicsDropShadowEffect10metaObjectEv(void *this_) {
  return (void*)((QGraphicsDropShadowEffect*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:198
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN25QGraphicsDropShadowEffect11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QGraphicsDropShadowEffect*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:198
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN25QGraphicsDropShadowEffect11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QGraphicsDropShadowEffect*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:198
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN25QGraphicsDropShadowEffect2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGraphicsDropShadowEffect::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:198
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN25QGraphicsDropShadowEffect6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGraphicsDropShadowEffect::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:205
// [-2] void QGraphicsDropShadowEffect(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN25QGraphicsDropShadowEffectC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQGraphicsDropShadowEffect*)(0);
  return  new MyQGraphicsDropShadowEffect(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:206
// [-2] void ~QGraphicsDropShadowEffect()
extern "C" Q_DECL_EXPORT
void C_ZN25QGraphicsDropShadowEffectD2Ev(void *this_) {
  delete (QGraphicsDropShadowEffect*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:208
// [32] QRectF boundingRectFor(const QRectF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK25QGraphicsDropShadowEffect15boundingRectForERK6QRectF(void *this_, QRectF* rect) {
  auto rv = ((QGraphicsDropShadowEffect*)this_)->boundingRectFor(*rect);
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:209
// [16] QPointF offset()
extern "C" Q_DECL_EXPORT
void* C_ZNK25QGraphicsDropShadowEffect6offsetEv(void *this_) {
  auto rv = ((QGraphicsDropShadowEffect*)this_)->offset();
return new QPointF(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:211
// [8] qreal xOffset()
extern "C" Q_DECL_EXPORT
qreal C_ZNK25QGraphicsDropShadowEffect7xOffsetEv(void *this_) {
  return (qreal)((QGraphicsDropShadowEffect*)this_)->xOffset();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:214
// [8] qreal yOffset()
extern "C" Q_DECL_EXPORT
qreal C_ZNK25QGraphicsDropShadowEffect7yOffsetEv(void *this_) {
  return (qreal)((QGraphicsDropShadowEffect*)this_)->yOffset();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:217
// [8] qreal blurRadius()
extern "C" Q_DECL_EXPORT
qreal C_ZNK25QGraphicsDropShadowEffect10blurRadiusEv(void *this_) {
  return (qreal)((QGraphicsDropShadowEffect*)this_)->blurRadius();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:218
// [16] QColor color()
extern "C" Q_DECL_EXPORT
void* C_ZNK25QGraphicsDropShadowEffect5colorEv(void *this_) {
  auto rv = ((QGraphicsDropShadowEffect*)this_)->color();
return new QColor(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:221
// [-2] void setOffset(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN25QGraphicsDropShadowEffect9setOffsetERK7QPointF(void *this_, QPointF* ofs) {
  ((QGraphicsDropShadowEffect*)this_)->setOffset(*ofs);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:223
// [-2] void setOffset(qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN25QGraphicsDropShadowEffect9setOffsetEdd(void *this_, qreal dx, qreal dy) {
  ((QGraphicsDropShadowEffect*)this_)->setOffset(dx, dy);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:226
// [-2] void setOffset(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN25QGraphicsDropShadowEffect9setOffsetEd(void *this_, qreal d) {
  ((QGraphicsDropShadowEffect*)this_)->setOffset(d);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:229
// [-2] void setXOffset(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN25QGraphicsDropShadowEffect10setXOffsetEd(void *this_, qreal dx) {
  ((QGraphicsDropShadowEffect*)this_)->setXOffset(dx);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:232
// [-2] void setYOffset(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN25QGraphicsDropShadowEffect10setYOffsetEd(void *this_, qreal dy) {
  ((QGraphicsDropShadowEffect*)this_)->setYOffset(dy);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:235
// [-2] void setBlurRadius(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN25QGraphicsDropShadowEffect13setBlurRadiusEd(void *this_, qreal blurRadius) {
  ((QGraphicsDropShadowEffect*)this_)->setBlurRadius(blurRadius);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:236
// [-2] void setColor(const QColor &)
extern "C" Q_DECL_EXPORT
void C_ZN25QGraphicsDropShadowEffect8setColorERK6QColor(void *this_, QColor* color) {
  ((QGraphicsDropShadowEffect*)this_)->setColor(*color);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:239
// [-2] void offsetChanged(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN25QGraphicsDropShadowEffect13offsetChangedERK7QPointF(void *this_, QPointF* offset) {
  ((QGraphicsDropShadowEffect*)this_)->offsetChanged(*offset);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:240
// [-2] void blurRadiusChanged(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN25QGraphicsDropShadowEffect17blurRadiusChangedEd(void *this_, qreal blurRadius) {
  ((QGraphicsDropShadowEffect*)this_)->blurRadiusChanged(blurRadius);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:241
// [-2] void colorChanged(const QColor &)
extern "C" Q_DECL_EXPORT
void C_ZN25QGraphicsDropShadowEffect12colorChangedERK6QColor(void *this_, QColor* color) {
  ((QGraphicsDropShadowEffect*)this_)->colorChanged(*color);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
