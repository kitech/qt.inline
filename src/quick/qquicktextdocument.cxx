//  header block begin
// since 0x050100
// /usr/include/qt/QtQuick/qquicktextdocument.h
#ifndef protected
#define protected public
#define private public
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
// void QQuickTextDocument(QQuickItem *)
MyQQuickTextDocument(QQuickItem * parent) : QQuickTextDocument(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquicktextdocument.h:51
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QQuickTextDocument10metaObjectEv(void *this_) {
  return (void*)((QQuickTextDocument*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquicktextdocument.h:51
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QQuickTextDocument11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QQuickTextDocument*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquicktextdocument.h:51
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN18QQuickTextDocument11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QQuickTextDocument*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquicktextdocument.h:51
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QQuickTextDocument2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QQuickTextDocument::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquicktextdocument.h:51
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QQuickTextDocument6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QQuickTextDocument::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquicktextdocument.h:54
// [-2] void QQuickTextDocument(QQuickItem *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QQuickTextDocumentC2EP10QQuickItem(QQuickItem * parent) {
  return  new MyQQuickTextDocument(parent);
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
