// auto generated, do not modify.
// created: Thu Dec 24 22:25:43 2015
// src-file: /QtCore/qcoreevent.h
// dst-file: /src/core/qcoreevent.cxx
//

// header block begin =>
#include <qcoreevent.h>

extern "C" {

  // proto:  QByteArray QDynamicPropertyChangeEvent::propertyName();
QByteArray* _ZNK27QDynamicPropertyChangeEvent12propertyNameEv(void *that)

{
  QDynamicPropertyChangeEvent *cthat = (QDynamicPropertyChangeEvent *)that;
  auto recret = cthat->propertyName();
  return new QByteArray(recret);
}

  // proto:  void QEvent::setAccepted(bool accepted);
void _ZN6QEvent11setAcceptedEb(void *that, bool accepted)

{
  QEvent *cthat = (QEvent *)that;
   cthat->setAccepted(accepted);
}

  // proto:  void QEvent::ignore();
void _ZN6QEvent6ignoreEv(void *that)

{
  QEvent *cthat = (QEvent *)that;
   cthat->ignore();
}

  // proto:  bool QEvent::isAccepted();
bool _ZNK6QEvent10isAcceptedEv(void *that)

{
  QEvent *cthat = (QEvent *)that;
  return cthat->isAccepted();
}

  // proto:  void QEvent::accept();
void _ZN6QEvent6acceptEv(void *that)

{
  QEvent *cthat = (QEvent *)that;
   cthat->accept();
}

  // proto:  bool QEvent::spontaneous();
bool _ZNK6QEvent11spontaneousEv(void *that)

{
  QEvent *cthat = (QEvent *)that;
  return cthat->spontaneous();
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

