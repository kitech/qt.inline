//  header block begin
// since 0x050200
// /usr/include/qt/QtQml/qqmlfileselector.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlfileselector.h>
#include <QtQml>
#include "callback_inherit.h"

// QQmlFileSelector is pure virtual: false
// QQmlFileSelector has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQQmlFileSelector_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQQmlFileSelector_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQQmlFileSelector_t qt_meta_stringdata_MyQQmlFileSelector = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQQmlFileSelector"
  },
  "MyQQmlFileSelector"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQQmlFileSelector[] = {
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
class Q_DECL_EXPORT MyQQmlFileSelector : public QQmlFileSelector {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QQmlFileSelector::staticMetaObject,
  qt_meta_stringdata_MyQQmlFileSelector.data,
  qt_meta_data_MyQQmlFileSelector,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQQmlFileSelector.stringdata0))
      return static_cast<void*>(this);
  return QQmlFileSelector::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QQmlFileSelector::qt_metacall(_c, _id, _a);
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
  virtual ~MyQQmlFileSelector() {}
// void QQmlFileSelector(QQmlEngine *, QObject *)
MyQQmlFileSelector(QQmlEngine * engine, QObject * parent) : QQmlFileSelector(engine, parent) {}
};
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlfileselector.h:54
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QQmlFileSelector10metaObjectEv(void *this_) {
  return (void*)((QQmlFileSelector*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlfileselector.h:54
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QQmlFileSelector11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QQmlFileSelector*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlfileselector.h:54
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN16QQmlFileSelector11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QQmlFileSelector*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlfileselector.h:54
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN16QQmlFileSelector2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QQmlFileSelector::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlfileselector.h:54
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN16QQmlFileSelector6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QQmlFileSelector::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlfileselector.h:57
// [-2] void QQmlFileSelector(QQmlEngine *, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QQmlFileSelectorC2EP10QQmlEngineP7QObject(QQmlEngine * engine, QObject * parent) {
  return  new MyQQmlFileSelector(engine, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlfileselector.h:58
// [-2] void ~QQmlFileSelector()
extern "C" Q_DECL_EXPORT
void C_ZN16QQmlFileSelectorD2Ev(void *this_) {
  delete (QQmlFileSelector*)(this_);
}
// Public Visibility=Default Availability=Available
// since 5.7
// /usr/include/qt/QtQml/qqmlfileselector.h:59
// [8] QFileSelector * selector()
#if QT_VERSION >= 0x050700
extern "C" Q_DECL_EXPORT
void* C_ZNK16QQmlFileSelector8selectorEv(void *this_) {
  return (void*)((QQmlFileSelector*)this_)->selector();
}
#endif // QT_VERSION >= 0x050700

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlfileselector.h:60
// [-2] void setSelector(QFileSelector *)
extern "C" Q_DECL_EXPORT
void C_ZN16QQmlFileSelector11setSelectorEP13QFileSelector(void *this_, QFileSelector * selector) {
  ((QQmlFileSelector*)this_)->setSelector(selector);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlfileselector.h:61
// [-2] void setExtraSelectors(QStringList &)
extern "C" Q_DECL_EXPORT
void C_ZN16QQmlFileSelector17setExtraSelectorsER11QStringList(void *this_, QStringList* strings) {
  ((QQmlFileSelector*)this_)->setExtraSelectors(*strings);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlfileselector.h:62
// [-2] void setExtraSelectors(const QStringList &)
extern "C" Q_DECL_EXPORT
void C_ZN16QQmlFileSelector17setExtraSelectorsERK11QStringList(void *this_, QStringList* strings) {
  ((QQmlFileSelector*)this_)->setExtraSelectors(*strings);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qqmlfileselector.h:63
// [8] QQmlFileSelector * get(QQmlEngine *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QQmlFileSelector3getEP10QQmlEngine(QQmlEngine * arg0) {
  return (void*)QQmlFileSelector::get(arg0);
}

//  main block end
