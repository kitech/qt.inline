// auto generated, do not modify.
// created: Sun Jan  3 01:22:04 2016
// src-file: /QtCore/qregularexpression.h
// dst-file: /src/core/qregularexpression.cxx
//

// header block begin =>
#include <qregularexpression.h>

extern "C" {

int QRegularExpressionMatchIterator_Class_Size()
{
  return sizeof(QRegularExpressionMatchIterator);
}

// QRegularExpressionMatchIterator()
QRegularExpressionMatchIterator* dector_ZN31QRegularExpressionMatchIteratorC1Ev()
{
  // static_assert(sizeof(QRegularExpressionMatchIterator) == 32, "tyszerr");
  QRegularExpressionMatchIterator* rthis = new QRegularExpressionMatchIterator();
  return rthis;
}

// QRegularExpressionMatchIterator(const class QRegularExpressionMatchIterator &)
QRegularExpressionMatchIterator* dector_ZN31QRegularExpressionMatchIteratorC1ERKS_(const QRegularExpressionMatchIterator & iterator)
{
  // static_assert(sizeof(QRegularExpressionMatchIterator) == 32, "tyszerr");
  QRegularExpressionMatchIterator* rthis = new QRegularExpressionMatchIterator(iterator);
  return rthis;
}

// ~QRegularExpressionMatchIterator()
void dedtor_ZN31QRegularExpressionMatchIteratorD0Ev(QRegularExpressionMatchIterator* that)
{
  QRegularExpressionMatchIterator* rthis = (QRegularExpressionMatchIterator*)that;
  delete rthis;
}

  // proto:  void QRegularExpressionMatchIterator::swap(QRegularExpressionMatchIterator & other);
void demth_ZN31QRegularExpressionMatchIterator4swapERS_(void *that, QRegularExpressionMatchIterator & other)
{
  QRegularExpressionMatchIterator *cthat = (QRegularExpressionMatchIterator *)that;
   cthat->swap(other);
}

int QRegularExpression_Class_Size()
{
  return sizeof(QRegularExpression);
}

// ~QRegularExpression()
void dedtor_ZN18QRegularExpressionD0Ev(QRegularExpression* that)
{
  QRegularExpression* rthis = (QRegularExpression*)that;
  delete rthis;
}

// QRegularExpression()
QRegularExpression* dector_ZN18QRegularExpressionC1Ev()
{
  // static_assert(sizeof(QRegularExpression) == 32, "tyszerr");
  QRegularExpression* rthis = new QRegularExpression();
  return rthis;
}

// QRegularExpression(const class QString &, PatternOptions)
QRegularExpression* dector_ZN18QRegularExpressionC1ERK7QString6QFlagsINS_13PatternOptionEE(const QString & pattern, QRegularExpression::PatternOption options)
{
  // static_assert(sizeof(QRegularExpression) == 32, "tyszerr");
  QRegularExpression* rthis = new QRegularExpression(pattern, options);
  return rthis;
}

// QRegularExpression(const class QRegularExpression &)
QRegularExpression* dector_ZN18QRegularExpressionC1ERKS_(const QRegularExpression & re)
{
  // static_assert(sizeof(QRegularExpression) == 32, "tyszerr");
  QRegularExpression* rthis = new QRegularExpression(re);
  return rthis;
}

  // proto:  void QRegularExpression::swap(QRegularExpression & other);
void demth_ZN18QRegularExpression4swapERS_(void *that, QRegularExpression & other)
{
  QRegularExpression *cthat = (QRegularExpression *)that;
   cthat->swap(other);
}

int QRegularExpressionMatch_Class_Size()
{
  return sizeof(QRegularExpressionMatch);
}

// QRegularExpressionMatch()
QRegularExpressionMatch* dector_ZN23QRegularExpressionMatchC1Ev()
{
  // static_assert(sizeof(QRegularExpressionMatch) == 32, "tyszerr");
  QRegularExpressionMatch* rthis = new QRegularExpressionMatch();
  return rthis;
}

// QRegularExpressionMatch(const class QRegularExpressionMatch &)
QRegularExpressionMatch* dector_ZN23QRegularExpressionMatchC1ERKS_(const QRegularExpressionMatch & match)
{
  // static_assert(sizeof(QRegularExpressionMatch) == 32, "tyszerr");
  QRegularExpressionMatch* rthis = new QRegularExpressionMatch(match);
  return rthis;
}

// ~QRegularExpressionMatch()
void dedtor_ZN23QRegularExpressionMatchD0Ev(QRegularExpressionMatch* that)
{
  QRegularExpressionMatch* rthis = (QRegularExpressionMatch*)that;
  delete rthis;
}

  // proto:  void QRegularExpressionMatch::swap(QRegularExpressionMatch & other);
void demth_ZN23QRegularExpressionMatch4swapERS_(void *that, QRegularExpressionMatch & other)
{
  QRegularExpressionMatch *cthat = (QRegularExpressionMatch *)that;
   cthat->swap(other);
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

