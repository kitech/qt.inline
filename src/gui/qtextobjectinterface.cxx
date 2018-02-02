//  header block begin
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h
#include <qabstracttextdocumentlayout.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextObjectInterface is pure virtual: true
// QTextObjectInterface has virtual projected: false
//  header block end

//  main block begin

class MyQTextObjectInterface : public QTextObjectInterface {
public:
  virtual ~MyQTextObjectInterface() {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:141
// [-2] void ~QTextObjectInterface()
extern "C"
void C_ZN20QTextObjectInterfaceD2Ev(void *this_) {
  delete (QTextObjectInterface*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:142
// [16] QSizeF intrinsicSize(class QTextDocument *, int, const class QTextFormat &)
extern "C"
void* C_ZN20QTextObjectInterface13intrinsicSizeEP13QTextDocumentiRK11QTextFormat(void *this_, QTextDocument * doc, int posInDocument, QTextFormat* format) {
  auto rv = ((QTextObjectInterface*)this_)->intrinsicSize(doc, posInDocument, *format);
return new QSizeF(rv);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:143
// [-2] void drawObject(class QPainter *, const class QRectF &, class QTextDocument *, int, const class QTextFormat &)
extern "C"
void C_ZN20QTextObjectInterface10drawObjectEP8QPainterRK6QRectFP13QTextDocumentiRK11QTextFormat(void *this_, QPainter * painter, QRectF* rect, QTextDocument * doc, int posInDocument, QTextFormat* format) {
  ((QTextObjectInterface*)this_)->drawObject(painter, *rect, doc, posInDocument, *format);
}
//  main block end
