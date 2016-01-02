// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
// src-file: /QtCore/qcollator.h
// dst-file: /src/core/qcollator.cxx
//

// header block begin =>
#include <qcollator.h>

extern "C" {

int QCollator_Class_Size()
{
  return sizeof(QCollator);
}

// QCollator(const class QLocale &)
QCollator* dector_ZN9QCollatorC1ERK7QLocale(const QLocale & locale)
{
  // static_assert(sizeof(QCollator) == 32, "tyszerr");
  QCollator* rthis = new QCollator(locale);
  return rthis;
}

// ~QCollator()
void dedtor_ZN9QCollatorD0Ev(QCollator* that)
{
  QCollator* rthis = (QCollator*)that;
  delete rthis;
}

// QCollator(const class QCollator &)
QCollator* dector_ZN9QCollatorC1ERKS_(const QCollator & arg1)
{
  // static_assert(sizeof(QCollator) == 32, "tyszerr");
  QCollator* rthis = new QCollator(arg1);
  return rthis;
}

// QCollator(class QCollator &&)
QCollator* dector_ZN9QCollatorC1EOS_(QCollator && other)
{
  // static_assert(sizeof(QCollator) == 32, "tyszerr");
  QCollator* rthis = new QCollator(other);
  return rthis;
}

int QCollatorSortKey_Class_Size()
{
  return sizeof(QCollatorSortKey);
}

// ~QCollatorSortKey()
void dedtor_ZN16QCollatorSortKeyD0Ev(QCollatorSortKey* that)
{
  QCollatorSortKey* rthis = (QCollatorSortKey*)that;
  delete rthis;
}

// QCollatorSortKey(const class QCollatorSortKey &)
QCollatorSortKey* dector_ZN16QCollatorSortKeyC1ERKS_(const QCollatorSortKey & other)
{
  // static_assert(sizeof(QCollatorSortKey) == 32, "tyszerr");
  QCollatorSortKey* rthis = new QCollatorSortKey(other);
  return rthis;
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

