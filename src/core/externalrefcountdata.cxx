//  header block begin
// /usr/include/qt/QtCore/qsharedpointer_impl.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsharedpointer.h>
#include <QtCore>
#include "callback_inherit.h"

// ExternalRefCountData is pure virtual: false
// ExternalRefCountData has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyExternalRefCountData_t {
  QByteArrayData data[1];
  char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyExternalRefCountData_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyExternalRefCountData_t qt_meta_stringdata_MyExternalRefCountData = {
   {
  QT_MOC_LITERAL(0, 0, 22), // "MyExternalRefCountData"
  },
  "MyExternalRefCountData"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyExternalRefCountData[] = {
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
class Q_DECL_EXPORT MyExternalRefCountData : public QtSharedPointer::ExternalRefCountData {
public:
  virtual ~MyExternalRefCountData() {}
// void ExternalRefCountData(QtSharedPointer::ExternalRefCountData::DestroyerFn)
MyExternalRefCountData(QtSharedPointer::ExternalRefCountData::DestroyerFn d) : QtSharedPointer::ExternalRefCountData(d) {}
// void ExternalRefCountData(Qt::Initialization)
MyExternalRefCountData(Qt::Initialization arg0) : QtSharedPointer::ExternalRefCountData(arg0) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedpointer_impl.h:148
// [-2] void ExternalRefCountData(QtSharedPointer::ExternalRefCountData::DestroyerFn)
extern "C" Q_DECL_EXPORT
void* C_ZN15QtSharedPointer20ExternalRefCountDataC2EPFvPS0_E(QtSharedPointer::ExternalRefCountData::DestroyerFn d) {
  return  new QtSharedPointer::ExternalRefCountData(d);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedpointer_impl.h:154
// [-2] void ExternalRefCountData(Qt::Initialization)
extern "C" Q_DECL_EXPORT
void* C_ZN15QtSharedPointer20ExternalRefCountDataC2EN2Qt14InitializationE(Qt::Initialization arg0) {
  return  new QtSharedPointer::ExternalRefCountData(arg0);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedpointer_impl.h:155
// [-2] void ~ExternalRefCountData()
extern "C" Q_DECL_EXPORT
void C_ZN15QtSharedPointer20ExternalRefCountDataD2Ev(void *this_) {
  delete (QtSharedPointer::ExternalRefCountData*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedpointer_impl.h:157
// [-2] void destroy()
extern "C" Q_DECL_EXPORT
void C_ZN15QtSharedPointer20ExternalRefCountData7destroyEv(void *this_) {
  ((QtSharedPointer::ExternalRefCountData*)this_)->destroy();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedpointer_impl.h:160
// [8] QtSharedPointer::ExternalRefCountData * getAndRef(const QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN15QtSharedPointer20ExternalRefCountData9getAndRefEPK7QObject(const QObject * arg0) {
  return (void*)QtSharedPointer::ExternalRefCountData::getAndRef(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedpointer_impl.h:161
// [-2] void setQObjectShared(const QObject *, bool)
extern "C" Q_DECL_EXPORT
void C_ZN15QtSharedPointer20ExternalRefCountData16setQObjectSharedEPK7QObjectb(void *this_, const QObject * arg0, bool enable) {
  ((QtSharedPointer::ExternalRefCountData*)this_)->setQObjectShared(arg0, enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedpointer_impl.h:162
// [-2] void checkQObjectShared(const QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN15QtSharedPointer20ExternalRefCountData18checkQObjectSharedEPK7QObject(void *this_, const QObject * arg0) {
  ((QtSharedPointer::ExternalRefCountData*)this_)->checkQObjectShared(arg0);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedpointer_impl.h:164
// [-2] void checkQObjectShared(...)
extern "C" Q_DECL_EXPORT
void C_ZN15QtSharedPointer20ExternalRefCountData18checkQObjectSharedEz(void *this_) {
  ((QtSharedPointer::ExternalRefCountData*)this_)->checkQObjectShared();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedpointer_impl.h:165
// [-2] void setQObjectShared(...)
extern "C" Q_DECL_EXPORT
void C_ZN15QtSharedPointer20ExternalRefCountData16setQObjectSharedEz(void *this_) {
  ((QtSharedPointer::ExternalRefCountData*)this_)->setQObjectShared();
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedpointer_impl.h:167
// [-2] void operator delete(void *)
extern "C" Q_DECL_EXPORT
void C_ZN15QtSharedPointer20ExternalRefCountDatadlEPv(void * ptr) {
  QtSharedPointer::ExternalRefCountData::operator delete(ptr);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedpointer_impl.h:168
// [-2] void operator delete(void *, void *)
extern "C" Q_DECL_EXPORT
void C_ZN15QtSharedPointer20ExternalRefCountDatadlEPvS1_(void * arg0, void * arg1) {
  QtSharedPointer::ExternalRefCountData::operator delete(arg0, arg1);
}

//  main block end
