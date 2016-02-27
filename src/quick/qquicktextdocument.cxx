// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtQuick/qquicktextdocument.h
// dst-file: /src/quick/qquicktextdocument.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qquicktextdocument.h>


// <= header block end

// main block begin =>
void __keep_qquicktextdocument_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QQuickTextDocument_Class_Size()
{
  return sizeof(QQuickTextDocument);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtQuick/qquicktextdocument.h', line 45, column 5>
//   // proto:  const QMetaObject * QQuickTextDocument::metaObject();
// _ZNK18QQuickTextDocument10metaObjectEv metaObject()
extern "C"
void*
C_ZNK18QQuickTextDocument10metaObjectEv(void *qthis) {
  auto ret =
  ((QQuickTextDocument*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquicktextdocument.h', line 49, column 20>
//   // proto:  QTextDocument * QQuickTextDocument::textDocument();
// _ZNK18QQuickTextDocument12textDocumentEv textDocument()
extern "C"
void*
C_ZNK18QQuickTextDocument12textDocumentEv(void *qthis) {
  auto ret =
  ((QQuickTextDocument*)qthis)->textDocument();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquicktextdocument.h', line 48, column 5>
//   // proto:  void QQuickTextDocument::QQuickTextDocument(QQuickItem * parent);
extern "C"
QQuickTextDocument*
C_ZN18QQuickTextDocumentC2EP10QQuickItem(QQuickItem * arg1) {
  auto ret = new QQuickTextDocument(arg1);
  return ret;
}
// <= ext block end

// body block begin =>
// QQuickTextDocument_SlotProxy here
class QQuickTextDocument_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QQuickTextDocument_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/quick/qquicktextdocument.moc"

extern "C" {
  QQuickTextDocument_SlotProxy* QQuickTextDocument_SlotProxy_new()
  {
    return new QQuickTextDocument_SlotProxy();
  }
};

// <= body block end

