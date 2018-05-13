//  header block begin
// since 0x050a00
// /usr/include/qt/QtAndroidExtras/qandroidparcel.h
#ifndef protected
#define protected public
#endif
#include <qandroidparcel.h>
#include <QtAndroidExtras>
#include "callback_inherit.h"

// QAndroidParcel is pure virtual: false
// QAndroidParcel has virtual projected: false
//  header block end

//  main block begin

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
