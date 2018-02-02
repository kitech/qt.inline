//  header block begin
// /usr/include/qt/QtGui/qtextobject.h
#include <qtextobject.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextObject is pure virtual: false
// QTextObject has virtual projected: true
//  header block end

//  main block begin
// void* callback_ZN11QTextObjectC1EP13QTextDocument_fnptr = 0;
// extern "C" void set_callback_ZN11QTextObjectC1EP13QTextDocument(void*cbfn)
// { callback_ZN11QTextObjectC1EP13QTextDocument_fnptr = cbfn; }
// void* callback_ZN11QTextObjectD1Ev_fnptr = 0;
// extern "C" void set_callback_ZN11QTextObjectD1Ev(void*cbfn)
// { callback_ZN11QTextObjectD1Ev_fnptr = cbfn; }
// void* callback_ZN11QTextObject9setFormatERK11QTextFormat_fnptr = 0;
// extern "C" void set_callback_ZN11QTextObject9setFormatERK11QTextFormat(void*cbfn)
// { callback_ZN11QTextObject9setFormatERK11QTextFormat_fnptr = cbfn; }

class MyQTextObject : public QTextObject {
public:
  virtual ~MyQTextObject() {}
// void QTextObject(class QTextDocument *)
MyQTextObject(QTextDocument * doc) : QTextObject(doc) {}
// void ~QTextObject()
// void setFormat(const class QTextFormat &)
  virtual void setFormat(const QTextFormat & format) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"setFormat", &handled, 1, (uint64_t)&format, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    // auto fnptr = ((void (*)(void* , QTextFormat*))(callback_ZN11QTextObject9setFormatERK11QTextFormat_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , (QTextFormat*)&format);
    // }
    QTextObject::setFormat(format);
  }
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:62
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK11QTextObject10metaObjectEv(void *this_) {
  return (void*)((QTextObject*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:71
// [16] QTextFormat format()
extern "C"
void* C_ZNK11QTextObject6formatEv(void *this_) {
  auto rv = ((QTextObject*)this_)->format();
return new QTextFormat(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:72
// [4] int formatIndex()
extern "C"
int C_ZNK11QTextObject11formatIndexEv(void *this_) {
  return (int)((QTextObject*)this_)->formatIndex();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:74
// [8] QTextDocument * document()
extern "C"
void* C_ZNK11QTextObject8documentEv(void *this_) {
  return (void*)((QTextObject*)this_)->document();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:76
// [4] int objectIndex()
extern "C"
int C_ZNK11QTextObject11objectIndexEv(void *this_) {
  return (int)((QTextObject*)this_)->objectIndex();
}
//  main block end
