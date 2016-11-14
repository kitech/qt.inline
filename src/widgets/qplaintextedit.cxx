// /usr/include/qt/QtWidgets/qplaintextedit.h
#include <qplaintextedit.h>
#include <QtWidgets>

// virtual
// /usr/include/qt/QtWidgets/qplaintextedit.h:289
// const QMetaObject * metaObject()
extern "C"
void C_ZNK24QPlainTextDocumentLayout10metaObjectEv(void *this_) {
  /*return*/ ((QPlainTextDocumentLayout*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:294
// void QPlainTextDocumentLayout(class QTextDocument *)
extern "C"
void* C_ZN24QPlainTextDocumentLayoutC1EP13QTextDocument(QTextDocument * document) {
  return new QPlainTextDocumentLayout(document);
}
// virtual
// /usr/include/qt/QtWidgets/qplaintextedit.h:295
// void ~QPlainTextDocumentLayout()
extern "C"
void C_ZN24QPlainTextDocumentLayoutD1Ev(void *this_) {
  delete (QPlainTextDocumentLayout*)(this_);
}
// virtual
// /usr/include/qt/QtWidgets/qplaintextedit.h:297
// void draw(class QPainter *, const struct QAbstractTextDocumentLayout::PaintContext &)
extern "C"
void C_ZN24QPlainTextDocumentLayout4drawEP8QPainterRKN27QAbstractTextDocumentLayout12PaintContextE(void *this_, QPainter * a0, const QAbstractTextDocumentLayout::PaintContext & a1) {
  ((QPlainTextDocumentLayout*)this_)->draw(a0, a1);
}
// virtual
// /usr/include/qt/QtWidgets/qplaintextedit.h:298
// int hitTest(const class QPointF &, Qt::HitTestAccuracy)
extern "C"
void C_ZNK24QPlainTextDocumentLayout7hitTestERK7QPointFN2Qt15HitTestAccuracyE(void *this_, const QPointF & a0, Qt::HitTestAccuracy a1) {
  /*return*/ ((QPlainTextDocumentLayout*)this_)->hitTest(a0, a1);
}
// virtual
// /usr/include/qt/QtWidgets/qplaintextedit.h:300
// int pageCount()
extern "C"
void C_ZNK24QPlainTextDocumentLayout9pageCountEv(void *this_) {
  /*return*/ ((QPlainTextDocumentLayout*)this_)->pageCount();
}
// virtual
// /usr/include/qt/QtWidgets/qplaintextedit.h:301
// QSizeF documentSize()
extern "C"
void C_ZNK24QPlainTextDocumentLayout12documentSizeEv(void *this_) {
  /*return*/ ((QPlainTextDocumentLayout*)this_)->documentSize();
}
// virtual
// /usr/include/qt/QtWidgets/qplaintextedit.h:303
// QRectF frameBoundingRect(class QTextFrame *)
extern "C"
void C_ZNK24QPlainTextDocumentLayout17frameBoundingRectEP10QTextFrame(void *this_, QTextFrame * a0) {
  /*return*/ ((QPlainTextDocumentLayout*)this_)->frameBoundingRect(a0);
}
// virtual
// /usr/include/qt/QtWidgets/qplaintextedit.h:304
// QRectF blockBoundingRect(const class QTextBlock &)
extern "C"
void C_ZNK24QPlainTextDocumentLayout17blockBoundingRectERK10QTextBlock(void *this_, const QTextBlock & block) {
  /*return*/ ((QPlainTextDocumentLayout*)this_)->blockBoundingRect(block);
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:306
// void ensureBlockLayout(const class QTextBlock &)
extern "C"
void C_ZNK24QPlainTextDocumentLayout17ensureBlockLayoutERK10QTextBlock(void *this_, const QTextBlock & block) {
  ((QPlainTextDocumentLayout*)this_)->ensureBlockLayout(block);
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:308
// void setCursorWidth(int)
extern "C"
void C_ZN24QPlainTextDocumentLayout14setCursorWidthEi(void *this_, int width) {
  ((QPlainTextDocumentLayout*)this_)->setCursorWidth(width);
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:309
// int cursorWidth()
extern "C"
void C_ZNK24QPlainTextDocumentLayout11cursorWidthEv(void *this_) {
  /*return*/ ((QPlainTextDocumentLayout*)this_)->cursorWidth();
}
// /usr/include/qt/QtWidgets/qplaintextedit.h:311
// void requestUpdate()
extern "C"
void C_ZN24QPlainTextDocumentLayout13requestUpdateEv(void *this_) {
  ((QPlainTextDocumentLayout*)this_)->requestUpdate();
}