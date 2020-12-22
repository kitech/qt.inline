//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(graphicsview)
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgraphicsitemanimation.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsItemAnimation is pure virtual: false false
// QGraphicsItemAnimation has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGraphicsItemAnimation_t {
  QByteArrayData data[1];
  char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGraphicsItemAnimation_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGraphicsItemAnimation_t qt_meta_stringdata_MyQGraphicsItemAnimation = {
   {
  QT_MOC_LITERAL(0, 0, 24), // "MyQGraphicsItemAnimation"
  },
  "MyQGraphicsItemAnimation"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGraphicsItemAnimation[] = {
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
class Q_DECL_EXPORT MyQGraphicsItemAnimation : public QGraphicsItemAnimation {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QGraphicsItemAnimation::staticMetaObject,
  qt_meta_stringdata_MyQGraphicsItemAnimation.data,
  qt_meta_data_MyQGraphicsItemAnimation,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQGraphicsItemAnimation.stringdata0))
      return static_cast<void*>(this);
  return QGraphicsItemAnimation::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QGraphicsItemAnimation::qt_metacall(_c, _id, _a);
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
  virtual ~MyQGraphicsItemAnimation() {}
// void QGraphicsItemAnimation(QObject *)
MyQGraphicsItemAnimation(QObject * parent) : QGraphicsItemAnimation(parent) {}
// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void beforeAnimationStep(qreal)
  virtual void beforeAnimationStep(qreal step)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"beforeAnimationStep", &handled, 1, (uint64_t)&step, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsItemAnimation::beforeAnimationStep(step);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void afterAnimationStep(qreal)
  virtual void afterAnimationStep(qreal step)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"afterAnimationStep", &handled, 1, (uint64_t)&step, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGraphicsItemAnimation::afterAnimationStep(step);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QGraphicsItemAnimation_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQGraphicsItemAnimation* qo = (MyQGraphicsItemAnimation*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgraphicsitemanimation(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:60
// [8] QString tr(const char *, const char *, int) 
// (10)qm87118809 (38)_ZN22QGraphicsItemAnimation2trEPKcS1_i
//static
/*void qm87118809(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QGraphicsItemAnimation::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QGraphicsItemAnimation::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitemanimation.h:62
// [-2] void QGraphicsItemAnimation(QObject *) 
// (12)qm2914697205 (39)_ZN22QGraphicsItemAnimationC2EP7QObject
/*void* qm2914697205(QObject * parent)*/{
  auto _nilp = (MyQGraphicsItemAnimation*)(0);
  QObject * parent = *(QObject **)this_;
  this_ =  new QGraphicsItemAnimation(parent);
  this_ =  new MyQGraphicsItemAnimation(parent);
}


/*void C_ZN22QGraphicsItemAnimationD2Ev(void *this_)*/ {
  delete (QGraphicsItemAnimation*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgraphicsitemanimation
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
