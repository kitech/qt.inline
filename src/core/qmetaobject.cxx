// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
// src-file: /QtCore/qmetaobject.h
// dst-file: /src/core/qmetaobject.cxx
//

// header block begin =>
#include <qmetaobject.h>

extern "C" {

int QMetaEnum_Class_Size()
{
  return sizeof(QMetaEnum);
}

// QMetaEnum()
QMetaEnum* dector_ZN9QMetaEnumC1Ev()
{
  // static_assert(sizeof(QMetaEnum) == 32, "tyszerr");
  QMetaEnum* rthis = new QMetaEnum();
  return rthis;
}

  // proto:  const QMetaObject * QMetaEnum::enclosingMetaObject();
const QMetaObject * demth_ZNK9QMetaEnum19enclosingMetaObjectEv(void *that)
{
  QMetaEnum *cthat = (QMetaEnum *)that;
  return cthat->enclosingMetaObject();
}

  // proto:  bool QMetaEnum::isValid();
bool demth_ZNK9QMetaEnum7isValidEv(void *that)
{
  QMetaEnum *cthat = (QMetaEnum *)that;
  return cthat->isValid();
}

int QMetaClassInfo_Class_Size()
{
  return sizeof(QMetaClassInfo);
}

// QMetaClassInfo()
QMetaClassInfo* dector_ZN14QMetaClassInfoC1Ev()
{
  // static_assert(sizeof(QMetaClassInfo) == 32, "tyszerr");
  QMetaClassInfo* rthis = new QMetaClassInfo();
  return rthis;
}

  // proto:  const QMetaObject * QMetaClassInfo::enclosingMetaObject();
const QMetaObject * demth_ZNK14QMetaClassInfo19enclosingMetaObjectEv(void *that)
{
  QMetaClassInfo *cthat = (QMetaClassInfo *)that;
  return cthat->enclosingMetaObject();
}

int QMetaMethod_Class_Size()
{
  return sizeof(QMetaMethod);
}

// QMetaMethod()
QMetaMethod* dector_ZN11QMetaMethodC1Ev()
{
  // static_assert(sizeof(QMetaMethod) == 32, "tyszerr");
  QMetaMethod* rthis = new QMetaMethod();
  return rthis;
}

  // proto:  bool QMetaMethod::invoke(QObject * object, QGenericReturnArgument returnValue, QGenericArgument val0, QGenericArgument val1, QGenericArgument val2, QGenericArgument val3, QGenericArgument val4, QGenericArgument val5, QGenericArgument val6, QGenericArgument val7, QGenericArgument val8, QGenericArgument val9);
bool demth_ZNK11QMetaMethod6invokeEP7QObject22QGenericReturnArgument16QGenericArgumentS3_S3_S3_S3_S3_S3_S3_S3_S3_(void *that, QObject * object, QGenericReturnArgument returnValue, QGenericArgument val0, QGenericArgument val1, QGenericArgument val2, QGenericArgument val3, QGenericArgument val4, QGenericArgument val5, QGenericArgument val6, QGenericArgument val7, QGenericArgument val8, QGenericArgument val9)
{
  QMetaMethod *cthat = (QMetaMethod *)that;
  return cthat->invoke(object, returnValue, val0, val1, val2, val3, val4, val5, val6, val7, val8, val9);
}

  // proto:  bool QMetaMethod::invoke(QObject * object, Qt::ConnectionType connectionType, QGenericArgument val0, QGenericArgument val1, QGenericArgument val2, QGenericArgument val3, QGenericArgument val4, QGenericArgument val5, QGenericArgument val6, QGenericArgument val7, QGenericArgument val8, QGenericArgument val9);
bool demth_ZNK11QMetaMethod6invokeEP7QObjectN2Qt14ConnectionTypeE16QGenericArgumentS4_S4_S4_S4_S4_S4_S4_S4_S4_(void *that, QObject * object, Qt::ConnectionType connectionType, QGenericArgument val0, QGenericArgument val1, QGenericArgument val2, QGenericArgument val3, QGenericArgument val4, QGenericArgument val5, QGenericArgument val6, QGenericArgument val7, QGenericArgument val8, QGenericArgument val9)
{
  QMetaMethod *cthat = (QMetaMethod *)that;
  return cthat->invoke(object, connectionType, val0, val1, val2, val3, val4, val5, val6, val7, val8, val9);
}

  // proto:  bool QMetaMethod::invoke(QObject * object, QGenericArgument val0, QGenericArgument val1, QGenericArgument val2, QGenericArgument val3, QGenericArgument val4, QGenericArgument val5, QGenericArgument val6, QGenericArgument val7, QGenericArgument val8, QGenericArgument val9);
bool demth_ZNK11QMetaMethod6invokeEP7QObject16QGenericArgumentS2_S2_S2_S2_S2_S2_S2_S2_S2_(void *that, QObject * object, QGenericArgument val0, QGenericArgument val1, QGenericArgument val2, QGenericArgument val3, QGenericArgument val4, QGenericArgument val5, QGenericArgument val6, QGenericArgument val7, QGenericArgument val8, QGenericArgument val9)
{
  QMetaMethod *cthat = (QMetaMethod *)that;
  return cthat->invoke(object, val0, val1, val2, val3, val4, val5, val6, val7, val8, val9);
}

  // proto:  const QMetaObject * QMetaMethod::enclosingMetaObject();
const QMetaObject * demth_ZNK11QMetaMethod19enclosingMetaObjectEv(void *that)
{
  QMetaMethod *cthat = (QMetaMethod *)that;
  return cthat->enclosingMetaObject();
}

  // proto:  bool QMetaMethod::invokeOnGadget(void * gadget, QGenericArgument val0, QGenericArgument val1, QGenericArgument val2, QGenericArgument val3, QGenericArgument val4, QGenericArgument val5, QGenericArgument val6, QGenericArgument val7, QGenericArgument val8, QGenericArgument val9);
bool demth_ZNK11QMetaMethod14invokeOnGadgetEPv16QGenericArgumentS1_S1_S1_S1_S1_S1_S1_S1_S1_(void *that, void * gadget, QGenericArgument val0, QGenericArgument val1, QGenericArgument val2, QGenericArgument val3, QGenericArgument val4, QGenericArgument val5, QGenericArgument val6, QGenericArgument val7, QGenericArgument val8, QGenericArgument val9)
{
  QMetaMethod *cthat = (QMetaMethod *)that;
  return cthat->invokeOnGadget(gadget, val0, val1, val2, val3, val4, val5, val6, val7, val8, val9);
}

  // proto:  bool QMetaMethod::isValid();
bool demth_ZNK11QMetaMethod7isValidEv(void *that)
{
  QMetaMethod *cthat = (QMetaMethod *)that;
  return cthat->isValid();
}

int QMetaProperty_Class_Size()
{
  return sizeof(QMetaProperty);
}

// QMetaProperty()
QMetaProperty* dector_ZN13QMetaPropertyC1Ev()
{
  // static_assert(sizeof(QMetaProperty) == 32, "tyszerr");
  QMetaProperty* rthis = new QMetaProperty();
  return rthis;
}

  // proto:  bool QMetaProperty::isValid();
bool demth_ZNK13QMetaProperty7isValidEv(void *that)
{
  QMetaProperty *cthat = (QMetaProperty *)that;
  return cthat->isValid();
}

  // proto:  const QMetaObject * QMetaProperty::enclosingMetaObject();
const QMetaObject * demth_ZNK13QMetaProperty19enclosingMetaObjectEv(void *that)
{
  QMetaProperty *cthat = (QMetaProperty *)that;
  return cthat->enclosingMetaObject();
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// <= body block end

