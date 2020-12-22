//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(completer)
// /usr/include/qt/QtWidgets/qcompleter.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcompleter.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QCompleter is pure virtual: false false
// QCompleter has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQCompleter_t {
  QByteArrayData data[1];
  char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQCompleter_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQCompleter_t qt_meta_stringdata_MyQCompleter = {
   {
  QT_MOC_LITERAL(0, 0, 12), // "MyQCompleter"
  },
  "MyQCompleter"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQCompleter[] = {
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
class Q_DECL_EXPORT MyQCompleter : public QCompleter {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QCompleter::staticMetaObject,
  qt_meta_stringdata_MyQCompleter.data,
  qt_meta_data_MyQCompleter,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQCompleter.stringdata0))
      return static_cast<void*>(this);
  return QCompleter::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QCompleter::qt_metacall(_c, _id, _a);
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
  virtual ~MyQCompleter() {}
// void QCompleter(QObject *)
MyQCompleter(QObject * parent) : QCompleter(parent) {}
// void QCompleter(QAbstractItemModel *, QObject *)
MyQCompleter(QAbstractItemModel * model, QObject * parent) : QCompleter(model, parent) {}
// void QCompleter(const QStringList &, QObject *)
MyQCompleter(const QStringList & completions, QObject * parent) : QCompleter(completions, parent) {}
// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool eventFilter(QObject *, QEvent *)
  virtual bool eventFilter(QObject * o, QEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"eventFilter", &handled, 2, (uint64_t)o, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QCompleter::eventFilter(o, e);
  }
  }

// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QCompleter::event(arg0);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QCompleter_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQCompleter* qo = (MyQCompleter*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcompleter(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcompleter.h:61
// [8] QString tr(const char *, const char *, int) 
// (12)qm2521609089 (26)_ZN10QCompleter2trEPKcS1_i
//static
/*void qm2521609089(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QCompleter::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QCompleter::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcompleter.h:87
// [-2] void QCompleter(QObject *) 
// (12)qm3365477331 (27)_ZN10QCompleterC2EP7QObject
/*void* qm3365477331(QObject * parent)*/{
  auto _nilp = (MyQCompleter*)(0);
  QObject * parent = *(QObject **)this_;
  this_ =  new QCompleter(parent);
  this_ =  new MyQCompleter(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcompleter.h:88
// [-2] void QCompleter(QAbstractItemModel *, QObject *) 
// (12)qm1901837861 (48)_ZN10QCompleterC2EP18QAbstractItemModelP7QObject
/*void* qm1901837861(QAbstractItemModel * model, QObject * parent)*/{
  auto _nilp = (MyQCompleter*)(0);
  QAbstractItemModel * model = *(QAbstractItemModel **)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QCompleter(model, parent);
  this_ =  new MyQCompleter(model, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcompleter.h:90
// [-2] void QCompleter(const QStringList &, QObject *) 
// (12)qm2794415259 (42)_ZN10QCompleterC2ERK11QStringListP7QObject
/*void* qm2794415259(const QStringList & completions, QObject * parent)*/{
  auto _nilp = (MyQCompleter*)(0);
  const QStringList & completions = *(const QStringList *)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QCompleter(completions, parent);
  this_ =  new MyQCompleter(completions, parent);
}


/*void C_ZN10QCompleterD2Ev(void *this_)*/ {
  delete (QCompleter*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qcompleter
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(completer)
#endif // #ifndef QT_MINIMAL
//  footer block end
