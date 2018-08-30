//  header block begin
// since 0x050a00
// /usr/include/qt/QtAndroidExtras/qandroidparcel.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qandroidparcel.h>
#include <QtAndroidExtras>
#include "callback_inherit.h"

// QAndroidParcel is pure virtual: false
// QAndroidParcel has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQAndroidParcel_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAndroidParcel_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAndroidParcel_t qt_meta_stringdata_MyQAndroidParcel = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQAndroidParcel"
  },
  "MyQAndroidParcel"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAndroidParcel[] = {
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
class Q_DECL_EXPORT MyQAndroidParcel : public QAndroidParcel {
public:
  virtual ~MyQAndroidParcel() {}
// void QAndroidParcel()
MyQAndroidParcel() : QAndroidParcel() {}
// void QAndroidParcel(const QAndroidJniObject &)
MyQAndroidParcel(const QAndroidJniObject & parcel) : QAndroidParcel(parcel) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidparcel.h:54
// [-2] void QAndroidParcel()
extern "C" Q_DECL_EXPORT
void* C_ZN14QAndroidParcelC2Ev() {
  return  new QAndroidParcel();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidparcel.h:55
// [-2] void QAndroidParcel(const QAndroidJniObject &)
extern "C" Q_DECL_EXPORT
void* C_ZN14QAndroidParcelC2ERK17QAndroidJniObject(QAndroidJniObject* parcel) {
  return  new QAndroidParcel(*parcel);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidparcel.h:56
// [-2] void ~QAndroidParcel()
extern "C" Q_DECL_EXPORT
void C_ZN14QAndroidParcelD2Ev(void *this_) {
  delete (QAndroidParcel*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidparcel.h:58
// [-2] void writeData(const QByteArray &)
extern "C" Q_DECL_EXPORT
void C_ZNK14QAndroidParcel9writeDataERK10QByteArray(void *this_, QByteArray* data) {
  ((QAndroidParcel*)this_)->writeData(*data);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidparcel.h:59
// [-2] void writeVariant(const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZNK14QAndroidParcel12writeVariantERK8QVariant(void *this_, QVariant* value) {
  ((QAndroidParcel*)this_)->writeVariant(*value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidparcel.h:60
// [-2] void writeBinder(const QAndroidBinder &)
extern "C" Q_DECL_EXPORT
void C_ZNK14QAndroidParcel11writeBinderERK14QAndroidBinder(void *this_, QAndroidBinder* binder) {
  ((QAndroidParcel*)this_)->writeBinder(*binder);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidparcel.h:61
// [-2] void writeFileDescriptor(int)
extern "C" Q_DECL_EXPORT
void C_ZNK14QAndroidParcel19writeFileDescriptorEi(void *this_, int fd) {
  ((QAndroidParcel*)this_)->writeFileDescriptor(fd);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidparcel.h:63
// [8] QByteArray readData()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QAndroidParcel8readDataEv(void *this_) {
  auto rv = ((QAndroidParcel*)this_)->readData();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidparcel.h:64
// [16] QVariant readVariant()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QAndroidParcel11readVariantEv(void *this_) {
  auto rv = ((QAndroidParcel*)this_)->readVariant();
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidparcel.h:65
// [24] QAndroidBinder readBinder()
extern "C" Q_DECL_EXPORT
void C_ZNK14QAndroidParcel10readBinderEv(void *this_) {
  auto rv = ((QAndroidParcel*)this_)->readBinder();
/*return rv;*/
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidparcel.h:66
// [4] int readFileDescriptor()
extern "C" Q_DECL_EXPORT
int C_ZNK14QAndroidParcel18readFileDescriptorEv(void *this_) {
  return (int)((QAndroidParcel*)this_)->readFileDescriptor();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidparcel.h:68
// [16] QAndroidJniObject handle()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QAndroidParcel6handleEv(void *this_) {
  auto rv = ((QAndroidParcel*)this_)->handle();
return new QAndroidJniObject(rv);
}

//  main block end
