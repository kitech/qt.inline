//  header block begin

// /usr/include/qt/QtWidgets/qgridlayout.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgridlayout.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGridLayout is pure virtual: false false
// QGridLayout has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGridLayout_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGridLayout_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGridLayout_t qt_meta_stringdata_MyQGridLayout = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQGridLayout"
  },
  "MyQGridLayout"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGridLayout[] = {
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
class Q_DECL_EXPORT MyQGridLayout : public QGridLayout {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QGridLayout::staticMetaObject,
  qt_meta_stringdata_MyQGridLayout.data,
  qt_meta_data_MyQGridLayout,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQGridLayout.stringdata0))
      return static_cast<void*>(this);
  return QGridLayout::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QGridLayout::qt_metacall(_c, _id, _a);
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
  virtual ~MyQGridLayout() {}
// void QGridLayout(QWidget *)
MyQGridLayout(QWidget * parent) : QGridLayout(parent) {}
// void QGridLayout()
MyQGridLayout() : QGridLayout() {}
// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void addItem(QLayoutItem *)
  virtual void addItem(QLayoutItem * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"addItem", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGridLayout::addItem(arg0);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QGridLayout_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQGridLayout* qo = (MyQGridLayout*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgridlayout(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgridlayout.h:58
// [8] QString tr(const char *, const char *, int) 
// (11)qm556286028 (27)_ZN11QGridLayout2trEPKcS1_i
//static
/*void qm556286028(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QGridLayout::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QGridLayout::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgridlayout.h:64
// [-2] void QGridLayout(QWidget *) 
// (10)qm11498513 (28)_ZN11QGridLayoutC2EP7QWidget
/*void* qm11498513(QWidget * parent)*/{
  auto _nilp = (MyQGridLayout*)(0);
  QWidget * parent = *(QWidget **)this_;
  this_ =  new QGridLayout(parent);
  this_ =  new MyQGridLayout(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgridlayout.h:65
// [-2] void QGridLayout() 
// (12)qm2533578230 (20)_ZN11QGridLayoutC2Ev
/*void* qm2533578230()*/{
  auto _nilp = (MyQGridLayout*)(0);
  ;
  this_ =  new QGridLayout();
  this_ =  new MyQGridLayout();
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgridlayout.h:102
// [-2] void addWidget(QWidget *) 
// (12)qm2861113405 (36)_ZN11QGridLayout9addWidgetEP7QWidget
//static
/*void qm2861113405(QWidget * w)*/ {
  QWidget * w = *(QWidget **)this_;
  (void) ((QGridLayout*)this_)->addWidget(w);
   auto xptr = (void (QGridLayout::*)(QWidget*) ) &QGridLayout::addWidget;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN11QGridLayoutD2Ev(void *this_)*/ {
  delete (QGridLayout*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgridlayout
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
