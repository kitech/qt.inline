//  header block begin
// since 0x040400
// /usr/include/qt/QtWidgets/qplaintextedit.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qplaintextedit.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QPlainTextDocumentLayout is pure virtual: false
// QPlainTextDocumentLayout has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQPlainTextDocumentLayout : public QPlainTextDocumentLayout {
public:
  virtual ~MyQPlainTextDocumentLayout() {}
// void QPlainTextDocumentLayout(QTextDocument *)
MyQPlainTextDocumentLayout(QTextDocument * document) : QPlainTextDocumentLayout(document) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void documentChanged(int, int, int)
  virtual void documentChanged(int from, int arg1, int charsAdded) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"documentChanged", &handled, 3, (uint64_t)from, (uint64_t)arg1, (uint64_t)charsAdded, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QPlainTextDocumentLayout::documentChanged(from, arg1, charsAdded);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:322
// [-2] void documentChanged(int, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN24QPlainTextDocumentLayout15documentChangedEiii(void *this_, int from, int arg1, int charsAdded) {
  ((QPlainTextDocumentLayout*)this_)->QPlainTextDocumentLayout::documentChanged(from, arg1, charsAdded);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:297
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK24QPlainTextDocumentLayout10metaObjectEv(void *this_) {
  return (void*)((QPlainTextDocumentLayout*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:297
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN24QPlainTextDocumentLayout11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QPlainTextDocumentLayout*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:297
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN24QPlainTextDocumentLayout11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QPlainTextDocumentLayout*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:297
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN24QPlainTextDocumentLayout2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QPlainTextDocumentLayout::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:297
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN24QPlainTextDocumentLayout6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QPlainTextDocumentLayout::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:302
// [-2] void QPlainTextDocumentLayout(QTextDocument *)
extern "C" Q_DECL_EXPORT
void* C_ZN24QPlainTextDocumentLayoutC2EP13QTextDocument(QTextDocument * document) {
  auto _nilp = (MyQPlainTextDocumentLayout*)(0);
  return  new MyQPlainTextDocumentLayout(document);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:303
// [-2] void ~QPlainTextDocumentLayout()
extern "C" Q_DECL_EXPORT
void C_ZN24QPlainTextDocumentLayoutD2Ev(void *this_) {
  delete (QPlainTextDocumentLayout*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:305
// [-2] void draw(QPainter *, const QAbstractTextDocumentLayout::PaintContext &)
extern "C" Q_DECL_EXPORT
void C_ZN24QPlainTextDocumentLayout4drawEP8QPainterRKN27QAbstractTextDocumentLayout12PaintContextE(void *this_, QPainter * arg0, QAbstractTextDocumentLayout::PaintContext* arg1) {
  ((QPlainTextDocumentLayout*)this_)->draw(arg0, *arg1);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:306
// [4] int hitTest(const QPointF &, Qt::HitTestAccuracy)
extern "C" Q_DECL_EXPORT
int C_ZNK24QPlainTextDocumentLayout7hitTestERK7QPointFN2Qt15HitTestAccuracyE(void *this_, QPointF* arg0, Qt::HitTestAccuracy arg1) {
  return (int)((QPlainTextDocumentLayout*)this_)->hitTest(*arg0, arg1);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:308
// [4] int pageCount()
extern "C" Q_DECL_EXPORT
int C_ZNK24QPlainTextDocumentLayout9pageCountEv(void *this_) {
  return (int)((QPlainTextDocumentLayout*)this_)->pageCount();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:309
// [16] QSizeF documentSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK24QPlainTextDocumentLayout12documentSizeEv(void *this_) {
  auto rv = ((QPlainTextDocumentLayout*)this_)->documentSize();
return new QSizeF(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:311
// [32] QRectF frameBoundingRect(QTextFrame *)
extern "C" Q_DECL_EXPORT
void* C_ZNK24QPlainTextDocumentLayout17frameBoundingRectEP10QTextFrame(void *this_, QTextFrame * arg0) {
  auto rv = ((QPlainTextDocumentLayout*)this_)->frameBoundingRect(arg0);
return new QRectF(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:312
// [32] QRectF blockBoundingRect(const QTextBlock &)
extern "C" Q_DECL_EXPORT
void* C_ZNK24QPlainTextDocumentLayout17blockBoundingRectERK10QTextBlock(void *this_, QTextBlock* block) {
  auto rv = ((QPlainTextDocumentLayout*)this_)->blockBoundingRect(*block);
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:314
// [-2] void ensureBlockLayout(const QTextBlock &)
extern "C" Q_DECL_EXPORT
void C_ZNK24QPlainTextDocumentLayout17ensureBlockLayoutERK10QTextBlock(void *this_, QTextBlock* block) {
  ((QPlainTextDocumentLayout*)this_)->ensureBlockLayout(*block);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:316
// [-2] void setCursorWidth(int)
extern "C" Q_DECL_EXPORT
void C_ZN24QPlainTextDocumentLayout14setCursorWidthEi(void *this_, int width) {
  ((QPlainTextDocumentLayout*)this_)->setCursorWidth(width);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:317
// [4] int cursorWidth()
extern "C" Q_DECL_EXPORT
int C_ZNK24QPlainTextDocumentLayout11cursorWidthEv(void *this_) {
  return (int)((QPlainTextDocumentLayout*)this_)->cursorWidth();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:319
// [-2] void requestUpdate()
extern "C" Q_DECL_EXPORT
void C_ZN24QPlainTextDocumentLayout13requestUpdateEv(void *this_) {
  ((QPlainTextDocumentLayout*)this_)->requestUpdate();
}

//  main block end
