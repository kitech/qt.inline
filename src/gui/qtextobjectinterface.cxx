//  header block begin
// since 0x040500
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qabstracttextdocumentlayout.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextObjectInterface is pure virtual: true
// QTextObjectInterface has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQTextObjectInterface : public QTextObjectInterface {
public:
  virtual ~MyQTextObjectInterface() {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:141
// [-2] void ~QTextObjectInterface()
extern "C" Q_DECL_EXPORT
void C_ZN20QTextObjectInterfaceD2Ev(void *this_) {
  delete (QTextObjectInterface*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:142
// [16] QSizeF intrinsicSize(QTextDocument *, int, const QTextFormat &)
extern "C" Q_DECL_EXPORT
void* C_ZN20QTextObjectInterface13intrinsicSizeEP13QTextDocumentiRK11QTextFormat(void *this_, QTextDocument * doc, int posInDocument, QTextFormat* format) {
  auto rv = ((QTextObjectInterface*)this_)->intrinsicSize(doc, posInDocument, *format);
return new QSizeF(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:143
// [-2] void drawObject(QPainter *, const QRectF &, QTextDocument *, int, const QTextFormat &)
extern "C" Q_DECL_EXPORT
void C_ZN20QTextObjectInterface10drawObjectEP8QPainterRK6QRectFP13QTextDocumentiRK11QTextFormat(void *this_, QPainter * painter, QRectF* rect, QTextDocument * doc, int posInDocument, QTextFormat* format) {
  ((QTextObjectInterface*)this_)->drawObject(painter, *rect, doc, posInDocument, *format);
}

//  main block end
