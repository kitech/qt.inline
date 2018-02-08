//  header block begin
// /usr/include/qt/QtWidgets/qplaintextedit.h
#include <qplaintextedit.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QPlainTextDocumentLayout is pure virtual: false
// QPlainTextDocumentLayout has virtual projected: true
//  header block end

//  main block begin

class MyQPlainTextDocumentLayout : public QPlainTextDocumentLayout {
public:
  virtual ~MyQPlainTextDocumentLayout() {}
// void QPlainTextDocumentLayout(class QTextDocument *)
MyQPlainTextDocumentLayout(QTextDocument * document) : QPlainTextDocumentLayout(document) {}
// void documentChanged(int, int, int)
  virtual void documentChanged(int from, int arg1, int charsAdded) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"documentChanged", &handled, 3, (uint64_t)from, (uint64_t)arg1, (uint64_t)charsAdded, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPlainTextDocumentLayout::documentChanged(from, arg1, charsAdded);
  }
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:297
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK24QPlainTextDocumentLayout10metaObjectEv(void *this_) {
  return (void*)((QPlainTextDocumentLayout*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:302
// [-2] void QPlainTextDocumentLayout(class QTextDocument *)
extern "C"
void* C_ZN24QPlainTextDocumentLayoutC2EP13QTextDocument(QTextDocument * document) {
  auto _nilp = (MyQPlainTextDocumentLayout*)(0);
  return  new MyQPlainTextDocumentLayout(document);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:303
// [-2] void ~QPlainTextDocumentLayout()
extern "C"
void C_ZN24QPlainTextDocumentLayoutD2Ev(void *this_) {
  delete (QPlainTextDocumentLayout*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:306
// [4] int hitTest(const class QPointF &, Qt::HitTestAccuracy)
extern "C"
int C_ZNK24QPlainTextDocumentLayout7hitTestERK7QPointFN2Qt15HitTestAccuracyE(void *this_, QPointF* arg0, Qt::HitTestAccuracy arg1) {
  return (int)((QPlainTextDocumentLayout*)this_)->hitTest(*arg0, arg1);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:308
// [4] int pageCount()
extern "C"
int C_ZNK24QPlainTextDocumentLayout9pageCountEv(void *this_) {
  return (int)((QPlainTextDocumentLayout*)this_)->pageCount();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:309
// [16] QSizeF documentSize()
extern "C"
void* C_ZNK24QPlainTextDocumentLayout12documentSizeEv(void *this_) {
  auto rv = ((QPlainTextDocumentLayout*)this_)->documentSize();
return new QSizeF(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:311
// [32] QRectF frameBoundingRect(class QTextFrame *)
extern "C"
void* C_ZNK24QPlainTextDocumentLayout17frameBoundingRectEP10QTextFrame(void *this_, QTextFrame * arg0) {
  auto rv = ((QPlainTextDocumentLayout*)this_)->frameBoundingRect(arg0);
return new QRectF(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:312
// [32] QRectF blockBoundingRect(const class QTextBlock &)
extern "C"
void* C_ZNK24QPlainTextDocumentLayout17blockBoundingRectERK10QTextBlock(void *this_, QTextBlock* block) {
  auto rv = ((QPlainTextDocumentLayout*)this_)->blockBoundingRect(*block);
return new QRectF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:314
// [-2] void ensureBlockLayout(const class QTextBlock &)
extern "C"
void C_ZNK24QPlainTextDocumentLayout17ensureBlockLayoutERK10QTextBlock(void *this_, QTextBlock* block) {
  ((QPlainTextDocumentLayout*)this_)->ensureBlockLayout(*block);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:316
// [-2] void setCursorWidth(int)
extern "C"
void C_ZN24QPlainTextDocumentLayout14setCursorWidthEi(void *this_, int width) {
  ((QPlainTextDocumentLayout*)this_)->setCursorWidth(width);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:317
// [4] int cursorWidth()
extern "C"
int C_ZNK24QPlainTextDocumentLayout11cursorWidthEv(void *this_) {
  return (int)((QPlainTextDocumentLayout*)this_)->cursorWidth();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:319
// [-2] void requestUpdate()
extern "C"
void C_ZN24QPlainTextDocumentLayout13requestUpdateEv(void *this_) {
  ((QPlainTextDocumentLayout*)this_)->requestUpdate();
}
//  main block end