//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(undogroup)
// /usr/include/qt/QtWidgets/qundogroup.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qundogroup.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QUndoGroup is pure virtual: false false
// QUndoGroup has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQUndoGroup_t {
  QByteArrayData data[1];
  char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQUndoGroup_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQUndoGroup_t qt_meta_stringdata_MyQUndoGroup = {
   {
  QT_MOC_LITERAL(0, 0, 12), // "MyQUndoGroup"
  },
  "MyQUndoGroup"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQUndoGroup[] = {
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
class Q_DECL_EXPORT MyQUndoGroup : public QUndoGroup {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QUndoGroup::staticMetaObject,
  qt_meta_stringdata_MyQUndoGroup.data,
  qt_meta_data_MyQUndoGroup,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQUndoGroup.stringdata0))
      return static_cast<void*>(this);
  return QUndoGroup::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QUndoGroup::qt_metacall(_c, _id, _a);
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
  virtual ~MyQUndoGroup() {}
// void QUndoGroup(QObject *)
MyQUndoGroup(QObject * parent) : QUndoGroup(parent) {}
};

extern "C" Q_DECL_EXPORT
void* C_QUndoGroup_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQUndoGroup* qo = (MyQUndoGroup*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qundogroup(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundogroup.h:57
// [8] QString tr(const char *, const char *, int) 
// (12)qm4020914237 (26)_ZN10QUndoGroup2trEPKcS1_i
//static
/*void qm4020914237(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QUndoGroup::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QUndoGroup::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundogroup.h:61
// [-2] void QUndoGroup(QObject *) 
// (11)qm171377295 (27)_ZN10QUndoGroupC2EP7QObject
/*void* qm171377295(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QUndoGroup(parent);
  this_ =  new MyQUndoGroup(parent);
}


/*void C_ZN10QUndoGroupD2Ev(void *this_)*/ {
  delete (QUndoGroup*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qundogroup
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(undogroup)
#endif // #ifndef QT_MINIMAL
//  footer block end
