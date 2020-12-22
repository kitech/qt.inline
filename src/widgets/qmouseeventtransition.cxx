//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(qeventtransition)
// /usr/include/qt/QtWidgets/qmouseeventtransition.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmouseeventtransition.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QMouseEventTransition is pure virtual: false false
// QMouseEventTransition has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQMouseEventTransition_t {
  QByteArrayData data[1];
  char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMouseEventTransition_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMouseEventTransition_t qt_meta_stringdata_MyQMouseEventTransition = {
   {
  QT_MOC_LITERAL(0, 0, 23), // "MyQMouseEventTransition"
  },
  "MyQMouseEventTransition"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMouseEventTransition[] = {
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
class Q_DECL_EXPORT MyQMouseEventTransition : public QMouseEventTransition {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QMouseEventTransition::staticMetaObject,
  qt_meta_stringdata_MyQMouseEventTransition.data,
  qt_meta_data_MyQMouseEventTransition,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQMouseEventTransition.stringdata0))
      return static_cast<void*>(this);
  return QMouseEventTransition::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QMouseEventTransition::qt_metacall(_c, _id, _a);
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
  virtual ~MyQMouseEventTransition() {}
// void QMouseEventTransition(QState *)
MyQMouseEventTransition(QState * sourceState) : QMouseEventTransition(sourceState) {}
// void QMouseEventTransition(QObject *, QEvent::Type, Qt::MouseButton, QState *)
MyQMouseEventTransition(QObject * object, QEvent::Type type_, Qt::MouseButton button, QState * sourceState) : QMouseEventTransition(object, type_, button, sourceState) {}
// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void onTransition(QEvent *)
  virtual void onTransition(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"onTransition", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QMouseEventTransition::onTransition(event);
  }
  }

// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool eventTest(QEvent *)
  virtual bool eventTest(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"eventTest", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QMouseEventTransition::eventTest(event);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QMouseEventTransition_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQMouseEventTransition* qo = (MyQMouseEventTransition*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmouseeventtransition(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmouseeventtransition.h:54
// [8] QString tr(const char *, const char *, int) 
// (12)qm1944467435 (37)_ZN21QMouseEventTransition2trEPKcS1_i
//static
/*void qm1944467435(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QMouseEventTransition::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QMouseEventTransition::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmouseeventtransition.h:58
// [-2] void QMouseEventTransition(QState *) 
// (12)qm1685108666 (37)_ZN21QMouseEventTransitionC2EP6QState
/*void* qm1685108666(QState * sourceState)*/{
  auto _nilp = (MyQMouseEventTransition*)(0);
  QState * sourceState = *(QState **)this_;
  this_ =  new QMouseEventTransition(sourceState);
  this_ =  new MyQMouseEventTransition(sourceState);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmouseeventtransition.h:59
// [-2] void QMouseEventTransition(QObject *, QEvent::Type, Qt::MouseButton, QState *) 
// (12)qm3404188469 (78)_ZN21QMouseEventTransitionC2EP7QObjectN6QEvent4TypeEN2Qt11MouseButtonEP6QState
/*void* qm3404188469(QObject * object, QEvent::Type type_, Qt::MouseButton button, QState * sourceState)*/{
  auto _nilp = (MyQMouseEventTransition*)(0);
  QObject * object = *(QObject **)this_; QEvent::Type type_ = *(QEvent::Type*)this_; Qt::MouseButton button = *(Qt::MouseButton*)this_; QState * sourceState = *(QState **)this_;
  this_ =  new QMouseEventTransition(object, type_, button, sourceState);
  this_ =  new MyQMouseEventTransition(object, type_, button, sourceState);
}


/*void C_ZN21QMouseEventTransitionD2Ev(void *this_)*/ {
  delete (QMouseEventTransition*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmouseeventtransition
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(qeventtransition)
#endif // #ifndef QT_MINIMAL
//  footer block end
