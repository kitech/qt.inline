//  header block begin

// /usr/include/qt/QtGui/qtextobject.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextobject.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextFrame is pure virtual: false
// QTextFrame has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTextFrame_t {
  QByteArrayData data[1];
  char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTextFrame_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTextFrame_t qt_meta_stringdata_MyQTextFrame = {
   {
  QT_MOC_LITERAL(0, 0, 12), // "MyQTextFrame"
  },
  "MyQTextFrame"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTextFrame[] = {
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
class Q_DECL_EXPORT MyQTextFrame : public QTextFrame {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QTextFrame::staticMetaObject,
  qt_meta_stringdata_MyQTextFrame.data,
  qt_meta_data_MyQTextFrame,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQTextFrame.stringdata0))
      return static_cast<void*>(this);
  return QTextFrame::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QTextFrame::qt_metacall(_c, _id, _a);
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
  virtual ~MyQTextFrame() {}
// void QTextFrame(QTextDocument *)
MyQTextFrame(QTextDocument * doc) : QTextFrame(doc) {}
};

extern "C" Q_DECL_EXPORT
void* C_QTextFrame_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQTextFrame* qo = (MyQTextFrame*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:120
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextFrame10metaObjectEv(void *this_) {
  return (void*)((QTextFrame*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:120
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QTextFrame11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QTextFrame*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:120
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN10QTextFrame11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QTextFrame*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:120
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QTextFrame2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QTextFrame::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:120
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QTextFrame6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QTextFrame::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:123
// [-2] void QTextFrame(QTextDocument *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QTextFrameC2EP13QTextDocument(QTextDocument * doc) {
  return  new MyQTextFrame(doc);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:124
// [-2] void ~QTextFrame()
extern "C" Q_DECL_EXPORT
void C_ZN10QTextFrameD2Ev(void *this_) {
  delete (QTextFrame*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:126
// [-2] void setFrameFormat(const QTextFrameFormat &)
extern "C" Q_DECL_EXPORT
void C_ZN10QTextFrame14setFrameFormatERK16QTextFrameFormat(void *this_, QTextFrameFormat* format) {
  ((QTextFrame*)this_)->setFrameFormat(*format);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:127
// [16] QTextFrameFormat frameFormat()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextFrame11frameFormatEv(void *this_) {
  auto rv = ((QTextFrame*)this_)->frameFormat();
return new QTextFrameFormat(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:129
// [8] QTextCursor firstCursorPosition()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextFrame19firstCursorPositionEv(void *this_) {
  auto rv = ((QTextFrame*)this_)->firstCursorPosition();
return new QTextCursor(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:130
// [8] QTextCursor lastCursorPosition()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextFrame18lastCursorPositionEv(void *this_) {
  auto rv = ((QTextFrame*)this_)->lastCursorPosition();
return new QTextCursor(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:131
// [4] int firstPosition()
extern "C" Q_DECL_EXPORT
int C_ZNK10QTextFrame13firstPositionEv(void *this_) {
  return (int)((QTextFrame*)this_)->firstPosition();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:132
// [4] int lastPosition()
extern "C" Q_DECL_EXPORT
int C_ZNK10QTextFrame12lastPositionEv(void *this_) {
  return (int)((QTextFrame*)this_)->lastPosition();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:134
// [8] QTextFrameLayoutData * layoutData()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextFrame10layoutDataEv(void *this_) {
  return (void*)((QTextFrame*)this_)->layoutData();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:135
// [-2] void setLayoutData(QTextFrameLayoutData *)
extern "C" Q_DECL_EXPORT
void C_ZN10QTextFrame13setLayoutDataEP20QTextFrameLayoutData(void *this_, QTextFrameLayoutData * data) {
  ((QTextFrame*)this_)->setLayoutData(data);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:137
// [-2] QList<QTextFrame *> childFrames()
extern "C" Q_DECL_EXPORT
QList<QTextFrame *>* C_ZNK10QTextFrame11childFramesEv(void *this_) {
  auto rv = ((QTextFrame*)this_)->childFrames();
return new QList<QTextFrame *>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:138
// [8] QTextFrame * parentFrame()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextFrame11parentFrameEv(void *this_) {
  return (void*)((QTextFrame*)this_)->parentFrame();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:181
// [32] QTextFrame::iterator begin()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextFrame5beginEv(void *this_) {
  auto rv = ((QTextFrame*)this_)->begin();
return new QTextFrame::iterator(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:182
// [32] QTextFrame::iterator end()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextFrame3endEv(void *this_) {
  auto rv = ((QTextFrame*)this_)->end();
return new QTextFrame::iterator(rv);
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
