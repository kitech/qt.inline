//  header block begin
// /usr/include/qt/QtGui/qtextobject.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextobject.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextObject is pure virtual: false
// QTextObject has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQTextObject : public QTextObject {
public:
// void QTextObject(QTextDocument *)
MyQTextObject(QTextDocument * doc) : QTextObject(doc) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void ~QTextObject()
// Protected Visibility=Default Availability=Available
// [-2] void setFormat(const QTextFormat &)
  virtual void setFormat(const QTextFormat & format)   {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setFormat", &handled, 1, (uint64_t)&format, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTextObject::setFormat(format);
  }
  }

// void QTextObject(QTextObjectPrivate &, QTextDocument *)
MyQTextObject(QTextObjectPrivate & p, QTextDocument * doc) : QTextObject(p, doc) {}
};

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:68
// [-2] void setFormat(const QTextFormat &)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextObject9setFormatERK11QTextFormat(void *this_, QTextFormat* format) {
  ((QTextObject*)this_)->QTextObject::setFormat(*format);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:62
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextObject10metaObjectEv(void *this_) {
  return (void*)((QTextObject*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:62
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextObject11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QTextObject*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:62
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN11QTextObject11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QTextObject*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:62
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextObject2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QTextObject::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:62
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextObject6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QTextObject::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:71
// [16] QTextFormat format()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextObject6formatEv(void *this_) {
  auto rv = ((QTextObject*)this_)->format();
return new QTextFormat(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:72
// [4] int formatIndex()
extern "C" Q_DECL_EXPORT
int C_ZNK11QTextObject11formatIndexEv(void *this_) {
  return (int)((QTextObject*)this_)->formatIndex();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:74
// [8] QTextDocument * document()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextObject8documentEv(void *this_) {
  return (void*)((QTextObject*)this_)->document();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:76
// [4] int objectIndex()
extern "C" Q_DECL_EXPORT
int C_ZNK11QTextObject11objectIndexEv(void *this_) {
  return (int)((QTextObject*)this_)->objectIndex();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:78
// [8] QTextDocumentPrivate * docHandle()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextObject9docHandleEv(void *this_) {
  return (void*)((QTextObject*)this_)->docHandle();
}

//  main block end
