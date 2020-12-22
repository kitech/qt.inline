//  header block begin

#ifndef QT_MINIMAL
#include <QtCore/qglobal.h>
#if QT_CONFIG(statemachine)
// /usr/include/qt/QtCore/qsignaltransition.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsignaltransition.h>
#include <QtCore>
#include "callback_inherit.h"

// QSignalTransition is pure virtual: false false
// QSignalTransition has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSignalTransition_t {
  QByteArrayData data[1];
  char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSignalTransition_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSignalTransition_t qt_meta_stringdata_MyQSignalTransition = {
   {
  QT_MOC_LITERAL(0, 0, 19), // "MyQSignalTransition"
  },
  "MyQSignalTransition"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSignalTransition[] = {
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
class Q_DECL_EXPORT MyQSignalTransition : public QSignalTransition {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QSignalTransition::staticMetaObject,
  qt_meta_stringdata_MyQSignalTransition.data,
  qt_meta_data_MyQSignalTransition,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQSignalTransition.stringdata0))
      return static_cast<void*>(this);
  return QSignalTransition::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QSignalTransition::qt_metacall(_c, _id, _a);
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
  virtual ~MyQSignalTransition() {}
// void QSignalTransition(QState *)
MyQSignalTransition(QState * sourceState) : QSignalTransition(sourceState) {}
// void QSignalTransition(const QObject *, const char *, QState *)
MyQSignalTransition(const QObject * sender, const char * signal, QState * sourceState) : QSignalTransition(sender, signal, sourceState) {}
// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool eventTest(QEvent *)
  virtual bool eventTest(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"eventTest", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QSignalTransition::eventTest(event);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void onTransition(QEvent *)
  virtual void onTransition(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"onTransition", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QSignalTransition::onTransition(event);
  }
  }

// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QSignalTransition::event(e);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QSignalTransition_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQSignalTransition* qo = (MyQSignalTransition*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsignaltransition(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignaltransition.h:53
// [8] QString tr(const char *, const char *, int) 
// (12)qm3674583933 (33)_ZN17QSignalTransition2trEPKcS1_i
//static
/*void qm3674583933(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QSignalTransition::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QSignalTransition::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignaltransition.h:58
// [-2] void QSignalTransition(QState *) 
// (12)qm3432198956 (33)_ZN17QSignalTransitionC2EP6QState
/*void* qm3432198956(QState * sourceState)*/{
  auto _nilp = (MyQSignalTransition*)(0);
  QState * sourceState = *(QState **)this_;
  this_ =  new QSignalTransition(sourceState);
  this_ =  new MyQSignalTransition(sourceState);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignaltransition.h:59
// [-2] void QSignalTransition(const QObject *, const char *, QState *) 
// (12)qm4086243449 (46)_ZN17QSignalTransitionC2EPK7QObjectPKcP6QState
/*void* qm4086243449(const QObject * sender, const char * signal, QState * sourceState)*/{
  auto _nilp = (MyQSignalTransition*)(0);
  const QObject * sender = *(const QObject **)this_; const char * signal = *(const char **)this_; QState * sourceState = *(QState **)this_;
  this_ =  new QSignalTransition(sender, signal, sourceState);
  this_ =  new MyQSignalTransition(sender, signal, sourceState);
}


/*void C_ZN17QSignalTransitionD2Ev(void *this_)*/ {
  delete (QSignalTransition*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsignaltransition
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(statemachine)
#endif // #ifndef QT_MINIMAL
//  footer block end
