// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
// src-file: /QtCore/qstringlist.h
// dst-file: /src/core/qstringlist.cxx
//

// header block begin =>
#include <qstringlist.h>

extern "C" {

int QStringList_Class_Size()
{
  return sizeof(QStringList);
}

// QStringList()
QStringList* dector_ZN11QStringListC1Ev()
{
  // static_assert(sizeof(QStringList) == 32, "tyszerr");
  QStringList* rthis = new QStringList();
  return rthis;
}

// QStringList(QList<class QString> &&)
QStringList* dector_ZN11QStringListC1EO5QListI7QStringE(QList<QString> && l)
{
  // static_assert(sizeof(QStringList) == 32, "tyszerr");
  QStringList* rthis = new QStringList(l);
  return rthis;
}

// QStringList(std::initializer_list<QString>)
QStringList* dector_ZN11QStringListC1ESt16initializer_listI7QStringE(std::initializer_list<QString> args)
{
  // static_assert(sizeof(QStringList) == 32, "tyszerr");
  QStringList* rthis = new QStringList(args);
  return rthis;
}

// QStringList(const class QString &)
QStringList* dector_ZN11QStringListC1ERK7QString(const QString & i)
{
  // static_assert(sizeof(QStringList) == 32, "tyszerr");
  QStringList* rthis = new QStringList(i);
  return rthis;
}

// QStringList(const QList<class QString> &)
QStringList* dector_ZN11QStringListC1ERK5QListI7QStringE(const QList<QString> & l)
{
  // static_assert(sizeof(QStringList) == 32, "tyszerr");
  QStringList* rthis = new QStringList(l);
  return rthis;
}

  // proto:  int QStringList::lastIndexOf(const QRegularExpression & re, int from);
int demth_ZNK11QStringList11lastIndexOfERK18QRegularExpressioni(void *that, const QRegularExpression & re, int from)
{
  QStringList *cthat = (QStringList *)that;
  return cthat->lastIndexOf(re, from);
}

  // proto:  bool QStringList::contains(const QString & str, Qt::CaseSensitivity cs);
bool demth_ZNK11QStringList8containsERK7QStringN2Qt15CaseSensitivityE(void *that, const QString & str, Qt::CaseSensitivity cs)
{
  QStringList *cthat = (QStringList *)that;
  return cthat->contains(str, cs);
}

  // proto:  void QStringList::QStringList();
void demth_ZN11QStringListC1Ev(void *that)
{
  QStringList *cthat = (QStringList *)that;
  auto _o = new(that) QStringList();
}

  // proto:  int QStringList::indexOf(const QRegExp & rx, int from);
int demth_ZNK11QStringList7indexOfERK7QRegExpi(void *that, const QRegExp & rx, int from)
{
  QStringList *cthat = (QStringList *)that;
  return cthat->indexOf(rx, from);
}

  // proto:  void QStringList::QStringList(QList<QString> && l);
void demth_ZN11QStringListC1EO5QListI7QStringE(void *that, QList<QString> && l)
{
  QStringList *cthat = (QStringList *)that;
  auto _o = new(that) QStringList(l);
}

  // proto:  int QStringList::indexOf(QRegExp & rx, int from);
int demth_ZNK11QStringList7indexOfER7QRegExpi(void *that, QRegExp & rx, int from)
{
  QStringList *cthat = (QStringList *)that;
  return cthat->indexOf(rx, from);
}

  // proto:  int QStringList::indexOf(const QRegularExpression & re, int from);
int demth_ZNK11QStringList7indexOfERK18QRegularExpressioni(void *that, const QRegularExpression & re, int from)
{
  QStringList *cthat = (QStringList *)that;
  return cthat->indexOf(re, from);
}

  // proto:  int QStringList::lastIndexOf(const QRegExp & rx, int from);
int demth_ZNK11QStringList11lastIndexOfERK7QRegExpi(void *that, const QRegExp & rx, int from)
{
  QStringList *cthat = (QStringList *)that;
  return cthat->lastIndexOf(rx, from);
}

  // proto:  int QStringList::lastIndexOf(QRegExp & rx, int from);
int demth_ZNK11QStringList11lastIndexOfER7QRegExpi(void *that, QRegExp & rx, int from)
{
  QStringList *cthat = (QStringList *)that;
  return cthat->lastIndexOf(rx, from);
}

  // proto:  void QStringList::QStringList(std::initializer_list<QString> args);
void demth_ZN11QStringListC1ESt16initializer_listI7QStringE(void *that, std::initializer_list<QString> args)
{
  QStringList *cthat = (QStringList *)that;
  auto _o = new(that) QStringList(args);
}

  // proto:  void QStringList::QStringList(const QString & i);
void demth_ZN11QStringListC1ERK7QString(void *that, const QString & i)
{
  QStringList *cthat = (QStringList *)that;
  auto _o = new(that) QStringList(i);
}

  // proto:  void QStringList::QStringList(const QList<QString> & l);
void demth_ZN11QStringListC1ERK5QListI7QStringE(void *that, const QList<QString> & l)
{
  QStringList *cthat = (QStringList *)that;
  auto _o = new(that) QStringList(l);
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

