// auto generated, do not modify.
// created: Thu Dec 24 22:25:43 2015
// src-file: /QtCore/qmetatype.h
// dst-file: /src/core/qmetatype.cxx
//

// header block begin =>
#include <qmetatype.h>

extern "C" {

  // proto:  const QMetaObject * QMetaType::metaObject();
const QMetaObject * _ZNK9QMetaType10metaObjectEv(void *that)

{
  QMetaType *cthat = (QMetaType *)that;
  return cthat->metaObject();
}

  // proto:  void QMetaType::destroy(void * data);
void _ZNK9QMetaType7destroyEPv(void *that, void * data)

{
  QMetaType *cthat = (QMetaType *)that;
   cthat->destroy(data);
}

  // proto:  bool QMetaType::isValid();
bool _ZNK9QMetaType7isValidEv(void *that)

{
  QMetaType *cthat = (QMetaType *)that;
  return cthat->isValid();
}

  // proto:  void * QMetaType::construct(void * where, const void * copy);
void * _ZNK9QMetaType9constructEPvPKv(void *that, void * where, const void * copy)

{
  QMetaType *cthat = (QMetaType *)that;
  return cthat->construct(where, copy);
}

  // proto:  void * QMetaType::create(const void * copy);
void * _ZNK9QMetaType6createEPKv(void *that, const void * copy)

{
  QMetaType *cthat = (QMetaType *)that;
  return cthat->create(copy);
}

  // proto:  void QMetaType::destruct(void * data);
void _ZNK9QMetaType8destructEPv(void *that, void * data)

{
  QMetaType *cthat = (QMetaType *)that;
   cthat->destruct(data);
}

  // proto:  void QMetaType::~QMetaType();
void _ZN9QMetaTypeD0Ev(void *that)

{
  QMetaType *cthat = (QMetaType *)that;
   cthat->~QMetaType();
}

  // proto:  int QMetaType::sizeOf();
int _ZNK9QMetaType6sizeOfEv(void *that)

{
  QMetaType *cthat = (QMetaType *)that;
  return cthat->sizeOf();
}

  // proto:  bool QMetaType::isRegistered();
bool _ZNK9QMetaType12isRegisteredEv(void *that)

{
  QMetaType *cthat = (QMetaType *)that;
  return cthat->isRegistered();
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

