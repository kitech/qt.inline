// auto generated, do not modify.
// created: Sat Dec 26 11:30:23 2015
// src-file: /QtCore/qdebug.h
// dst-file: /src/core/qdebug.cxx
//

// header block begin =>
#include <qdebug.h>

extern "C" {

int QNoDebug_Class_Size()
{
  return sizeof(QNoDebug);
}

  // proto:  QNoDebug & QNoDebug::maybeQuote(const char );
QNoDebug * _ZN8QNoDebug10maybeQuoteEc(void *that, const char arg1)
{
  QNoDebug *cthat = (QNoDebug *)that;
  return &cthat->maybeQuote(arg1);
}

  // proto:  QNoDebug & QNoDebug::quote();
QNoDebug * _ZN8QNoDebug5quoteEv(void *that)
{
  QNoDebug *cthat = (QNoDebug *)that;
  return &cthat->quote();
}

  // proto:  QNoDebug & QNoDebug::space();
QNoDebug * _ZN8QNoDebug5spaceEv(void *that)
{
  QNoDebug *cthat = (QNoDebug *)that;
  return &cthat->space();
}

  // proto:  QNoDebug & QNoDebug::nospace();
QNoDebug * _ZN8QNoDebug7nospaceEv(void *that)
{
  QNoDebug *cthat = (QNoDebug *)that;
  return &cthat->nospace();
}

  // proto:  QNoDebug & QNoDebug::noquote();
QNoDebug * _ZN8QNoDebug7noquoteEv(void *that)
{
  QNoDebug *cthat = (QNoDebug *)that;
  return &cthat->noquote();
}

  // proto:  QNoDebug & QNoDebug::maybeSpace();
QNoDebug * _ZN8QNoDebug10maybeSpaceEv(void *that)
{
  QNoDebug *cthat = (QNoDebug *)that;
  return &cthat->maybeSpace();
}

int QDebugStateSaver_Class_Size()
{
  return sizeof(QDebugStateSaver);
}

// QDebugStateSaver(class QDebug &)
QDebugStateSaver* dector_ZN16QDebugStateSaverC1ER6QDebug(QDebug & dbg)
{
  // static_assert(sizeof(QDebugStateSaver) == 32, "tyszerr");
  QDebugStateSaver* rthis = new QDebugStateSaver(dbg);
  return rthis;
}

// ~QDebugStateSaver()
void dedtor_ZN16QDebugStateSaverD0Ev(QDebugStateSaver* that)
{
  QDebugStateSaver* rthis = (QDebugStateSaver*)that;
  delete rthis;
}

int QDebug_Class_Size()
{
  return sizeof(QDebug);
}

// ~QDebug()
void dedtor_ZN6QDebugD0Ev(QDebug* that)
{
  QDebug* rthis = (QDebug*)that;
  delete rthis;
}

// QDebug(const class QDebug &)
QDebug* dector_ZN6QDebugC1ERKS_(const QDebug & o)
{
  // static_assert(sizeof(QDebug) == 32, "tyszerr");
  QDebug* rthis = new QDebug(o);
  return rthis;
}

// QDebug(enum QtMsgType)
QDebug* dector_ZN6QDebugC1E9QtMsgType(QtMsgType t)
{
  // static_assert(sizeof(QDebug) == 32, "tyszerr");
  QDebug* rthis = new QDebug(t);
  return rthis;
}

// QDebug(class QString *)
QDebug* dector_ZN6QDebugC1EP7QString(QString * string)
{
  // static_assert(sizeof(QDebug) == 32, "tyszerr");
  QDebug* rthis = new QDebug(string);
  return rthis;
}

// QDebug(class QIODevice *)
QDebug* dector_ZN6QDebugC1EP9QIODevice(QIODevice * device)
{
  // static_assert(sizeof(QDebug) == 32, "tyszerr");
  QDebug* rthis = new QDebug(device);
  return rthis;
}

  // proto:  QDebug & QDebug::noquote();
QDebug * _ZN6QDebug7noquoteEv(void *that)
{
  QDebug *cthat = (QDebug *)that;
  return &cthat->noquote();
}

  // proto:  void QDebug::QDebug(const QDebug & o);
void _ZN6QDebugC1ERKS_(void *that, const QDebug & o)
{
  QDebug *cthat = (QDebug *)that;
  auto _o = new(that) QDebug(o);
}

  // proto:  QDebug & QDebug::space();
QDebug * _ZN6QDebug5spaceEv(void *that)
{
  QDebug *cthat = (QDebug *)that;
  return &cthat->space();
}

  // proto:  void QDebug::QDebug(QtMsgType t);
void _ZN6QDebugC1E9QtMsgType(void *that, QtMsgType t)
{
  QDebug *cthat = (QDebug *)that;
  auto _o = new(that) QDebug(t);
}

  // proto:  QDebug & QDebug::maybeSpace();
QDebug * _ZN6QDebug10maybeSpaceEv(void *that)
{
  QDebug *cthat = (QDebug *)that;
  return &cthat->maybeSpace();
}

  // proto:  void QDebug::setAutoInsertSpaces(bool b);
void _ZN6QDebug19setAutoInsertSpacesEb(void *that, bool b)
{
  QDebug *cthat = (QDebug *)that;
   cthat->setAutoInsertSpaces(b);
}

  // proto:  void QDebug::QDebug(QString * string);
void _ZN6QDebugC1EP7QString(void *that, QString * string)
{
  QDebug *cthat = (QDebug *)that;
  auto _o = new(that) QDebug(string);
}

  // proto:  void QDebug::swap(QDebug & other);
void _ZN6QDebug4swapERS_(void *that, QDebug & other)
{
  QDebug *cthat = (QDebug *)that;
   cthat->swap(other);
}

  // proto:  QDebug & QDebug::nospace();
QDebug * _ZN6QDebug7nospaceEv(void *that)
{
  QDebug *cthat = (QDebug *)that;
  return &cthat->nospace();
}

  // proto:  void QDebug::QDebug(QIODevice * device);
void _ZN6QDebugC1EP9QIODevice(void *that, QIODevice * device)
{
  QDebug *cthat = (QDebug *)that;
  auto _o = new(that) QDebug(device);
}

  // proto:  QDebug & QDebug::quote();
QDebug * _ZN6QDebug5quoteEv(void *that)
{
  QDebug *cthat = (QDebug *)that;
  return &cthat->quote();
}

  // proto:  QDebug & QDebug::maybeQuote(char c);
QDebug * _ZN6QDebug10maybeQuoteEc(void *that, char c)
{
  QDebug *cthat = (QDebug *)that;
  return &cthat->maybeQuote(c);
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

