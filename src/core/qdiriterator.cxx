// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
// src-file: /QtCore/qdiriterator.h
// dst-file: /src/core/qdiriterator.cxx
//

// header block begin =>
#include <qdiriterator.h>

extern "C" {

int QDirIterator_Class_Size()
{
  return sizeof(QDirIterator);
}

// QDirIterator(const class QString &, IteratorFlags)
QDirIterator* dector_ZN12QDirIteratorC1ERK7QString6QFlagsINS_12IteratorFlagEE(const QString & path, QDirIterator::IteratorFlag flags)
{
  // static_assert(sizeof(QDirIterator) == 32, "tyszerr");
  QDirIterator* rthis = new QDirIterator(path, flags);
  return rthis;
}

// QDirIterator(const class QDir &, IteratorFlags)
QDirIterator* dector_ZN12QDirIteratorC1ERK4QDir6QFlagsINS_12IteratorFlagEE(const QDir & dir, QDirIterator::IteratorFlag flags)
{
  // static_assert(sizeof(QDirIterator) == 32, "tyszerr");
  QDirIterator* rthis = new QDirIterator(dir, flags);
  return rthis;
}

// ~QDirIterator()
void dedtor_ZN12QDirIteratorD0Ev(QDirIterator* that)
{
  QDirIterator* rthis = (QDirIterator*)that;
  delete rthis;
}

// QDirIterator(const class QString &, class QDir::Filters, IteratorFlags)
QDirIterator* dector_ZN12QDirIteratorC1ERK7QString6QFlagsIN4QDir6FilterEES3_INS_12IteratorFlagEE(const QString & path, QDir::Filters filter, QDirIterator::IteratorFlag flags)
{
  // static_assert(sizeof(QDirIterator) == 32, "tyszerr");
  QDirIterator* rthis = new QDirIterator(path, filter, flags);
  return rthis;
}

// QDirIterator(const class QString &, const class QStringList &, class QDir::Filters, IteratorFlags)
QDirIterator* dector_ZN12QDirIteratorC1ERK7QStringRK11QStringList6QFlagsIN4QDir6FilterEES6_INS_12IteratorFlagEE(const QString & path, const QStringList & nameFilters, QDir::Filters filters, QDirIterator::IteratorFlag flags)
{
  // static_assert(sizeof(QDirIterator) == 32, "tyszerr");
  QDirIterator* rthis = new QDirIterator(path, nameFilters, filters, flags);
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

