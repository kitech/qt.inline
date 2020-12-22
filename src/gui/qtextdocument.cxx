//  header block begin

// /usr/include/qt/QtGui/qtextdocument.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextdocument.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextDocument is pure virtual: false false
// QTextDocument has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTextDocument_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTextDocument_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTextDocument_t qt_meta_stringdata_MyQTextDocument = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQTextDocument"
  },
  "MyQTextDocument"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTextDocument[] = {
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
class Q_DECL_EXPORT MyQTextDocument : public QTextDocument {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QTextDocument::staticMetaObject,
  qt_meta_stringdata_MyQTextDocument.data,
  qt_meta_data_MyQTextDocument,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQTextDocument.stringdata0))
      return static_cast<void*>(this);
  return QTextDocument::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QTextDocument::qt_metacall(_c, _id, _a);
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
  virtual ~MyQTextDocument() {}
// void QTextDocument(QObject *)
MyQTextDocument(QObject * parent) : QTextDocument(parent) {}
// void QTextDocument(const QString &, QObject *)
MyQTextDocument(const QString & text, QObject * parent) : QTextDocument(text, parent) {}
// Protected virtual Direct Visibility=Default Availability=Available
// [8] QTextObject * createObject(const QTextFormat &)
  virtual QTextObject * createObject(const QTextFormat & f)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"createObject", &handled, 1, (uint64_t)&f, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QTextObject *)(irv);
      // Pointer Pointer QTextObject *
    } else {
    return QTextDocument::createObject(f);
  }
  }

// Protected virtual Indirect Visibility=Default Availability=Available
// [16] QVariant loadResource(int, const QUrl &)
  virtual QVariant loadResource(int type_, const QUrl & name)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"loadResource", &handled, 2, (uint64_t)type_, (uint64_t)&name, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QVariant){};}
    auto prv = (QVariant*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QVariant
    } else {
    return QTextDocument::loadResource(type_, name);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QTextDocument_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQTextDocument* qo = (MyQTextDocument*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtextdocument(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:99
// [8] QString tr(const char *, const char *, int) 
// (12)qm1307630413 (29)_ZN13QTextDocument2trEPKcS1_i
//static
/*void qm1307630413(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QTextDocument::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QTextDocument::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:119
// [-2] void QTextDocument(QObject *) 
// (12)qm1519397152 (30)_ZN13QTextDocumentC2EP7QObject
/*void* qm1519397152(QObject * parent)*/{
  auto _nilp = (MyQTextDocument*)(0);
  QObject * parent = *(QObject **)this_;
  this_ =  new QTextDocument(parent);
  this_ =  new MyQTextDocument(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:120
// [-2] void QTextDocument(const QString &, QObject *) 
// (12)qm2073997518 (40)_ZN13QTextDocumentC2ERK7QStringP7QObject
/*void* qm2073997518(const QString & text, QObject * parent)*/{
  auto _nilp = (MyQTextDocument*)(0);
  const QString & text = *(const QString *)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QTextDocument(text, parent);
  this_ =  new MyQTextDocument(text, parent);
}


/*void C_ZN13QTextDocumentD2Ev(void *this_)*/ {
  delete (QTextDocument*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtextdocument
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
