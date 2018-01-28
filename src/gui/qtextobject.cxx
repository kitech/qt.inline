//  header block begin
// /usr/include/qt/QtGui/qtextobject.h
#include <qtextobject.h>
#include <QtGui>

// QTextObject is pure virtual: false
//  header block end

//  main block begin
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:65
// [-2] void QTextObject(class QTextDocument *)
extern "C"
void* callback_ZN11QTextObjectC1EP13QTextDocument = 0;
extern "C" void set_callback_ZN11QTextObjectC1EP13QTextDocument(void*cbfn)
{ callback_ZN11QTextObjectC1EP13QTextDocument = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:66
// [-2] void ~QTextObject()
extern "C"
void* callback_ZN11QTextObjectD1Ev = 0;
extern "C" void set_callback_ZN11QTextObjectD1Ev(void*cbfn)
{ callback_ZN11QTextObjectD1Ev = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:68
// [-2] void setFormat(const class QTextFormat &)
extern "C"
void* callback_ZN11QTextObject9setFormatERK11QTextFormat = 0;
extern "C" void set_callback_ZN11QTextObject9setFormatERK11QTextFormat(void*cbfn)
{ callback_ZN11QTextObject9setFormatERK11QTextFormat = cbfn; }

class MyQTextObject : public QTextObject {
public:
MyQTextObject(QTextDocument * doc) : QTextObject(doc) {}
// void ~QTextObject()
// void setFormat(const class QTextFormat &)
// void setFormat(const class QTextFormat &)
virtual void setFormat(const QTextFormat & format) {
  if (callback_ZN11QTextObject9setFormatERK11QTextFormat != 0) {
  // callback_ZN11QTextObject9setFormatERK11QTextFormat(format);
}}
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
