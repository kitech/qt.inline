//  header block begin
// /usr/include/qt/QtWidgets/qdatetimeedit.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qdatetimeedit.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QTimeEdit is pure virtual: false
// QTimeEdit has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQTimeEdit_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTimeEdit_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTimeEdit_t qt_meta_stringdata_MyQTimeEdit = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQTimeEdit"
  },
  "MyQTimeEdit"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTimeEdit[] = {
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
class Q_DECL_EXPORT MyQTimeEdit : public QTimeEdit {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QTimeEdit::staticMetaObject,
  qt_meta_stringdata_MyQTimeEdit.data,
  qt_meta_data_MyQTimeEdit,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQTimeEdit.stringdata0))
      return static_cast<void*>(this);
  return QTimeEdit::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QTimeEdit::qt_metacall(_c, _id, _a);
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
  virtual ~MyQTimeEdit() {}
// void QTimeEdit(QWidget *)
MyQTimeEdit(QWidget * parent) : QTimeEdit(parent) {}
// void QTimeEdit(const QTime &, QWidget *)
MyQTimeEdit(const QTime & time, QWidget * parent) : QTimeEdit(time, parent) {}
};
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:204
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QTimeEdit10metaObjectEv(void *this_) {
  return (void*)((QTimeEdit*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:204
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QTimeEdit11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QTimeEdit*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:204
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN9QTimeEdit11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QTimeEdit*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:204
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QTimeEdit2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QTimeEdit::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:204
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QTimeEdit6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QTimeEdit::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:207
// [-2] void QTimeEdit(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QTimeEditC2EP7QWidget(QWidget * parent) {
  return  new MyQTimeEdit(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:208
// [-2] void QTimeEdit(const QTime &, QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QTimeEditC2ERK5QTimeP7QWidget(QTime* time, QWidget * parent) {
  return  new MyQTimeEdit(*time, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:209
// [-2] void ~QTimeEdit()
extern "C" Q_DECL_EXPORT
void C_ZN9QTimeEditD2Ev(void *this_) {
  delete (QTimeEdit*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:212
// [-2] void userTimeChanged(const QTime &)
extern "C" Q_DECL_EXPORT
void C_ZN9QTimeEdit15userTimeChangedERK5QTime(void *this_, QTime* time) {
  ((QTimeEdit*)this_)->userTimeChanged(*time);
}

//  main block end
