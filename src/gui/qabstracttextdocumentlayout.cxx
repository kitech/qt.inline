//  header block begin
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h
#ifndef protected
#define protected public
#endif
#include <qabstracttextdocumentlayout.h>
#include <QtGui>
#include "callback_inherit.h"

// QAbstractTextDocumentLayout is pure virtual: true
// QAbstractTextDocumentLayout has virtual projected: true
//  header block end

//  main block begin

class MyQAbstractTextDocumentLayout : public QAbstractTextDocumentLayout {
public:
  virtual ~MyQAbstractTextDocumentLayout() {}
// void QAbstractTextDocumentLayout(class QTextDocument *)
MyQAbstractTextDocumentLayout(QTextDocument * doc) : QAbstractTextDocumentLayout(doc) {}
// Protected purevirtual virtual Visibility=Default Availability=Available
// void documentChanged(int, int, int)
  virtual void documentChanged(int from, int charsRemoved, int charsAdded) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"documentChanged", &handled, 3, (uint64_t)from, (uint64_t)charsRemoved, (uint64_t)charsAdded, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractTextDocumentLayout::documentChanged(from, charsRemoved, charsAdded);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void resizeInlineObject(class QTextInlineObject, int, const class QTextFormat &)
  virtual void resizeInlineObject(QTextInlineObject item, int posInDocument, const QTextFormat & format) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"resizeInlineObject", &handled, 3, (uint64_t)&item, (uint64_t)posInDocument, (uint64_t)&format, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractTextDocumentLayout::resizeInlineObject(item, posInDocument, format);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void positionInlineObject(class QTextInlineObject, int, const class QTextFormat &)
  virtual void positionInlineObject(QTextInlineObject item, int posInDocument, const QTextFormat & format) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"positionInlineObject", &handled, 3, (uint64_t)&item, (uint64_t)posInDocument, (uint64_t)&format, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractTextDocumentLayout::positionInlineObject(item, posInDocument, format);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void drawInlineObject(class QPainter *, const class QRectF &, class QTextInlineObject, int, const class QTextFormat &)
  virtual void drawInlineObject(QPainter * painter, const QRectF & rect, QTextInlineObject object, int posInDocument, const QTextFormat & format) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"drawInlineObject", &handled, 5, (uint64_t)painter, (uint64_t)&rect, (uint64_t)&object, (uint64_t)posInDocument, (uint64_t)&format, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractTextDocumentLayout::drawInlineObject(painter, rect, object, posInDocument, format);
  }
  }

// Protected Visibility=Default Availability=Available
// int formatIndex(int)
  virtual int formatIndex(int pos) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"formatIndex", &handled, 1, (uint64_t)pos, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // IntIntint
    } else {
    return QAbstractTextDocumentLayout::formatIndex(pos);
  }
  }

// Protected Visibility=Default Availability=Available
// QTextCharFormat format(int)
  virtual QTextCharFormat format(int pos) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"format", &handled, 1, (uint64_t)pos, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QTextCharFormat*)(irv);
      // RecordRecordQTextCharFormat
    } else {
    return QAbstractTextDocumentLayout::format(pos);
  }
  }

};

