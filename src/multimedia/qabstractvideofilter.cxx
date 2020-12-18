//  header block begin

// /usr/include/qt/QtMultimedia/qabstractvideofilter.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qabstractvideofilter.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAbstractVideoFilter is pure virtual: true true
// QAbstractVideoFilter has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQAbstractVideoFilter_t {
  QByteArrayData data[1];
  char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAbstractVideoFilter_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAbstractVideoFilter_t qt_meta_stringdata_MyQAbstractVideoFilter = {
   {
  QT_MOC_LITERAL(0, 0, 22), // "MyQAbstractVideoFilter"
  },
  "MyQAbstractVideoFilter"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAbstractVideoFilter[] = {
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
class Q_DECL_EXPORT MyQAbstractVideoFilter : public QAbstractVideoFilter {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QAbstractVideoFilter::staticMetaObject,
  qt_meta_stringdata_MyQAbstractVideoFilter.data,
  qt_meta_data_MyQAbstractVideoFilter,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQAbstractVideoFilter.stringdata0))
      return static_cast<void*>(this);
  return QAbstractVideoFilter::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QAbstractVideoFilter::qt_metacall(_c, _id, _a);
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
  virtual ~MyQAbstractVideoFilter() {}
// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [8] QVideoFilterRunnable * createFilterRunnable()
  virtual QVideoFilterRunnable * createFilterRunnable()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"createFilterRunnable", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QVideoFilterRunnable *)(irv);
      // Pointer Pointer QVideoFilterRunnable *
    } else {
    return (QVideoFilterRunnable *){};
  }
  }

// void QAbstractVideoFilter(QObject *)
MyQAbstractVideoFilter(QObject * parent) : QAbstractVideoFilter(parent) {}
};

extern "C" Q_DECL_EXPORT
void* C_QAbstractVideoFilter_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQAbstractVideoFilter* qo = (MyQAbstractVideoFilter*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qabstractvideofilter(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideofilter.h:67
// [8] QString tr(const char *, const char *, int) 
// (12)qm1807963734 (36)_ZN20QAbstractVideoFilter2trEPKcS1_i
//static
/*void qm1807963734(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QAbstractVideoFilter::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QAbstractVideoFilter::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN20QAbstractVideoFilterD2Ev(void *this_)*/ {
  delete (QAbstractVideoFilter*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qabstractvideofilter
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
