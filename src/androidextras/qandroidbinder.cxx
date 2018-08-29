//  header block begin
// since 0x050a00
// /usr/include/qt/QtAndroidExtras/qandroidbinder.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qandroidbinder.h>
#include <QtAndroidExtras>
#include "callback_inherit.h"

// QAndroidBinder is pure virtual: false
// QAndroidBinder has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQAndroidBinder_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAndroidBinder_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAndroidBinder_t qt_meta_stringdata_MyQAndroidBinder = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQAndroidBinder"
  },
  "MyQAndroidBinder"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAndroidBinder[] = {
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
class Q_DECL_EXPORT MyQAndroidBinder : public QAndroidBinder {
public:
  virtual ~MyQAndroidBinder() {}
// void QAndroidBinder()
MyQAndroidBinder() : QAndroidBinder() {}
// void QAndroidBinder(const QAndroidJniObject &)
MyQAndroidBinder(const QAndroidJniObject & binder) : QAndroidBinder(binder) {}
};
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidbinder.h:62
// [-2] void QAndroidBinder()
extern "C" Q_DECL_EXPORT
void* C_ZN14QAndroidBinderC2Ev() {
  return  new QAndroidBinder();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidbinder.h:63
// [-2] void QAndroidBinder(const QAndroidJniObject &)
extern "C" Q_DECL_EXPORT
void* C_ZN14QAndroidBinderC2ERK17QAndroidJniObject(QAndroidJniObject* binder) {
  return  new QAndroidBinder(*binder);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidbinder.h:65
// [-2] void ~QAndroidBinder()
extern "C" Q_DECL_EXPORT
void C_ZN14QAndroidBinderD2Ev(void *this_) {
  delete (QAndroidBinder*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidbinder.h:67
// [1] bool onTransact(int, const QAndroidParcel &, const QAndroidParcel &, QAndroidBinder::CallType)
extern "C" Q_DECL_EXPORT
bool C_ZN14QAndroidBinder10onTransactEiRK14QAndroidParcelS2_NS_8CallTypeE(void *this_, int code, QAndroidParcel* data, QAndroidParcel* reply, QAndroidBinder::CallType flags) {
  return (bool)((QAndroidBinder*)this_)->onTransact(code, *data, *reply, flags);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidbinder.h:68
// [1] bool transact(int, const QAndroidParcel &, QAndroidParcel *, QAndroidBinder::CallType)
extern "C" Q_DECL_EXPORT
bool C_ZNK14QAndroidBinder8transactEiRK14QAndroidParcelPS0_NS_8CallTypeE(void *this_, int code, QAndroidParcel* data, QAndroidParcel * reply, QAndroidBinder::CallType flags) {
  return (bool)((QAndroidBinder*)this_)->transact(code, *data, reply, flags);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidbinder.h:70
// [16] QAndroidJniObject handle()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QAndroidBinder6handleEv(void *this_) {
  auto rv = ((QAndroidBinder*)this_)->handle();
return new QAndroidJniObject(rv);
}

//  main block end
