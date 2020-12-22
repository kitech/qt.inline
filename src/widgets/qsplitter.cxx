//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(splitter)
// /usr/include/qt/QtWidgets/qsplitter.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsplitter.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QSplitter is pure virtual: false false
// QSplitter has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSplitter_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSplitter_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSplitter_t qt_meta_stringdata_MyQSplitter = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQSplitter"
  },
  "MyQSplitter"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSplitter[] = {
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
class Q_DECL_EXPORT MyQSplitter : public QSplitter {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QSplitter::staticMetaObject,
  qt_meta_stringdata_MyQSplitter.data,
  qt_meta_data_MyQSplitter,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQSplitter.stringdata0))
      return static_cast<void*>(this);
  return QSplitter::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QSplitter::qt_metacall(_c, _id, _a);
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
  virtual ~MyQSplitter() {}
// void QSplitter(QWidget *)
MyQSplitter(QWidget * parent) : QSplitter(parent) {}
// void QSplitter(Qt::Orientation, QWidget *)
MyQSplitter(Qt::Orientation arg0, QWidget * parent) : QSplitter(arg0, parent) {}
// Protected virtual Direct Visibility=Default Availability=Available
// [8] QSplitterHandle * createHandle()
  virtual QSplitterHandle * createHandle()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"createHandle", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QSplitterHandle *)(irv);
      // Pointer Pointer QSplitterHandle *
    } else {
    return QSplitter::createHandle();
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void childEvent(QChildEvent *)
  virtual void childEvent(QChildEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"childEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QSplitter::childEvent(arg0);
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
    return QSplitter::event(arg0);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void resizeEvent(QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"resizeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QSplitter::resizeEvent(arg0);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void changeEvent(QEvent *)
  virtual void changeEvent(QEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"changeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QSplitter::changeEvent(arg0);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QSplitter_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQSplitter* qo = (MyQSplitter*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsplitter(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:59
// [8] QString tr(const char *, const char *, int) 
// (12)qm3902819490 (24)_ZN9QSplitter2trEPKcS1_i
//static
/*void qm3902819490(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QSplitter::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QSplitter::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:67
// [-2] void QSplitter(QWidget *) 
// (12)qm1205089122 (25)_ZN9QSplitterC2EP7QWidget
/*void* qm1205089122(QWidget * parent)*/{
  auto _nilp = (MyQSplitter*)(0);
  QWidget * parent = *(QWidget **)this_;
  this_ =  new QSplitter(parent);
  this_ =  new MyQSplitter(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:68
// [-2] void QSplitter(Qt::Orientation, QWidget *) 
// (12)qm3729933434 (43)_ZN9QSplitterC2EN2Qt11OrientationEP7QWidget
/*void* qm3729933434(Qt::Orientation arg0, QWidget * parent)*/{
  auto _nilp = (MyQSplitter*)(0);
  Qt::Orientation arg0 = *(Qt::Orientation*)this_; QWidget * parent = *(QWidget **)this_;
  this_ =  new QSplitter(arg0, parent);
  this_ =  new MyQSplitter(arg0, parent);
}


/*void C_ZN9QSplitterD2Ev(void *this_)*/ {
  delete (QSplitter*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsplitter
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(splitter)
#endif // #ifndef QT_MINIMAL
//  footer block end
