//  header block begin
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h
#include <qabstracttextdocumentlayout.h>
#include <QtGui>

// QAbstractTextDocumentLayout is pure virtual: true
// QAbstractTextDocumentLayout has virtual projected: true
//  header block end

//  main block begin
// Protected purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:115
// [-2] void documentChanged(int, int, int)
extern "C"
void* callback_ZN27QAbstractTextDocumentLayout15documentChangedEiii_fnptr = 0;
extern "C" void set_callback_ZN27QAbstractTextDocumentLayout15documentChangedEiii(void*cbfn)
{ callback_ZN27QAbstractTextDocumentLayout15documentChangedEiii_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:117
// [-2] void resizeInlineObject(class QTextInlineObject, int, const class QTextFormat &)
extern "C"
void* callback_ZN27QAbstractTextDocumentLayout18resizeInlineObjectE17QTextInlineObjectiRK11QTextFormat_fnptr = 0;
extern "C" void set_callback_ZN27QAbstractTextDocumentLayout18resizeInlineObjectE17QTextInlineObjectiRK11QTextFormat(void*cbfn)
{ callback_ZN27QAbstractTextDocumentLayout18resizeInlineObjectE17QTextInlineObjectiRK11QTextFormat_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:118
// [-2] void positionInlineObject(class QTextInlineObject, int, const class QTextFormat &)
extern "C"
void* callback_ZN27QAbstractTextDocumentLayout20positionInlineObjectE17QTextInlineObjectiRK11QTextFormat_fnptr = 0;
extern "C" void set_callback_ZN27QAbstractTextDocumentLayout20positionInlineObjectE17QTextInlineObjectiRK11QTextFormat(void*cbfn)
{ callback_ZN27QAbstractTextDocumentLayout20positionInlineObjectE17QTextInlineObjectiRK11QTextFormat_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:119
// [-2] void drawInlineObject(class QPainter *, const class QRectF &, class QTextInlineObject, int, const class QTextFormat &)
extern "C"
void* callback_ZN27QAbstractTextDocumentLayout16drawInlineObjectEP8QPainterRK6QRectF17QTextInlineObjectiRK11QTextFormat_fnptr = 0;
extern "C" void set_callback_ZN27QAbstractTextDocumentLayout16drawInlineObjectEP8QPainterRK6QRectF17QTextInlineObjectiRK11QTextFormat(void*cbfn)
{ callback_ZN27QAbstractTextDocumentLayout16drawInlineObjectEP8QPainterRK6QRectF17QTextInlineObjectiRK11QTextFormat_fnptr = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:121
// [4] int formatIndex(int)
extern "C"
void* callback_ZN27QAbstractTextDocumentLayout11formatIndexEi_fnptr = 0;
extern "C" void set_callback_ZN27QAbstractTextDocumentLayout11formatIndexEi(void*cbfn)
{ callback_ZN27QAbstractTextDocumentLayout11formatIndexEi_fnptr = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:122
// [16] QTextCharFormat format(int)
extern "C"
void* callback_ZN27QAbstractTextDocumentLayout6formatEi_fnptr = 0;
extern "C" void set_callback_ZN27QAbstractTextDocumentLayout6formatEi(void*cbfn)
{ callback_ZN27QAbstractTextDocumentLayout6formatEi_fnptr = cbfn; }

class MyQAbstractTextDocumentLayout : public QAbstractTextDocumentLayout {
public:
  virtual ~MyQAbstractTextDocumentLayout() {}
// void QAbstractTextDocumentLayout(class QTextDocument *)
MyQAbstractTextDocumentLayout(QTextDocument * doc) : QAbstractTextDocumentLayout(doc) {}
// void documentChanged(int, int, int)
  virtual void documentChanged(int from, int charsRemoved, int charsAdded) {
    auto fnptr = ((void (*)(void* , int, int, int))(callback_ZN27QAbstractTextDocumentLayout15documentChangedEiii_fnptr));
    if (fnptr != 0) {
      fnptr(this , from, charsRemoved, charsAdded);
    }
    QAbstractTextDocumentLayout::documentChanged(from, charsRemoved, charsAdded);
  }
// void resizeInlineObject(class QTextInlineObject, int, const class QTextFormat &)
  virtual void resizeInlineObject(QTextInlineObject item, int posInDocument, const QTextFormat & format) {
    auto fnptr = ((void (*)(void* , QTextInlineObject*, int, QTextFormat*))(callback_ZN27QAbstractTextDocumentLayout18resizeInlineObjectE17QTextInlineObjectiRK11QTextFormat_fnptr));
    if (fnptr != 0) {
      fnptr(this , (QTextInlineObject*)&item, posInDocument, (QTextFormat*)&format);
    }
    QAbstractTextDocumentLayout::resizeInlineObject(item, posInDocument, format);
  }
// void positionInlineObject(class QTextInlineObject, int, const class QTextFormat &)
  virtual void positionInlineObject(QTextInlineObject item, int posInDocument, const QTextFormat & format) {
    auto fnptr = ((void (*)(void* , QTextInlineObject*, int, QTextFormat*))(callback_ZN27QAbstractTextDocumentLayout20positionInlineObjectE17QTextInlineObjectiRK11QTextFormat_fnptr));
    if (fnptr != 0) {
      fnptr(this , (QTextInlineObject*)&item, posInDocument, (QTextFormat*)&format);
    }
    QAbstractTextDocumentLayout::positionInlineObject(item, posInDocument, format);
  }
// void drawInlineObject(class QPainter *, const class QRectF &, class QTextInlineObject, int, const class QTextFormat &)
  virtual void drawInlineObject(QPainter * painter, const QRectF & rect, QTextInlineObject object, int posInDocument, const QTextFormat & format) {
    auto fnptr = ((void (*)(void* , QPainter *, QRectF*, QTextInlineObject*, int, QTextFormat*))(callback_ZN27QAbstractTextDocumentLayout16drawInlineObjectEP8QPainterRK6QRectF17QTextInlineObjectiRK11QTextFormat_fnptr));
    if (fnptr != 0) {
      fnptr(this , painter, (QRectF*)&rect, (QTextInlineObject*)&object, posInDocument, (QTextFormat*)&format);
    }
    QAbstractTextDocumentLayout::drawInlineObject(painter, rect, object, posInDocument, format);
  }
// int formatIndex(int)
  virtual int formatIndex(int pos) {
    auto fnptr = ((int (*)(void* , int))(callback_ZN27QAbstractTextDocumentLayout11formatIndexEi_fnptr));
    if (fnptr != 0) {
      fnptr(this , pos);
    }
    return QAbstractTextDocumentLayout::formatIndex(pos);
  }
// QTextCharFormat format(int)
  virtual QTextCharFormat format(int pos) {
    auto fnptr = ((QTextCharFormat (*)(void* , int))(callback_ZN27QAbstractTextDocumentLayout6formatEi_fnptr));
    if (fnptr != 0) {
      fnptr(this , pos);
    }
    return QAbstractTextDocumentLayout::format(pos);
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:60
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK27QAbstractTextDocumentLayout10metaObjectEv(void *this_) {
  return (void*)((QAbstractTextDocumentLayout*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:64
// [-2] void QAbstractTextDocumentLayout(class QTextDocument *)
extern "C"
void* C_ZN27QAbstractTextDocumentLayoutC1EP13QTextDocument(QTextDocument * doc) {
  auto _nilp = (MyQAbstractTextDocumentLayout*)(0);
  return 0; // new MyQAbstractTextDocumentLayout(doc);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:65
// [-2] void ~QAbstractTextDocumentLayout()
extern "C"
void C_ZN27QAbstractTextDocumentLayoutD2Ev(void *this_) {
  delete (QAbstractTextDocumentLayout*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:85
// [4] int hitTest(const class QPointF &, Qt::HitTestAccuracy)
extern "C"
int C_ZNK27QAbstractTextDocumentLayout7hitTestERK7QPointFN2Qt15HitTestAccuracyE(void *this_, QPointF* point, Qt::HitTestAccuracy accuracy) {
  return (int)((QAbstractTextDocumentLayout*)this_)->hitTest(*point, accuracy);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:87
// [8] QString anchorAt(const class QPointF &)
extern "C"
void* C_ZNK27QAbstractTextDocumentLayout8anchorAtERK7QPointF(void *this_, QPointF* pos) {
  auto rv = ((QAbstractTextDocumentLayout*)this_)->anchorAt(*pos);
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:88
// [8] QString imageAt(const class QPointF &)
extern "C"
void* C_ZNK27QAbstractTextDocumentLayout7imageAtERK7QPointF(void *this_, QPointF* pos) {
  auto rv = ((QAbstractTextDocumentLayout*)this_)->imageAt(*pos);
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:89
// [16] QTextFormat formatAt(const class QPointF &)
extern "C"
void* C_ZNK27QAbstractTextDocumentLayout8formatAtERK7QPointF(void *this_, QPointF* pos) {
  auto rv = ((QAbstractTextDocumentLayout*)this_)->formatAt(*pos);
return new QTextFormat(rv);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:91
// [4] int pageCount()
extern "C"
int C_ZNK27QAbstractTextDocumentLayout9pageCountEv(void *this_) {
  return (int)((QAbstractTextDocumentLayout*)this_)->pageCount();
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:92
// [16] QSizeF documentSize()
extern "C"
void* C_ZNK27QAbstractTextDocumentLayout12documentSizeEv(void *this_) {
  auto rv = ((QAbstractTextDocumentLayout*)this_)->documentSize();
return new QSizeF(rv);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:94
// [32] QRectF frameBoundingRect(class QTextFrame *)
extern "C"
void* C_ZNK27QAbstractTextDocumentLayout17frameBoundingRectEP10QTextFrame(void *this_, QTextFrame * frame) {
  auto rv = ((QAbstractTextDocumentLayout*)this_)->frameBoundingRect(frame);
return new QRectF(rv);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:95
// [32] QRectF blockBoundingRect(const class QTextBlock &)
extern "C"
void* C_ZNK27QAbstractTextDocumentLayout17blockBoundingRectERK10QTextBlock(void *this_, QTextBlock* block) {
  auto rv = ((QAbstractTextDocumentLayout*)this_)->blockBoundingRect(*block);
return new QRectF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:97
// [-2] void setPaintDevice(class QPaintDevice *)
extern "C"
void C_ZN27QAbstractTextDocumentLayout14setPaintDeviceEP12QPaintDevice(void *this_, QPaintDevice * device) {
  ((QAbstractTextDocumentLayout*)this_)->setPaintDevice(device);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:98
// [8] QPaintDevice * paintDevice()
extern "C"
void* C_ZNK27QAbstractTextDocumentLayout11paintDeviceEv(void *this_) {
  return (void*)((QAbstractTextDocumentLayout*)this_)->paintDevice();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:100
// [8] QTextDocument * document()
extern "C"
void* C_ZNK27QAbstractTextDocumentLayout8documentEv(void *this_) {
  return (void*)((QAbstractTextDocumentLayout*)this_)->document();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:102
// [-2] void registerHandler(int, class QObject *)
extern "C"
void C_ZN27QAbstractTextDocumentLayout15registerHandlerEiP7QObject(void *this_, int objectType, QObject * component) {
  ((QAbstractTextDocumentLayout*)this_)->registerHandler(objectType, component);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:103
// [-2] void unregisterHandler(int, class QObject *)
extern "C"
void C_ZN27QAbstractTextDocumentLayout17unregisterHandlerEiP7QObject(void *this_, int objectType, QObject * component) {
  ((QAbstractTextDocumentLayout*)this_)->unregisterHandler(objectType, component);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:104
// [8] QTextObjectInterface * handlerForObject(int)
extern "C"
void* C_ZNK27QAbstractTextDocumentLayout16handlerForObjectEi(void *this_, int objectType) {
  return (void*)((QAbstractTextDocumentLayout*)this_)->handlerForObject(objectType);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:107
// [-2] void update(const class QRectF &)
extern "C"
void C_ZN27QAbstractTextDocumentLayout6updateERK6QRectF(void *this_, QRectF* arg0) {
  ((QAbstractTextDocumentLayout*)this_)->update(*arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:108
// [-2] void updateBlock(const class QTextBlock &)
extern "C"
void C_ZN27QAbstractTextDocumentLayout11updateBlockERK10QTextBlock(void *this_, QTextBlock* block) {
  ((QAbstractTextDocumentLayout*)this_)->updateBlock(*block);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:109
// [-2] void documentSizeChanged(const class QSizeF &)
extern "C"
void C_ZN27QAbstractTextDocumentLayout19documentSizeChangedERK6QSizeF(void *this_, QSizeF* newSize) {
  ((QAbstractTextDocumentLayout*)this_)->documentSizeChanged(*newSize);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:110
// [-2] void pageCountChanged(int)
extern "C"
void C_ZN27QAbstractTextDocumentLayout16pageCountChangedEi(void *this_, int newPages) {
  ((QAbstractTextDocumentLayout*)this_)->pageCountChanged(newPages);
}
//  main block end
