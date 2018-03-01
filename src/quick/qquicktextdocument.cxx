//  header block begin
// /usr/include/qt/QtQuick/qquicktextdocument.h
#ifndef protected
#define protected public
#endif
#include <qquicktextdocument.h>
#include <QtQuick>
#include "callback_inherit.h"

// QQuickTextDocument is pure virtual: false
// QQuickTextDocument has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQQuickTextDocument : public QQuickTextDocument {
public:
  virtual ~MyQQuickTextDocument() {}
// void QQuickTextDocument(class QQuickItem *)
MyQQuickTextDocument(QQuickItem * parent) : QQuickTextDocument(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquicktextdocument.h:51
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QQuickTextDocument10metaObjectEv(void *this_) {
  return (void*)((QQuickTextDocument*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquicktextdocument.h:54
// [-2] void QQuickTextDocument(class QQuickItem *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QQuickTextDocumentC2EP10QQuickItem(QQuickItem * parent) {
  return  new QQuickTextDocument(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquicktextdocument.h:55
// [8] QTextDocument * textDocument()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QQuickTextDocument12textDocumentEv(void *this_) {
  return (void*)((QQuickTextDocument*)this_)->textDocument();
}


extern "C" Q_DECL_EXPORT
void C_ZN18QQuickTextDocumentD2Ev(void *this_) {
  delete (QQuickTextDocument*)(this_);
}
//  main block end
