//  header block begin
// /usr/include/qt/QtCore/qmetaobject.h
#include <qmetaobject.h>
#include <QtCore>

//  header block end

//  main block begin
// inline
// /usr/include/qt/QtCore/qmetaobject.h:57
// void QMetaMethod()
extern "C"
void* C_ZN11QMetaMethodC1Ev() {
  return new QMetaMethod();
}
// /usr/include/qt/QtCore/qmetaobject.h:59
// QByteArray methodSignature()
extern "C"
void C_ZNK11QMetaMethod15methodSignatureEv(void *this_) {
  /*return*/ ((QMetaMethod*)this_)->methodSignature();
}
// /usr/include/qt/QtCore/qmetaobject.h:60
// QByteArray name()
extern "C"
void C_ZNK11QMetaMethod4nameEv(void *this_) {
  /*return*/ ((QMetaMethod*)this_)->name();
}
// /usr/include/qt/QtCore/qmetaobject.h:61
// const char * typeName()
extern "C"
void C_ZNK11QMetaMethod8typeNameEv(void *this_) {
  /*return*/ ((QMetaMethod*)this_)->typeName();
}
// /usr/include/qt/QtCore/qmetaobject.h:62
// int returnType()
extern "C"
void C_ZNK11QMetaMethod10returnTypeEv(void *this_) {
  /*return*/ ((QMetaMethod*)this_)->returnType();
}
// /usr/include/qt/QtCore/qmetaobject.h:63
// int parameterCount()
extern "C"
void C_ZNK11QMetaMethod14parameterCountEv(void *this_) {
  /*return*/ ((QMetaMethod*)this_)->parameterCount();
}
// /usr/include/qt/QtCore/qmetaobject.h:64
// int parameterType(int)
extern "C"
void C_ZNK11QMetaMethod13parameterTypeEi(void *this_, int index) {
  /*return*/ ((QMetaMethod*)this_)->parameterType(index);
}
// /usr/include/qt/QtCore/qmetaobject.h:65
// void getParameterTypes(int *)
extern "C"
void C_ZNK11QMetaMethod17getParameterTypesEPi(void *this_, int * types) {
  ((QMetaMethod*)this_)->getParameterTypes(types);
}
// /usr/include/qt/QtCore/qmetaobject.h:66
// QList<QByteArray> parameterTypes()
extern "C"
void C_ZNK11QMetaMethod14parameterTypesEv(void *this_) {
  /*return*/ ((QMetaMethod*)this_)->parameterTypes();
}
// /usr/include/qt/QtCore/qmetaobject.h:67
// QList<QByteArray> parameterNames()
extern "C"
void C_ZNK11QMetaMethod14parameterNamesEv(void *this_) {
  /*return*/ ((QMetaMethod*)this_)->parameterNames();
}
// /usr/include/qt/QtCore/qmetaobject.h:68
// const char * tag()
extern "C"
void C_ZNK11QMetaMethod3tagEv(void *this_) {
  /*return*/ ((QMetaMethod*)this_)->tag();
}
// /usr/include/qt/QtCore/qmetaobject.h:70
// QMetaMethod::Access access()
extern "C"
void C_ZNK11QMetaMethod6accessEv(void *this_) {
  /*return*/ ((QMetaMethod*)this_)->access();
}
// /usr/include/qt/QtCore/qmetaobject.h:72
// QMetaMethod::MethodType methodType()
extern "C"
void C_ZNK11QMetaMethod10methodTypeEv(void *this_) {
  /*return*/ ((QMetaMethod*)this_)->methodType();
}
// /usr/include/qt/QtCore/qmetaobject.h:74
// int attributes()
extern "C"
void C_ZNK11QMetaMethod10attributesEv(void *this_) {
  /*return*/ ((QMetaMethod*)this_)->attributes();
}
// /usr/include/qt/QtCore/qmetaobject.h:75
// int methodIndex()
extern "C"
void C_ZNK11QMetaMethod11methodIndexEv(void *this_) {
  /*return*/ ((QMetaMethod*)this_)->methodIndex();
}
// /usr/include/qt/QtCore/qmetaobject.h:76
// int revision()
extern "C"
void C_ZNK11QMetaMethod8revisionEv(void *this_) {
  /*return*/ ((QMetaMethod*)this_)->revision();
}
// inline
// /usr/include/qt/QtCore/qmetaobject.h:78
// const QMetaObject * enclosingMetaObject()
extern "C"
void C_ZNK11QMetaMethod19enclosingMetaObjectEv(void *this_) {
  /*return*/ ((QMetaMethod*)this_)->enclosingMetaObject();
}
// /usr/include/qt/QtCore/qmetaobject.h:80
// bool invoke(class QObject *, Qt::ConnectionType, class QGenericReturnArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument)
extern "C"
void C_ZNK11QMetaMethod6invokeEP7QObjectN2Qt14ConnectionTypeE22QGenericReturnArgument16QGenericArgumentS5_S5_S5_S5_S5_S5_S5_S5_S5_(void *this_, QObject * object, Qt::ConnectionType connectionType, QGenericReturnArgument returnValue, QGenericArgument val0, QGenericArgument val1, QGenericArgument val2, QGenericArgument val3, QGenericArgument val4, QGenericArgument val5, QGenericArgument val6, QGenericArgument val7, QGenericArgument val8, QGenericArgument val9) {
  /*return*/ ((QMetaMethod*)this_)->invoke(object, connectionType, returnValue, val0, val1, val2, val3, val4, val5, val6, val7, val8, val9);
}
// inline
// /usr/include/qt/QtCore/qmetaobject.h:93
// bool invoke(class QObject *, class QGenericReturnArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument)
extern "C"
void C_ZNK11QMetaMethod6invokeEP7QObject22QGenericReturnArgument16QGenericArgumentS3_S3_S3_S3_S3_S3_S3_S3_S3_(void *this_, QObject * object, QGenericReturnArgument returnValue, QGenericArgument val0, QGenericArgument val1, QGenericArgument val2, QGenericArgument val3, QGenericArgument val4, QGenericArgument val5, QGenericArgument val6, QGenericArgument val7, QGenericArgument val8, QGenericArgument val9) {
  /*return*/ ((QMetaMethod*)this_)->invoke(object, returnValue, val0, val1, val2, val3, val4, val5, val6, val7, val8, val9);
}
// inline
// /usr/include/qt/QtCore/qmetaobject.h:109
// bool invoke(class QObject *, Qt::ConnectionType, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument)
extern "C"
void C_ZNK11QMetaMethod6invokeEP7QObjectN2Qt14ConnectionTypeE16QGenericArgumentS4_S4_S4_S4_S4_S4_S4_S4_S4_(void *this_, QObject * object, Qt::ConnectionType connectionType, QGenericArgument val0, QGenericArgument val1, QGenericArgument val2, QGenericArgument val3, QGenericArgument val4, QGenericArgument val5, QGenericArgument val6, QGenericArgument val7, QGenericArgument val8, QGenericArgument val9) {
  /*return*/ ((QMetaMethod*)this_)->invoke(object, connectionType, val0, val1, val2, val3, val4, val5, val6, val7, val8, val9);
}
// inline
// /usr/include/qt/QtCore/qmetaobject.h:125
// bool invoke(class QObject *, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument)
extern "C"
void C_ZNK11QMetaMethod6invokeEP7QObject16QGenericArgumentS2_S2_S2_S2_S2_S2_S2_S2_S2_(void *this_, QObject * object, QGenericArgument val0, QGenericArgument val1, QGenericArgument val2, QGenericArgument val3, QGenericArgument val4, QGenericArgument val5, QGenericArgument val6, QGenericArgument val7, QGenericArgument val8, QGenericArgument val9) {
  /*return*/ ((QMetaMethod*)this_)->invoke(object, val0, val1, val2, val3, val4, val5, val6, val7, val8, val9);
}
// /usr/include/qt/QtCore/qmetaobject.h:141
// bool invokeOnGadget(void *, class QGenericReturnArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument)
extern "C"
void C_ZNK11QMetaMethod14invokeOnGadgetEPv22QGenericReturnArgument16QGenericArgumentS2_S2_S2_S2_S2_S2_S2_S2_S2_(void *this_, void * gadget, QGenericReturnArgument returnValue, QGenericArgument val0, QGenericArgument val1, QGenericArgument val2, QGenericArgument val3, QGenericArgument val4, QGenericArgument val5, QGenericArgument val6, QGenericArgument val7, QGenericArgument val8, QGenericArgument val9) {
  /*return*/ ((QMetaMethod*)this_)->invokeOnGadget(gadget, returnValue, val0, val1, val2, val3, val4, val5, val6, val7, val8, val9);
}
// inline
// /usr/include/qt/QtCore/qmetaobject.h:153
// bool invokeOnGadget(void *, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument, class QGenericArgument)
extern "C"
void C_ZNK11QMetaMethod14invokeOnGadgetEPv16QGenericArgumentS1_S1_S1_S1_S1_S1_S1_S1_S1_(void *this_, void * gadget, QGenericArgument val0, QGenericArgument val1, QGenericArgument val2, QGenericArgument val3, QGenericArgument val4, QGenericArgument val5, QGenericArgument val6, QGenericArgument val7, QGenericArgument val8, QGenericArgument val9) {
  /*return*/ ((QMetaMethod*)this_)->invokeOnGadget(gadget, val0, val1, val2, val3, val4, val5, val6, val7, val8, val9);
}
// inline
// /usr/include/qt/QtCore/qmetaobject.h:169
// bool isValid()
extern "C"
void C_ZNK11QMetaMethod7isValidEv(void *this_) {
  /*return*/ ((QMetaMethod*)this_)->isValid();
}
//  main block end
