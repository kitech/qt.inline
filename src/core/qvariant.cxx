// auto generated, do not modify.
// created: Thu Dec 24 22:25:43 2015
// src-file: /QtCore/qvariant.h
// dst-file: /src/core/qvariant.cxx
//

// header block begin =>
#include <qvariant.h>

extern "C" {

  // proto:  void QVariantComparisonHelper::QVariantComparisonHelper(const QVariant & var);
void _ZN24QVariantComparisonHelperC1ERK8QVariant(void *that, const QVariant & var)

{
  QVariantComparisonHelper *cthat = (QVariantComparisonHelper *)that;
  auto _o = new(that) QVariantComparisonHelper(var);
}

  // proto:  bool QVariant::isValid();
bool _ZNK8QVariant7isValidEv(void *that)

{
  QVariant *cthat = (QVariant *)that;
  return cthat->isValid();
}

  // proto:  const void * QVariant::data();
const void * _ZNK8QVariant4dataEv(void *that)

{
  QVariant *cthat = (QVariant *)that;
  return cthat->data();
}

  // proto:  void QVariant::swap(QVariant & other);
void _ZN8QVariant4swapERS_(void *that, QVariant & other)

{
  QVariant *cthat = (QVariant *)that;
   cthat->swap(other);
}

  // proto:  bool QVariant::isDetached();
bool _ZNK8QVariant10isDetachedEv(void *that)

{
  QVariant *cthat = (QVariant *)that;
  return cthat->isDetached();
}

  // proto:  void QVariant::QVariant(QVariant && other);
void _ZN8QVariantC1EOS_(void *that, QVariant && other)

{
  QVariant *cthat = (QVariant *)that;
  auto _o = new(that) QVariant(other);
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

