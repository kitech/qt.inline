//  header block begin

// /usr/include/qt/QtWidgets/qwidgetaction.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwidgetaction.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QWidgetAction is pure virtual: false false
// QWidgetAction has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQWidgetAction_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQWidgetAction_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQWidgetAction_t qt_meta_stringdata_MyQWidgetAction = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQWidgetAction"
  },
  "MyQWidgetAction"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQWidgetAction[] = {
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
class Q_DECL_EXPORT MyQWidgetAction : public QWidgetAction {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QWidgetAction::staticMetaObject,
  qt_meta_stringdata_MyQWidgetAction.data,
  qt_meta_data_MyQWidgetAction,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQWidgetAction.stringdata0))
      return static_cast<void*>(this);
  return QWidgetAction::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QWidgetAction::qt_metacall(_c, _id, _a);
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
  virtual ~MyQWidgetAction() {}
// void QWidgetAction(QObject *)
MyQWidgetAction(QObject * parent) : QWidgetAction(parent) {}
// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QWidgetAction::event(arg0);
  }
  }

// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool eventFilter(QObject *, QEvent *)
  virtual bool eventFilter(QObject * arg0, QEvent * arg1)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"eventFilter", &handled, 2, (uint64_t)arg0, (uint64_t)arg1, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QWidgetAction::eventFilter(arg0, arg1);
  }
  }

// Protected virtual Direct Visibility=Default Availability=Available
// [8] QWidget * createWidget(QWidget *)
  virtual QWidget * createWidget(QWidget * parent)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"createWidget", &handled, 1, (uint64_t)parent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QWidget *)(irv);
      // Pointer Pointer QWidget *
    } else {
    return QWidgetAction::createWidget(parent);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void deleteWidget(QWidget *)
  virtual void deleteWidget(QWidget * widget)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"deleteWidget", &handled, 1, (uint64_t)widget, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QWidgetAction::deleteWidget(widget);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QWidgetAction_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQWidgetAction* qo = (MyQWidgetAction*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qwidgetaction(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidgetaction.h:55
// [8] QString tr(const char *, const char *, int) 
// (12)qm2735753174 (29)_ZN13QWidgetAction2trEPKcS1_i
//static
/*void qm2735753174(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QWidgetAction::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QWidgetAction::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidgetaction.h:59
// [-2] void QWidgetAction(QObject *) 
// (12)qm1034126192 (30)_ZN13QWidgetActionC2EP7QObject
/*void* qm1034126192(QObject * parent)*/{
  auto _nilp = (MyQWidgetAction*)(0);
  QObject * parent = *(QObject **)this_;
  this_ =  new QWidgetAction(parent);
  this_ =  new MyQWidgetAction(parent);
}


/*void C_ZN13QWidgetActionD2Ev(void *this_)*/ {
  delete (QWidgetAction*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qwidgetaction
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