// Protected purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:115
// [-2] void documentChanged(int, int, int)
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:117
// [-2] void resizeInlineObject(class QTextInlineObject, int, const class QTextFormat &)
extern "C" Q_DECL_EXPORT
void C_ZN27QAbstractTextDocumentLayout18resizeInlineObjectE17QTextInlineObjectiRK11QTextFormat(void *this_, QTextInlineObject* item, int posInDocument, QTextFormat* format) {
  ((QAbstractTextDocumentLayout*)this_)->QAbstractTextDocumentLayout::resizeInlineObject(*item, posInDocument, *format);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:118
// [-2] void positionInlineObject(class QTextInlineObject, int, const class QTextFormat &)
extern "C" Q_DECL_EXPORT
void C_ZN27QAbstractTextDocumentLayout20positionInlineObjectE17QTextInlineObjectiRK11QTextFormat(void *this_, QTextInlineObject* item, int posInDocument, QTextFormat* format) {
  ((QAbstractTextDocumentLayout*)this_)->QAbstractTextDocumentLayout::positionInlineObject(*item, posInDocument, *format);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:119
// [-2] void drawInlineObject(class QPainter *, const class QRectF &, class QTextInlineObject, int, const class QTextFormat &)
extern "C" Q_DECL_EXPORT
void C_ZN27QAbstractTextDocumentLayout16drawInlineObjectEP8QPainterRK6QRectF17QTextInlineObjectiRK11QTextFormat(void *this_, QPainter * painter, QRectF* rect, QTextInlineObject* object, int posInDocument, QTextFormat* format) {
  ((QAbstractTextDocumentLayout*)this_)->QAbstractTextDocumentLayout::drawInlineObject(painter, *rect, *object, posInDocument, *format);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:121
// [4] int formatIndex(int)
extern "C" Q_DECL_EXPORT
int C_ZN27QAbstractTextDocumentLayout11formatIndexEi(void *this_, int pos) {
  return (int)((QAbstractTextDocumentLayout*)this_)->QAbstractTextDocumentLayout::formatIndex(pos);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:122
// [16] QTextCharFormat format(int)
extern "C" Q_DECL_EXPORT
void* C_ZN27QAbstractTextDocumentLayout6formatEi(void *this_, int pos) {
  auto rv = ((QAbstractTextDocumentLayout*)this_)->QAbstractTextDocumentLayout::format(pos);
return new QTextCharFormat(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:60
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK27QAbstractTextDocumentLayout10metaObjectEv(void *this_) {
  return (void*)((QAbstractTextDocumentLayout*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:64
// [-2] void QAbstractTextDocumentLayout(class QTextDocument *)
extern "C" Q_DECL_EXPORT
void* C_ZN27QAbstractTextDocumentLayoutC2EP13QTextDocument(QTextDocument * doc) {
  auto _nilp = (MyQAbstractTextDocumentLayout*)(0);
  return 0; // new MyQAbstractTextDocumentLayout(doc);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:65
// [-2] void ~QAbstractTextDocumentLayout()
extern "C" Q_DECL_EXPORT
void C_ZN27QAbstractTextDocumentLayoutD2Ev(void *this_) {
  delete (QAbstractTextDocumentLayout*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:85
// [4] int hitTest(const class QPointF &, Qt::HitTestAccuracy)
extern "C" Q_DECL_EXPORT
int C_ZNK27QAbstractTextDocumentLayout7hitTestERK7QPointFN2Qt15HitTestAccuracyE(void *this_, QPointF* point, Qt::HitTestAccuracy accuracy) {
  return (int)((QAbstractTextDocumentLayout*)this_)->hitTest(*point, accuracy);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:87
// [8] QString anchorAt(const class QPointF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK27QAbstractTextDocumentLayout8anchorAtERK7QPointF(void *this_, QPointF* pos) {
  auto rv = ((QAbstractTextDocumentLayout*)this_)->anchorAt(*pos);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:88
// [8] QString imageAt(const class QPointF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK27QAbstractTextDocumentLayout7imageAtERK7QPointF(void *this_, QPointF* pos) {
  auto rv = ((QAbstractTextDocumentLayout*)this_)->imageAt(*pos);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:89
// [16] QTextFormat formatAt(const class QPointF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK27QAbstractTextDocumentLayout8formatAtERK7QPointF(void *this_, QPointF* pos) {
  auto rv = ((QAbstractTextDocumentLayout*)this_)->formatAt(*pos);
return new QTextFormat(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:91
// [4] int pageCount()
extern "C" Q_DECL_EXPORT
int C_ZNK27QAbstractTextDocumentLayout9pageCountEv(void *this_) {
  return (int)((QAbstractTextDocumentLayout*)this_)->pageCount();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:92
// [16] QSizeF documentSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK27QAbstractTextDocumentLayout12documentSizeEv(void *this_) {
  auto rv = ((QAbstractTextDocumentLayout*)this_)->documentSize();
return new QSizeF(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:94
// [32] QRectF frameBoundingRect(class QTextFrame *)
extern "C" Q_DECL_EXPORT
void* C_ZNK27QAbstractTextDocumentLayout17frameBoundingRectEP10QTextFrame(void *this_, QTextFrame * frame) {
  auto rv = ((QAbstractTextDocumentLayout*)this_)->frameBoundingRect(frame);
return new QRectF(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:95
// [32] QRectF blockBoundingRect(const class QTextBlock &)
extern "C" Q_DECL_EXPORT
void* C_ZNK27QAbstractTextDocumentLayout17blockBoundingRectERK10QTextBlock(void *this_, QTextBlock* block) {
  auto rv = ((QAbstractTextDocumentLayout*)this_)->blockBoundingRect(*block);
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:97
// [-2] void setPaintDevice(class QPaintDevice *)
extern "C" Q_DECL_EXPORT
void C_ZN27QAbstractTextDocumentLayout14setPaintDeviceEP12QPaintDevice(void *this_, QPaintDevice * device) {
  ((QAbstractTextDocumentLayout*)this_)->setPaintDevice(device);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:98
// [8] QPaintDevice * paintDevice()
extern "C" Q_DECL_EXPORT
void* C_ZNK27QAbstractTextDocumentLayout11paintDeviceEv(void *this_) {
  return (void*)((QAbstractTextDocumentLayout*)this_)->paintDevice();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:100
// [8] QTextDocument * document()
extern "C" Q_DECL_EXPORT
void* C_ZNK27QAbstractTextDocumentLayout8documentEv(void *this_) {
  return (void*)((QAbstractTextDocumentLayout*)this_)->document();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:102
// [-2] void registerHandler(int, class QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN27QAbstractTextDocumentLayout15registerHandlerEiP7QObject(void *this_, int objectType, QObject * component) {
  ((QAbstractTextDocumentLayout*)this_)->registerHandler(objectType, component);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:103
// [-2] void unregisterHandler(int, class QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN27QAbstractTextDocumentLayout17unregisterHandlerEiP7QObject(void *this_, int objectType, QObject * component) {
  ((QAbstractTextDocumentLayout*)this_)->unregisterHandler(objectType, component);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:104
// [8] QTextObjectInterface * handlerForObject(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK27QAbstractTextDocumentLayout16handlerForObjectEi(void *this_, int objectType) {
  return (void*)((QAbstractTextDocumentLayout*)this_)->handlerForObject(objectType);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:107
// [-2] void update(const class QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN27QAbstractTextDocumentLayout6updateERK6QRectF(void *this_, QRectF* arg0) {
  ((QAbstractTextDocumentLayout*)this_)->update(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:108
// [-2] void updateBlock(const class QTextBlock &)
extern "C" Q_DECL_EXPORT
void C_ZN27QAbstractTextDocumentLayout11updateBlockERK10QTextBlock(void *this_, QTextBlock* block) {
  ((QAbstractTextDocumentLayout*)this_)->updateBlock(*block);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:109
// [-2] void documentSizeChanged(const class QSizeF &)
extern "C" Q_DECL_EXPORT
void C_ZN27QAbstractTextDocumentLayout19documentSizeChangedERK6QSizeF(void *this_, QSizeF* newSize) {
  ((QAbstractTextDocumentLayout*)this_)->documentSizeChanged(*newSize);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:110
// [-2] void pageCountChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN27QAbstractTextDocumentLayout16pageCountChangedEi(void *this_, int newPages) {
  ((QAbstractTextDocumentLayout*)this_)->pageCountChanged(newPages);
}

//  main block end
