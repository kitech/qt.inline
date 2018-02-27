//  header block begin
// /usr/include/qt/QtCore/qmetaobject.h
#ifndef protected
#define protected public
#endif
#include <qmetaobject.h>
#include <QtCore>
#include "callback_inherit.h"

// QMetaMethod is pure virtual: false
// QMetaMethod has virtual projected: false
//  header block end

//  main block begin

class MyQMetaMethod : public QMetaMethod {
public:
  virtual ~MyQMetaMethod() {}
// void QMetaMethod()
MyQMetaMethod() : QMetaMethod() {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:57
// [-2] void QMetaMethod()
extern "C"
void* C_ZN11QMetaMethodC2Ev() {
  return  new QMetaMethod();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:59
// [8] QByteArray methodSignature()
extern "C"
void* C_ZNK11QMetaMethod15methodSignatureEv(void *this_) {
  auto rv = ((QMetaMethod*)this_)->methodSignature();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:60
// [8] QByteArray name()
extern "C"
void* C_ZNK11QMetaMethod4nameEv(void *this_) {
  auto rv = ((QMetaMethod*)this_)->name();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:61
// [8] const char * typeName()
extern "C"
void* C_ZNK11QMetaMethod8typeNameEv(void *this_) {
  return (void*)((QMetaMethod*)this_)->typeName();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:62
// [4] int returnType()
extern "C"
int C_ZNK11QMetaMethod10returnTypeEv(void *this_) {
  return (int)((QMetaMethod*)this_)->returnType();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:63
// [4] int parameterCount()
extern "C"
int C_ZNK11QMetaMethod14parameterCountEv(void *this_) {
  return (int)((QMetaMethod*)this_)->parameterCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:64
// [4] int parameterType(int)
extern "C"
int C_ZNK11QMetaMethod13parameterTypeEi(void *this_, int index) {
  return (int)((QMetaMethod*)this_)->parameterType(index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:65
// [-2] void getParameterTypes(int *)
extern "C"
void C_ZNK11QMetaMethod17getParameterTypesEPi(void *this_, int * types) {
  ((QMetaMethod*)this_)->getParameterTypes(types);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:68
// [8] const char * tag()
extern "C"
void* C_ZNK11QMetaMethod3tagEv(void *this_) {
  return (void*)((QMetaMethod*)this_)->tag();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:70
// [4] QMetaMethod::Access access()
extern "C"
QMetaMethod::Access C_ZNK11QMetaMethod6accessEv(void *this_) {
  return (QMetaMethod::Access)((QMetaMethod*)this_)->access();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:72
// [4] QMetaMethod::MethodType methodType()
extern "C"
QMetaMethod::MethodType C_ZNK11QMetaMethod10methodTypeEv(void *this_) {
  return (QMetaMethod::MethodType)((QMetaMethod*)this_)->methodType();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:74
// [4] int attributes()
extern "C"
int C_ZNK11QMetaMethod10attributesEv(void *this_) {
  return (int)((QMetaMethod*)this_)->attributes();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:75
// [4] int methodIndex()
extern "C"
int C_ZNK11QMetaMethod11methodIndexEv(void *this_) {
  return (int)((QMetaMethod*)this_)->methodIndex();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:76
// [4] int revision()
extern "C"
int C_ZNK11QMetaMethod8revisionEv(void *this_) {
  return (int)((QMetaMethod*)this_)->revision();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:78
// [8] const QMetaObject * enclosingMetaObject()
extern "C"
void* C_ZNK11QMetaMethod19enclosingMetaObjectEv(void *this_) {
  return (void*)((QMetaMethod*)this_)->enclosingMetaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:80
// [1] bool invoke(class QObject *, Qt::ConnectionType, class QGenericReturnArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument)
extern "C"
bool C_ZNK11QMetaMethod6invokeEP7QObjectN2Qt14ConnectionTypeE22QGenericReturnArgument16QGenericArgumentS5_S5_S5_S5_S5_S5_S5_S5_S5_(void *this_, QObject * object, Qt::ConnectionType connectionType, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9) {
  return (bool)((QMetaMethod*)this_)->invoke(object, connectionType, *returnValue, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8, *val9);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:93
// [1] bool invoke(class QObject *, class QGenericReturnArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument)
extern "C"
bool C_ZNK11QMetaMethod6invokeEP7QObject22QGenericReturnArgument16QGenericArgumentS3_S3_S3_S3_S3_S3_S3_S3_S3_(void *this_, QObject * object, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9) {
  return (bool)((QMetaMethod*)this_)->invoke(object, *returnValue, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8, *val9);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:109
// [1] bool invoke(class QObject *, Qt::ConnectionType, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument)
extern "C"
bool C_ZNK11QMetaMethod6invokeEP7QObjectN2Qt14ConnectionTypeE16QGenericArgumentS4_S4_S4_S4_S4_S4_S4_S4_S4_(void *this_, QObject * object, Qt::ConnectionType connectionType, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9) {
  return (bool)((QMetaMethod*)this_)->invoke(object, connectionType, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8, *val9);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:125
// [1] bool invoke(class QObject *, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument)
extern "C"
bool C_ZNK11QMetaMethod6invokeEP7QObject16QGenericArgumentS2_S2_S2_S2_S2_S2_S2_S2_S2_(void *this_, QObject * object, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9) {
  return (bool)((QMetaMethod*)this_)->invoke(object, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8, *val9);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:141
// [1] bool invokeOnGadget(void *, class QGenericReturnArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument)
extern "C"
bool C_ZNK11QMetaMethod14invokeOnGadgetEPv22QGenericReturnArgument16QGenericArgumentS2_S2_S2_S2_S2_S2_S2_S2_S2_(void *this_, void * gadget, QGenericReturnArgument* returnValue, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9) {
  return (bool)((QMetaMethod*)this_)->invokeOnGadget(gadget, *returnValue, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8, *val9);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:153
// [1] bool invokeOnGadget(void *, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument)
extern "C"
bool C_ZNK11QMetaMethod14invokeOnGadgetEPv16QGenericArgumentS1_S1_S1_S1_S1_S1_S1_S1_S1_(void *this_, void * gadget, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9) {
  return (bool)((QMetaMethod*)this_)->invokeOnGadget(gadget, *val0, *val1, *val2, *val3, *val4, *val5, *val6, *val7, *val8, *val9);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:169
// [1] bool isValid()
extern "C"
bool C_ZNK11QMetaMethod7isValidEv(void *this_) {
  return (bool)((QMetaMethod*)this_)->isValid();
}


extern "C"
void C_ZN11QMetaMethodD2Ev(void *this_) {
  delete (QMetaMethod*)(this_);
}
//  main block end
