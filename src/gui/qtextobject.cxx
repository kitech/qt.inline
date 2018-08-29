//  header block begin
// /usr/include/qt/QtGui/qtextobject.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextobject.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextObject is pure virtual: false
// QTextObject has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQTextObject_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTextObject_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTextObject_t qt_meta_stringdata_MyQTextObject = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQTextObject"
  },
  "MyQTextObject"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTextObject[] = {
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
class Q_DECL_EXPORT MyQTextObject : public QTextObject {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QTextObject::staticMetaObject,
  qt_meta_stringdata_MyQTextObject.data,
  qt_meta_data_MyQTextObject,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQTextObject.stringdata0))
      return static_cast<void*>(this);
  return QTextObject::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QTextObject::qt_metacall(_c, _id, _a);
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
};
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:62
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextObject10metaObjectEv(void *this_) {
  return (void*)((QTextObject*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:62
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextObject11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QTextObject*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:62
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN11QTextObject11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QTextObject*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:62
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextObject2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QTextObject::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:62
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextObject6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QTextObject::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:71
// [16] QTextFormat format()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextObject6formatEv(void *this_) {
  auto rv = ((QTextObject*)this_)->format();
return new QTextFormat(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:72
// [4] int formatIndex()
extern "C" Q_DECL_EXPORT
int C_ZNK11QTextObject11formatIndexEv(void *this_) {
  return (int)((QTextObject*)this_)->formatIndex();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:74
// [8] QTextDocument * document()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextObject8documentEv(void *this_) {
  return (void*)((QTextObject*)this_)->document();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:76
// [4] int objectIndex()
extern "C" Q_DECL_EXPORT
int C_ZNK11QTextObject11objectIndexEv(void *this_) {
  return (int)((QTextObject*)this_)->objectIndex();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:78
// [8] QTextDocumentPrivate * docHandle()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextObject9docHandleEv(void *this_) {
  return (void*)((QTextObject*)this_)->docHandle();
}

//  main block end
