//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(formlayout)
// /usr/include/qt/QtWidgets/qformlayout.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qformlayout.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QFormLayout is pure virtual: false false
// QFormLayout has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQFormLayout_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQFormLayout_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQFormLayout_t qt_meta_stringdata_MyQFormLayout = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQFormLayout"
  },
  "MyQFormLayout"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQFormLayout[] = {
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
class Q_DECL_EXPORT MyQFormLayout : public QFormLayout {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QFormLayout::staticMetaObject,
  qt_meta_stringdata_MyQFormLayout.data,
  qt_meta_data_MyQFormLayout,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQFormLayout.stringdata0))
      return static_cast<void*>(this);
  return QFormLayout::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QFormLayout::qt_metacall(_c, _id, _a);
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
  virtual ~MyQFormLayout() {}
// void QFormLayout(QWidget *)
MyQFormLayout(QWidget * parent) : QFormLayout(parent) {}
};

extern "C" Q_DECL_EXPORT
void* C_QFormLayout_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQFormLayout* qo = (MyQFormLayout*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qformlayout(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:55
// [8] QString tr(const char *, const char *, int) 
// (12)qm2849232529 (27)_ZN11QFormLayout2trEPKcS1_i
//static
/*void qm2849232529(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QFormLayout::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QFormLayout::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:91
// [-2] void QFormLayout(QWidget *) 
// (12)qm4165280238 (28)_ZN11QFormLayoutC2EP7QWidget
/*void* qm4165280238(QWidget * parent)*/{
  QWidget * parent = *(QWidget **)this_;
  this_ =  new QFormLayout(parent);
  this_ =  new MyQFormLayout(parent);
}


/*void C_ZN11QFormLayoutD2Ev(void *this_)*/ {
  delete (QFormLayout*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qformlayout
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(formlayout)
#endif // #ifndef QT_MINIMAL
//  footer block end
