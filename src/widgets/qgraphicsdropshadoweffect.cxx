//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(graphicseffect)
// /usr/include/qt/QtWidgets/qgraphicseffect.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgraphicseffect.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsDropShadowEffect is pure virtual: false false
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
// Protected virtual Ignore Visibility=Default Availability=Available
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

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgraphicsdropshadoweffect(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:198
// [8] QString tr(const char *, const char *, int) 
// (11)qm308972880 (41)_ZN25QGraphicsDropShadowEffect2trEPKcS1_i
//static
/*void qm308972880(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QGraphicsDropShadowEffect::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QGraphicsDropShadowEffect::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:205
// [-2] void QGraphicsDropShadowEffect(QObject *) 
// (11)qm969531311 (42)_ZN25QGraphicsDropShadowEffectC2EP7QObject
/*void* qm969531311(QObject * parent)*/{
  auto _nilp = (MyQGraphicsDropShadowEffect*)(0);
  QObject * parent = *(QObject **)this_;
  this_ =  new QGraphicsDropShadowEffect(parent);
  this_ =  new MyQGraphicsDropShadowEffect(parent);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:211
// [8] qreal xOffset() const
// (12)qm2931966323 (41)_ZNK25QGraphicsDropShadowEffect7xOffsetEv
//static
/*void qm2931966323()*/ {
  ;
  (void) ((QGraphicsDropShadowEffect*)this_)->xOffset();
   auto xptr = (double (QGraphicsDropShadowEffect::*)() const ) &QGraphicsDropShadowEffect::xOffset;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:214
// [8] qreal yOffset() const
// (12)qm3115930928 (41)_ZNK25QGraphicsDropShadowEffect7yOffsetEv
//static
/*void qm3115930928()*/ {
  ;
  (void) ((QGraphicsDropShadowEffect*)this_)->yOffset();
   auto xptr = (double (QGraphicsDropShadowEffect::*)() const ) &QGraphicsDropShadowEffect::yOffset;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:223
// [-2] void setOffset(qreal, qreal) 
// (12)qm2145511898 (43)_ZN25QGraphicsDropShadowEffect9setOffsetEdd
//static
/*void qm2145511898(double dx, double dy)*/ {
  double dx = *(double*)this_; double dy = *(double*)this_;
  (void) ((QGraphicsDropShadowEffect*)this_)->setOffset(dx, dy);
   auto xptr = (void (QGraphicsDropShadowEffect::*)(double, double) ) &QGraphicsDropShadowEffect::setOffset;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:226
// [-2] void setOffset(qreal) 
// (12)qm2223902990 (42)_ZN25QGraphicsDropShadowEffect9setOffsetEd
//static
/*void qm2223902990(double d)*/ {
  double d = *(double*)this_;
  (void) ((QGraphicsDropShadowEffect*)this_)->setOffset(d);
   auto xptr = (void (QGraphicsDropShadowEffect::*)(double) ) &QGraphicsDropShadowEffect::setOffset;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:229
// [-2] void setXOffset(qreal) 
// (12)qm3773251363 (44)_ZN25QGraphicsDropShadowEffect10setXOffsetEd
//static
/*void qm3773251363(double dx)*/ {
  double dx = *(double*)this_;
  (void) ((QGraphicsDropShadowEffect*)this_)->setXOffset(dx);
   auto xptr = (void (QGraphicsDropShadowEffect::*)(double) ) &QGraphicsDropShadowEffect::setXOffset;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:232
// [-2] void setYOffset(qreal) 
// (12)qm4154207072 (44)_ZN25QGraphicsDropShadowEffect10setYOffsetEd
//static
/*void qm4154207072(double dy)*/ {
  double dy = *(double*)this_;
  (void) ((QGraphicsDropShadowEffect*)this_)->setYOffset(dy);
   auto xptr = (void (QGraphicsDropShadowEffect::*)(double) ) &QGraphicsDropShadowEffect::setYOffset;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN25QGraphicsDropShadowEffectD2Ev(void *this_)*/ {
  delete (QGraphicsDropShadowEffect*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgraphicsdropshadoweffect
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
