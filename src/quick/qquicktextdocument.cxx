// auto generated, do not modify.
// created: Fri Jan 22 22:26:45 2016
// src-file: /QtQuick/qquicktextdocument.h
// dst-file: /src/quick/qquicktextdocument.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qquicktextdocument.h>

extern "C" {

int QQuickTextDocument_Class_Size()
{
  return sizeof(QQuickTextDocument);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qquicktextdocument_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtQuick/qquicktextdocument.h', line 45, column 5>
//   // proto:  const QMetaObject * QQuickTextDocument::metaObject();
if (true) {
  auto f = [](QQuickTextDocument flythis) {
    ((QQuickTextDocument*)0)->metaObject();
    flythis.metaObject();
  };
  if (f == nullptr){}
}
// _ZNK18QQuickTextDocument10metaObjectEv metaObject()
// <SourceLocation file '/usr/include/qt/QtQuick/qquicktextdocument.h', line 49, column 20>
//   // proto:  QTextDocument * QQuickTextDocument::textDocument();
if (true) {
  auto f = [](QQuickTextDocument flythis) {
    ((QQuickTextDocument*)0)->textDocument();
    flythis.textDocument();
  };
  if (f == nullptr){}
}
// _ZNK18QQuickTextDocument12textDocumentEv textDocument()
// <SourceLocation file '/usr/include/qt/QtQuick/qquicktextdocument.h', line 48, column 5>
//   // proto:  void QQuickTextDocument::QQuickTextDocument(QQuickItem * parent);
if (true) {
  auto f = [](QQuickItem * arg1) {
    new QQuickTextDocument(arg1);
  };
  if (f == nullptr){}
}
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtQuick/qquicktextdocument.h', line 45, column 5>
//   // proto:  const QMetaObject * QQuickTextDocument::metaObject();
extern "C"
void C_ZNK18QQuickTextDocument10metaObjectEv(void *qthis) {
  ((QQuickTextDocument*)qthis)->metaObject();
}
// _ZNK18QQuickTextDocument10metaObjectEv metaObject()
// <SourceLocation file '/usr/include/qt/QtQuick/qquicktextdocument.h', line 49, column 20>
//   // proto:  QTextDocument * QQuickTextDocument::textDocument();
extern "C"
void C_ZNK18QQuickTextDocument12textDocumentEv(void *qthis) {
  ((QQuickTextDocument*)qthis)->textDocument();
}
// _ZNK18QQuickTextDocument12textDocumentEv textDocument()
// <SourceLocation file '/usr/include/qt/QtQuick/qquicktextdocument.h', line 48, column 5>
//   // proto:  void QQuickTextDocument::QQuickTextDocument(QQuickItem * parent);
extern "C"
void C_ZN18QQuickTextDocumentC2EP10QQuickItem(QQuickItem * arg1) {
  new QQuickTextDocument(arg1);
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

