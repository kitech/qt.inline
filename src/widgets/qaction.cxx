//  header block begin

// /usr/include/qt/QtWidgets/qaction.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaction.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QAction is pure virtual: false false
// QAction has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQAction_t {
  QByteArrayData data[1];
  char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAction_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAction_t qt_meta_stringdata_MyQAction = {
   {
  QT_MOC_LITERAL(0, 0, 9), // "MyQAction"
  },
  "MyQAction"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAction[] = {
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
class Q_DECL_EXPORT MyQAction : public QAction {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QAction::staticMetaObject,
  qt_meta_stringdata_MyQAction.data,
  qt_meta_data_MyQAction,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQAction.stringdata0))
      return static_cast<void*>(this);
  return QAction::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QAction::qt_metacall(_c, _id, _a);
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
  virtual ~MyQAction() {}
// void QAction(QObject *)
MyQAction(QObject * parent) : QAction(parent) {}
// void QAction(const QString &, QObject *)
MyQAction(const QString & text, QObject * parent) : QAction(text, parent) {}
// void QAction(const QIcon &, const QString &, QObject *)
MyQAction(const QIcon & icon, const QString & text, QObject * parent) : QAction(icon, text, parent) {}
// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QAction::event(arg0);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QAction_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQAction* qo = (MyQAction*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qaction(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:62
// [8] QString tr(const char *, const char *, int) 
// (12)qm2425852280 (22)_ZN7QAction2trEPKcS1_i
//static
/*void qm2425852280(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QAction::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QAction::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:187
// [-2] void trigger() 
// (12)qm3248071529 (21)_ZN7QAction7triggerEv
//static
/*void qm3248071529()*/ {
  ;
  (void) ((QAction*)this_)->trigger();
   auto xptr = (void (QAction::*)() ) &QAction::trigger;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:188
// [-2] void hover() 
// (11)qm606202509 (19)_ZN7QAction5hoverEv
//static
/*void qm606202509()*/ {
  ;
  (void) ((QAction*)this_)->hover();
   auto xptr = (void (QAction::*)() ) &QAction::hover;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qaction.h:192
// [-2] void setDisabled(bool) 
// (11)qm964827636 (26)_ZN7QAction11setDisabledEb
//static
/*void qm964827636(bool b)*/ {
  bool b = *(bool*)this_;
  (void) ((QAction*)this_)->setDisabled(b);
   auto xptr = (void (QAction::*)(bool) ) &QAction::setDisabled;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN7QActionD2Ev(void *this_)*/ {
  delete (QAction*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qaction
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
