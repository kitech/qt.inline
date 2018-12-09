//  header block begin

// /usr/include/qt/QtGui/qtextlist.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextlist.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextList is pure virtual: false
// QTextList has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTextList_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTextList_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTextList_t qt_meta_stringdata_MyQTextList = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQTextList"
  },
  "MyQTextList"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTextList[] = {
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
class Q_DECL_EXPORT MyQTextList : public QTextList {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QTextList::staticMetaObject,
  qt_meta_stringdata_MyQTextList.data,
  qt_meta_data_MyQTextList,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQTextList.stringdata0))
      return static_cast<void*>(this);
  return QTextList::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QTextList::qt_metacall(_c, _id, _a);
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
  virtual ~MyQTextList() {}
// void QTextList(QTextDocument *)
MyQTextList(QTextDocument * doc) : QTextList(doc) {}
};

extern "C" Q_DECL_EXPORT
void* C_QTextList_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQTextList* qo = (MyQTextList*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlist.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QTextList10metaObjectEv(void *this_) {
  return (void*)((QTextList*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlist.h:55
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QTextList11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QTextList*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlist.h:55
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN9QTextList11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QTextList*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlist.h:55
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QTextList2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QTextList::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlist.h:55
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QTextList6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QTextList::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlist.h:57
// [-2] void QTextList(QTextDocument *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QTextListC2EP13QTextDocument(QTextDocument * doc) {
  return  new MyQTextList(doc);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlist.h:58
// [-2] void ~QTextList()
extern "C" Q_DECL_EXPORT
void C_ZN9QTextListD2Ev(void *this_) {
  delete (QTextList*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlist.h:60
// [4] int count()
extern "C" Q_DECL_EXPORT
int C_ZNK9QTextList5countEv(void *this_) {
  return (int)((QTextList*)this_)->count();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlist.h:62
// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QTextList7isEmptyEv(void *this_) {
  return (bool)((QTextList*)this_)->isEmpty();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlist.h:65
// [16] QTextBlock item(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QTextList4itemEi(void *this_, int i) {
  auto rv = ((QTextList*)this_)->item(i);
return new QTextBlock(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlist.h:67
// [4] int itemNumber(const QTextBlock &)
extern "C" Q_DECL_EXPORT
int C_ZNK9QTextList10itemNumberERK10QTextBlock(void *this_, QTextBlock* arg0) {
  return (int)((QTextList*)this_)->itemNumber(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlist.h:68
// [8] QString itemText(const QTextBlock &)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QTextList8itemTextERK10QTextBlock(void *this_, QTextBlock* arg0) {
  auto rv = ((QTextList*)this_)->itemText(*arg0);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlist.h:70
// [-2] void removeItem(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextList10removeItemEi(void *this_, int i) {
  ((QTextList*)this_)->removeItem(i);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlist.h:71
// [-2] void remove(const QTextBlock &)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextList6removeERK10QTextBlock(void *this_, QTextBlock* arg0) {
  ((QTextList*)this_)->remove(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlist.h:73
// [-2] void add(const QTextBlock &)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextList3addERK10QTextBlock(void *this_, QTextBlock* block) {
  ((QTextList*)this_)->add(*block);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlist.h:75
// [-2] void setFormat(const QTextListFormat &)
extern "C" Q_DECL_EXPORT
void C_ZN9QTextList9setFormatERK15QTextListFormat(void *this_, QTextListFormat* format) {
  ((QTextList*)this_)->setFormat(*format);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlist.h:76
// [16] QTextListFormat format()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QTextList6formatEv(void *this_) {
  auto rv = ((QTextList*)this_)->format();
return new QTextListFormat(rv);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
