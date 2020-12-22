//  header block begin

// /usr/include/qt/QtWidgets/qstackedlayout.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstackedlayout.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStackedLayout is pure virtual: false false
// QStackedLayout has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQStackedLayout_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStackedLayout_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStackedLayout_t qt_meta_stringdata_MyQStackedLayout = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQStackedLayout"
  },
  "MyQStackedLayout"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStackedLayout[] = {
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
class Q_DECL_EXPORT MyQStackedLayout : public QStackedLayout {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QStackedLayout::staticMetaObject,
  qt_meta_stringdata_MyQStackedLayout.data,
  qt_meta_data_MyQStackedLayout,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQStackedLayout.stringdata0))
      return static_cast<void*>(this);
  return QStackedLayout::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QStackedLayout::qt_metacall(_c, _id, _a);
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
  virtual ~MyQStackedLayout() {}
// void QStackedLayout()
MyQStackedLayout() : QStackedLayout() {}
// void QStackedLayout(QWidget *)
MyQStackedLayout(QWidget * parent) : QStackedLayout(parent) {}
// void QStackedLayout(QLayout *)
MyQStackedLayout(QLayout * parentLayout) : QStackedLayout(parentLayout) {}
};

extern "C" Q_DECL_EXPORT
void* C_QStackedLayout_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQStackedLayout* qo = (MyQStackedLayout*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstackedlayout(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:53
// [8] QString tr(const char *, const char *, int) 
// (11)qm468850714 (30)_ZN14QStackedLayout2trEPKcS1_i
//static
/*void qm468850714(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QStackedLayout::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QStackedLayout::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:66
// [-2] void QStackedLayout() 
// (12)qm2274557352 (23)_ZN14QStackedLayoutC2Ev
/*void* qm2274557352()*/{
  ;
  this_ =  new QStackedLayout();
  this_ =  new MyQStackedLayout();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:67
// [-2] void QStackedLayout(QWidget *) 
// (12)qm2191350408 (31)_ZN14QStackedLayoutC2EP7QWidget
/*void* qm2191350408(QWidget * parent)*/{
  QWidget * parent = *(QWidget **)this_;
  this_ =  new QStackedLayout(parent);
  this_ =  new MyQStackedLayout(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:68
// [-2] void QStackedLayout(QLayout *) 
// (12)qm1029582778 (31)_ZN14QStackedLayoutC2EP7QLayout
/*void* qm1029582778(QLayout * parentLayout)*/{
  QLayout * parentLayout = *(QLayout **)this_;
  this_ =  new QStackedLayout(parentLayout);
  this_ =  new MyQStackedLayout(parentLayout);
}


/*void C_ZN14QStackedLayoutD2Ev(void *this_)*/ {
  delete (QStackedLayout*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstackedlayout
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
